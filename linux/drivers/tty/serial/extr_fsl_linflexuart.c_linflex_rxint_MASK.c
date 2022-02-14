
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx; } ;
struct uart_port {int lock; scalar_t__ membase; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct tty_port port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned char FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_port*) ;
 int FUNC_5 (struct tty_port*,unsigned char,unsigned int) ;
 int FUNC_6 (struct uart_port*) ;
 scalar_t__ FUNC_7 (struct uart_port*,unsigned char) ;
 int FUNC_8 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct uart_port *VAR_12 = VAR_11;
 unsigned int VAR_13;
 struct tty_port *VAR_14 = &VAR_12->state->port;
 unsigned long VAR_15, VAR_16;
 unsigned char VAR_17;
 bool VAR_18;

 FUNC_2(&VAR_12->lock, VAR_15);

 VAR_16 = FUNC_1(VAR_12->membase + VAR_9);
 while (VAR_16 & VAR_6) {
  VAR_17 = FUNC_0(VAR_12->membase + VAR_0);
  VAR_18 = 0;
  VAR_13 = VAR_8;
  VAR_12->icount.rx++;

  if (VAR_16 & (VAR_2 | VAR_7 |
         VAR_4 | VAR_5)) {
   if (VAR_16 & VAR_7)
    VAR_16 |= VAR_7;
   if (VAR_16 & VAR_2)
    VAR_16 |= VAR_2;
   if (VAR_16 & VAR_4) {
    if (!VAR_17)
     VAR_18 = 1;
    VAR_16 |= VAR_4;
   }
   if (VAR_16 & VAR_5)
    VAR_16 |= VAR_5;
  }

  FUNC_8(VAR_16 | VAR_6 | VAR_3,
         VAR_12->membase + VAR_9);
  VAR_16 = FUNC_1(VAR_12->membase + VAR_9);

  if (VAR_18) {
   FUNC_6(VAR_12);
  } else {




   FUNC_5(VAR_14, VAR_17, VAR_13);
  }
 }

 FUNC_3(&VAR_12->lock, VAR_15);

 FUNC_4(VAR_14);

 return VAR_1;
}
