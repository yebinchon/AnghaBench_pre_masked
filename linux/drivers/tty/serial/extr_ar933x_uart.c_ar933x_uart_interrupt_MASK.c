
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct ar933x_uart_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct ar933x_uart_port*,int ) ;
 int FUNC_1 (struct ar933x_uart_port*) ;
 int FUNC_2 (struct ar933x_uart_port*) ;
 int FUNC_3 (struct ar933x_uart_port*) ;
 int FUNC_4 (struct ar933x_uart_port*,int ,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct ar933x_uart_port *VAR_10 = VAR_9;
 unsigned int VAR_11;

 VAR_11 = FUNC_0(VAR_10, VAR_1);
 if ((VAR_11 & VAR_0) == 0)
  return VAR_7;

 FUNC_5(&VAR_10->port.lock);

 VAR_11 = FUNC_0(VAR_10, VAR_3);
 VAR_11 &= FUNC_0(VAR_10, VAR_2);

 if (VAR_11 & VAR_4) {
  FUNC_4(VAR_10, VAR_3,
      VAR_4);
  FUNC_1(VAR_10);
 }

 if (VAR_11 & VAR_5) {
  FUNC_4(VAR_10, VAR_3,
      VAR_5);
  FUNC_2(VAR_10);
  FUNC_3(VAR_10);
 }

 FUNC_6(&VAR_10->port.lock);

 return VAR_6;
}
