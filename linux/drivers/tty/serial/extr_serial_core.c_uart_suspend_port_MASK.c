
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {int line; int suspended; int cons; int name; int dev; int lock; struct uart_ops* ops; int irq; } ;
struct uart_ops {int (* shutdown ) (struct uart_port*) ;int (* tx_empty ) (struct uart_port*) ;int (* stop_rx ) (struct uart_port*) ;int (* set_mctrl ) (struct uart_port*,int ) ;int (* stop_tx ) (struct uart_port*) ;} ;
struct uart_match {struct uart_driver* member_1; struct uart_port* member_0; } ;
struct uart_driver {struct uart_state* state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 struct device* FUNC_2 (int ,struct uart_match*,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct uart_port*) ;
 int FUNC_12 (struct uart_port*,int ) ;
 int FUNC_13 (struct uart_port*) ;
 int FUNC_14 (struct uart_port*) ;
 int FUNC_15 (struct uart_port*) ;
 scalar_t__ FUNC_16 (struct tty_port*) ;
 int FUNC_17 (struct tty_port*,int ) ;
 int FUNC_18 (struct tty_port*,int) ;
 int FUNC_19 (struct uart_state*,int ) ;
 scalar_t__ FUNC_20 (struct uart_port*) ;

int FUNC_21(struct uart_driver *VAR_3, struct uart_port *VAR_4)
{
 struct uart_state *VAR_5 = VAR_3->state + VAR_4->line;
 struct tty_port *VAR_6 = &VAR_5->port;
 struct device *VAR_7;
 struct uart_match VAR_8 = {VAR_4, VAR_3};

 FUNC_6(&VAR_6->mutex);

 VAR_7 = FUNC_2(VAR_4->dev, &VAR_8, VAR_2);
 if (VAR_7 && FUNC_3(VAR_7)) {
  FUNC_4(VAR_4->irq);
  FUNC_8(VAR_7);
  FUNC_7(&VAR_6->mutex);
  return 0;
 }
 FUNC_8(VAR_7);


 if (!VAR_1 && FUNC_20(VAR_4))
  goto unlock;

 VAR_4->suspended = 1;

 if (FUNC_16(VAR_6)) {
  const struct uart_ops *VAR_9 = VAR_4->ops;
  int VAR_10;

  FUNC_18(VAR_6, 1);
  FUNC_17(VAR_6, 0);

  FUNC_9(&VAR_4->lock);
  VAR_9->stop_tx(VAR_4);
  VAR_9->set_mctrl(VAR_4, 0);
  VAR_9->stop_rx(VAR_4);
  FUNC_10(&VAR_4->lock);




  for (VAR_10 = 3; !VAR_9->tx_empty(VAR_4) && VAR_10; VAR_10--)
   FUNC_5(10);
  if (!VAR_10)
   FUNC_1(VAR_4->dev, "%s: Unable to drain transmitter\n",
    VAR_4->name);

  VAR_9->shutdown(VAR_4);
 }




 if (FUNC_20(VAR_4))
  FUNC_0(VAR_4->cons);

 FUNC_19(VAR_5, VAR_0);
unlock:
 FUNC_7(&VAR_6->mutex);

 return 0;
}
