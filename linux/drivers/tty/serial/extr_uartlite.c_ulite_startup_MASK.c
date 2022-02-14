
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uartlite_data {int clk; } ;
struct uart_port {int irq; int dev; struct uartlite_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int,char*,struct uart_port*) ;
 int FUNC_3 (int,int ,struct uart_port*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_7)
{
 struct uartlite_data *VAR_8 = VAR_7->private_data;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8->clk);
 if (VAR_9) {
  FUNC_1(VAR_7->dev, "Failed to enable clock\n");
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_7->irq, VAR_6, VAR_0 | VAR_1,
     "uartlite", VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_4 | VAR_5,
  VAR_2, VAR_7);
 FUNC_3(VAR_3, VAR_2, VAR_7);

 return 0;
}
