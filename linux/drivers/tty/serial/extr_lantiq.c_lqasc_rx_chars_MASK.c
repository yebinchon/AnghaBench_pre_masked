
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int overrun; int frame; int parity; int rx; } ;
struct uart_port {unsigned int read_status_mask; unsigned int ignore_status_mask; scalar_t__ membase; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_port *VAR_17)
{
 struct tty_port *VAR_18 = &VAR_17->state->port;
 unsigned int VAR_19 = 0, VAR_20 = 0, VAR_21;

 VAR_21 = FUNC_0(VAR_17->membase + VAR_8) &
    VAR_0;
 while (VAR_21--) {
  u8 VAR_22 = VAR_13;
  VAR_19 = FUNC_2(VAR_17->membase + VAR_9);
  VAR_20 = (FUNC_0(VAR_17->membase + VAR_10)
   & VAR_1) | VAR_16;
  FUNC_3(VAR_18);
  VAR_17->icount.rx++;





  if (VAR_20 & VAR_1) {
   if (VAR_20 & VAR_3) {
    VAR_17->icount.parity++;
    FUNC_1(0, VAR_6,
     VAR_17->membase + VAR_11);
   } else if (VAR_20 & VAR_2) {
    VAR_17->icount.frame++;
    FUNC_1(0, VAR_5,
     VAR_17->membase + VAR_11);
   }
   if (VAR_20 & VAR_4) {
    VAR_17->icount.overrun++;
    FUNC_1(0, VAR_7,
     VAR_17->membase + VAR_11);
   }

   VAR_20 &= VAR_17->read_status_mask;

   if (VAR_20 & VAR_3)
    VAR_22 = VAR_15;
   else if (VAR_20 & VAR_2)
    VAR_22 = VAR_12;
  }

  if ((VAR_20 & VAR_17->ignore_status_mask) == 0)
   FUNC_4(VAR_18, VAR_19, VAR_22);

  if (VAR_20 & VAR_4)





   FUNC_4(VAR_18, 0, VAR_14);
 }

 if (VAR_19 != 0)
  FUNC_3(VAR_18);

 return 0;
}
