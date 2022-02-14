
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; int lock; int mctrl; int irq; int * membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ,struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int VAR_12 ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_13)
{
 int VAR_14;

 if (VAR_13->membase == ((void*)0))
  return -VAR_1;

 FUNC_1(VAR_13);

 (void)FUNC_2(VAR_13, VAR_9);
 (void)FUNC_2(VAR_13, VAR_11);
 (void)FUNC_2(VAR_13, VAR_6);
 (void)FUNC_2(VAR_13, VAR_10);

 if (FUNC_2(VAR_13, VAR_9) == 0xff)
  return -VAR_1;

 VAR_14 = FUNC_0(VAR_13->irq, VAR_12, 0, FUNC_4(VAR_13), VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_13->type == VAR_2)
  FUNC_8(VAR_0);

 FUNC_5(VAR_13, VAR_7, VAR_8);

 FUNC_6(&VAR_13->lock);
 FUNC_3(VAR_13, VAR_13->mctrl);
 FUNC_7(&VAR_13->lock);

 FUNC_5(VAR_13, VAR_3, VAR_5 | VAR_4);

 (void)FUNC_2(VAR_13, VAR_9);
 (void)FUNC_2(VAR_13, VAR_11);
 (void)FUNC_2(VAR_13, VAR_6);
 (void)FUNC_2(VAR_13, VAR_10);

 return 0;
}
