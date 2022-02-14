
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct atmel_uart_port {int backup_imr; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 struct atmel_uart_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_3, unsigned int VAR_4,
       unsigned int VAR_5)
{
 struct atmel_uart_port *VAR_6 = FUNC_5(VAR_3);

 switch (VAR_4) {
 case 0:




  FUNC_3(VAR_6->clk);


  FUNC_1(VAR_3, VAR_1, VAR_6->backup_imr);
  break;
 case 3:

  VAR_6->backup_imr = FUNC_0(VAR_3, VAR_2);
  FUNC_1(VAR_3, VAR_0, -1);





  FUNC_2(VAR_6->clk);
  break;
 default:
  FUNC_4(VAR_3->dev, "atmel_serial: unknown pm %d\n", VAR_4);
 }
}
