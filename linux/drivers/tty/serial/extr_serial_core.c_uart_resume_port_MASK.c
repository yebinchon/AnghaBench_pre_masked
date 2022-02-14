
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; struct tty_struct* tty; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {int line; int lock; int mctrl; struct uart_ops* ops; TYPE_1__* cons; scalar_t__ suspended; int irq; int dev; } ;
struct uart_ops {int (* startup ) (struct uart_port*) ;int (* start_tx ) (struct uart_port*) ;int (* set_mctrl ) (struct uart_port*,int ) ;int (* set_termios ) (struct uart_port*,struct ktermios*,int *) ;} ;
struct uart_match {struct uart_driver* member_1; struct uart_port* member_0; } ;
struct uart_driver {struct uart_state* state; } ;
struct ktermios {scalar_t__ c_cflag; } ;
struct tty_struct {struct ktermios termios; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ cflag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 struct device* FUNC_1 (int ,struct uart_match*,int ) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ktermios*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct uart_port*,struct ktermios*,int *) ;
 int FUNC_13 (struct uart_port*,int ) ;
 int FUNC_14 (struct uart_port*) ;
 int FUNC_15 (struct uart_port*,int ) ;
 int FUNC_16 (struct uart_port*) ;
 int FUNC_17 (struct tty_port*,int) ;
 int FUNC_18 (struct tty_port*,int ) ;
 scalar_t__ FUNC_19 (struct tty_port*) ;
 int FUNC_20 (struct uart_state*,int ) ;
 int FUNC_21 (struct tty_struct*,struct uart_state*,int *) ;
 scalar_t__ FUNC_22 (struct uart_port*) ;
 int FUNC_23 (struct tty_struct*,struct uart_state*) ;

int FUNC_24(struct uart_driver *VAR_3, struct uart_port *VAR_4)
{
 struct uart_state *VAR_5 = VAR_3->state + VAR_4->line;
 struct tty_port *VAR_6 = &VAR_5->port;
 struct device *VAR_7;
 struct uart_match VAR_8 = {VAR_4, VAR_3};
 struct ktermios VAR_9;

 FUNC_7(&VAR_6->mutex);

 VAR_7 = FUNC_1(VAR_4->dev, &VAR_8, VAR_2);
 if (!VAR_4->suspended && FUNC_2(VAR_7)) {
  if (FUNC_5(FUNC_4((VAR_4->irq))))
   FUNC_3(VAR_4->irq);
  FUNC_9(VAR_7);
  FUNC_8(&VAR_6->mutex);
  return 0;
 }
 FUNC_9(VAR_7);
 VAR_4->suspended = 0;




 if (FUNC_22(VAR_4)) {



  FUNC_6(&VAR_9, 0, sizeof(struct ktermios));
  VAR_9.c_cflag = VAR_4->cons->cflag;




  if (VAR_6->tty && VAR_9.c_cflag == 0)
   VAR_9 = VAR_6->tty->termios;

  if (VAR_1)
   FUNC_20(VAR_5, VAR_0);
  VAR_4->ops->set_termios(VAR_4, &VAR_9, ((void*)0));
  if (VAR_1)
   FUNC_0(VAR_4->cons);
 }

 if (FUNC_19(VAR_6)) {
  const struct uart_ops *VAR_10 = VAR_4->ops;
  int VAR_11;

  FUNC_20(VAR_5, VAR_0);
  FUNC_10(&VAR_4->lock);
  VAR_10->set_mctrl(VAR_4, 0);
  FUNC_11(&VAR_4->lock);
  if (VAR_1 || !FUNC_22(VAR_4)) {

   struct tty_struct *VAR_12 = VAR_6->tty;
   VAR_11 = VAR_10->startup(VAR_4);
   if (VAR_11 == 0) {
    if (VAR_12)
     FUNC_21(VAR_12, VAR_5, ((void*)0));
    FUNC_10(&VAR_4->lock);
    VAR_10->set_mctrl(VAR_4, VAR_4->mctrl);
    VAR_10->start_tx(VAR_4);
    FUNC_11(&VAR_4->lock);
    FUNC_17(VAR_6, 1);
   } else {





    FUNC_23(VAR_12, VAR_5);
   }
  }

  FUNC_18(VAR_6, 0);
 }

 FUNC_8(&VAR_6->mutex);

 return 0;
}
