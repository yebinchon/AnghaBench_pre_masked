
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct slcan {unsigned char* xbuff; int xleft; unsigned char* xhead; TYPE_3__* dev; TYPE_4__* tty; } ;
struct can_frame {int can_id; int can_dlc; int * data; } ;
typedef int canid_t ;
struct TYPE_8__ {TYPE_1__* ops; int flags; } ;
struct TYPE_6__ {int tx_bytes; } ;
struct TYPE_7__ {TYPE_2__ stats; } ;
struct TYPE_5__ {int (* write ) (TYPE_4__*,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 unsigned char* FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(struct slcan *VAR_8, struct can_frame *VAR_9)
{
 int VAR_10, VAR_11;
 unsigned char *VAR_12;
 unsigned char *VAR_13;
 canid_t VAR_14 = VAR_9->can_id;

 VAR_12 = VAR_8->xbuff;

 if (VAR_9->can_id & VAR_2)
  *VAR_12 = 'R';
 else
  *VAR_12 = 'T';


 if (VAR_9->can_id & VAR_0) {
  VAR_14 &= VAR_1;
  VAR_13 = VAR_12 + VAR_4;
 } else {
  *VAR_12 |= 0x20;
  VAR_14 &= VAR_3;
  VAR_13 = VAR_12 + VAR_5;
 }


 VAR_12++;
 while (VAR_13 >= VAR_12) {
  *VAR_13-- = VAR_7[VAR_14 & 0xf];
  VAR_14 >>= 4;
 }

 VAR_12 += (VAR_9->can_id & VAR_0) ? VAR_4 : VAR_5;

 *VAR_12++ = VAR_9->can_dlc + '0';


 if (!(VAR_9->can_id & VAR_2)) {
  for (VAR_11 = 0; VAR_11 < VAR_9->can_dlc; VAR_11++)
   VAR_12 = FUNC_0(VAR_12, VAR_9->data[VAR_11]);
 }

 *VAR_12++ = '\r';
 FUNC_1(VAR_6, &VAR_8->tty->flags);
 VAR_10 = VAR_8->tty->ops->write(VAR_8->tty, VAR_8->xbuff, VAR_12 - VAR_8->xbuff);
 VAR_8->xleft = (VAR_12 - VAR_8->xbuff) - VAR_10;
 VAR_8->xhead = VAR_8->xbuff + VAR_10;
 VAR_8->dev->stats.tx_bytes += VAR_9->can_dlc;
}
