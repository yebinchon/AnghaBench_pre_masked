
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rio_mport {scalar_t__ sys_size; } ;
struct rio_dev {int hopcount; int destid; TYPE_2__* rswitch; TYPE_1__* net; } ;
struct TYPE_4__ {int * route_table; } ;
struct TYPE_3__ {struct rio_mport* hport; } ;


 int FUNC_0 (struct rio_dev*,int ) ;
 int FUNC_1 (struct rio_dev*,int ) ;
 int FUNC_2 (struct rio_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ,int,...) ;
 int FUNC_7 (struct rio_dev*) ;
 int FUNC_8 (struct rio_dev*,int ,int*) ;
 int FUNC_9 (struct rio_dev*,int ,int) ;
 int FUNC_10 (struct rio_mport*,int ,int ,int ,int,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct rio_dev *VAR_6, u8 VAR_7)
{
 struct rio_mport *VAR_8 = VAR_6->net->hport;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;
 u8 VAR_13;
 u32 VAR_14;

 FUNC_8(VAR_6,
   FUNC_1(VAR_6, VAR_7),
   &VAR_10);

 if ((VAR_10 & VAR_4) &&
     (VAR_10 & (VAR_3 |
     VAR_2))) {

  FUNC_8(VAR_6,
   FUNC_0(VAR_6, VAR_7),
   &VAR_14);
  if (!(VAR_14 & VAR_1)) {
   FUNC_9(VAR_6,
    FUNC_0(VAR_6, VAR_7),
    VAR_14 | VAR_1);
   FUNC_11(50);
   FUNC_9(VAR_6,
    FUNC_0(VAR_6, VAR_7),
    VAR_14);
  }




  FUNC_8(VAR_6,
   FUNC_2(VAR_6, VAR_7),
   &VAR_14);




  VAR_11 = 3;
  while (VAR_11) {
   FUNC_9(VAR_6,
       FUNC_3(VAR_7), 0x40fc8000);
   VAR_12 = 3;
   while (VAR_12--) {
    FUNC_11(50);
    FUNC_8(VAR_6,
     FUNC_2(VAR_6,
           VAR_7),
     &VAR_14);
    if (VAR_14 & VAR_5)
     goto exit_es;
   }

   VAR_11--;
  }
 }

exit_es:

 FUNC_8(VAR_6, FUNC_4(VAR_7), &VAR_9);
 FUNC_6("TSI578[%x:%x] SP%d_INT_STATUS=0x%08x\n",
   VAR_6->destid, VAR_6->hopcount, VAR_7, VAR_9);

 if (VAR_9 & 0x10000) {
  FUNC_8(VAR_6,
    FUNC_5(VAR_7), &VAR_14);
  VAR_14 = (VAR_8->sys_size) ? (VAR_14 >> 16) : (VAR_14 >> 24);
  VAR_13 = VAR_6->rswitch->route_table[VAR_14];
  FUNC_6("RIO: TSI578[%s] P%d LUT Parity Error (destID=%d)\n",
   FUNC_7(VAR_6), VAR_7, VAR_14);
  FUNC_10(VAR_8, VAR_6->destid, VAR_6->hopcount,
    VAR_0, VAR_14, VAR_13);
 }

 FUNC_9(VAR_6, FUNC_4(VAR_7),
       VAR_9 & 0x000700bd);

 return 0;
}
