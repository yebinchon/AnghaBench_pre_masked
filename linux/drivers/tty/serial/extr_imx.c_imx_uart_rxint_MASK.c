
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tty_port {int dummy; } ;
struct TYPE_6__ {int buf_overrun; int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_7__ {unsigned int ignore_status_mask; int read_status_mask; int lock; TYPE_2__ icount; scalar_t__ sysrq; TYPE_1__* state; } ;
struct imx_port {TYPE_3__ port; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {struct tty_port port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_port*) ;
 scalar_t__ FUNC_5 (struct tty_port*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,unsigned char) ;
 scalar_t__ FUNC_8 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_16, void *VAR_17)
{
 struct imx_port *VAR_18 = VAR_17;
 unsigned int VAR_19, VAR_20, VAR_21 = 0;
 struct tty_port *VAR_22 = &VAR_18->port.state->port;

 FUNC_2(&VAR_18->port.lock);

 while (FUNC_0(VAR_18, VAR_13) & VAR_15) {
  u32 VAR_23;

  VAR_20 = VAR_3;
  VAR_18->port.icount.rx++;

  VAR_19 = FUNC_0(VAR_18, VAR_6);

  VAR_23 = FUNC_0(VAR_18, VAR_13);
  if (VAR_23 & VAR_14) {
   FUNC_1(VAR_18, VAR_14, VAR_13);
   if (FUNC_6(&VAR_18->port))
    continue;
  }

  if (FUNC_7(&VAR_18->port, (unsigned char)VAR_19))
   continue;

  if (FUNC_8(VAR_19 & VAR_9)) {
   if (VAR_19 & VAR_7)
    VAR_18->port.icount.brk++;
   else if (VAR_19 & VAR_12)
    VAR_18->port.icount.parity++;
   else if (VAR_19 & VAR_10)
    VAR_18->port.icount.frame++;
   if (VAR_19 & VAR_11)
    VAR_18->port.icount.overrun++;

   if (VAR_19 & VAR_18->port.ignore_status_mask) {
    if (++VAR_21 > 100)
     goto out;
    continue;
   }

   VAR_19 &= (VAR_18->port.read_status_mask | 0xFF);

   if (VAR_19 & VAR_7)
    VAR_20 = VAR_1;
   else if (VAR_19 & VAR_12)
    VAR_20 = VAR_5;
   else if (VAR_19 & VAR_10)
    VAR_20 = VAR_2;
   if (VAR_19 & VAR_11)
    VAR_20 = VAR_4;




  }

  if (VAR_18->port.ignore_status_mask & VAR_8)
   goto out;

  if (FUNC_5(VAR_22, VAR_19, VAR_20) == 0)
   VAR_18->port.icount.buf_overrun++;
 }

out:
 FUNC_3(&VAR_18->port.lock);
 FUNC_4(VAR_22);
 return VAR_0;
}
