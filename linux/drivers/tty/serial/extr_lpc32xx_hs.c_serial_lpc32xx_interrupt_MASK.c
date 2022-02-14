
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int overrun; int brk; } ;
struct uart_port {int lock; int membase; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tty_port*,int ,int ) ;
 int FUNC_7 (struct tty_port*) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_8, void *VAR_9)
{
 struct uart_port *VAR_10 = VAR_9;
 struct tty_port *VAR_11 = &VAR_10->state->port;
 u32 VAR_12;

 FUNC_4(&VAR_10->lock);


 VAR_12 = FUNC_3(FUNC_0(VAR_10->membase));

 if (VAR_12 & VAR_1) {

  FUNC_10(VAR_1, FUNC_0(VAR_10->membase));
  VAR_10->icount.brk++;
  FUNC_8(VAR_10);
 }


 if (VAR_12 & VAR_2)
  FUNC_10(VAR_2, FUNC_0(VAR_10->membase));

 if (VAR_12 & VAR_3) {

  FUNC_10(VAR_3,
         FUNC_0(VAR_10->membase));
  VAR_10->icount.overrun++;
  FUNC_6(VAR_11, 0, VAR_7);
  FUNC_7(VAR_11);
 }


 if (VAR_12 & (VAR_4 | VAR_5))
  FUNC_1(VAR_10);


 if ((VAR_12 & VAR_6) && (!FUNC_9(VAR_10))) {
  FUNC_10(VAR_6, FUNC_0(VAR_10->membase));
  FUNC_2(VAR_10);
 }

 FUNC_5(&VAR_10->lock);

 return VAR_0;
}
