
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; int irq; int line; } ;
struct qcom_geni_serial_port {int name; int setup; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int ,int ,int ,int ,struct uart_port*) ;
 int FUNC_3 (int ,int,char*,char*,int ) ;
 struct qcom_geni_serial_port* FUNC_4 (struct uart_port*,struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_2)
{
 int VAR_3;
 struct qcom_geni_serial_port *VAR_4 = FUNC_4(VAR_2, VAR_2);

 FUNC_3(VAR_4->name, sizeof(VAR_4->name),
    "qcom_serial_%s%d",
  (FUNC_5(VAR_2) ? "console" : "uart"), VAR_2->line);

 if (!VAR_4->setup) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_2->irq, VAR_1, VAR_0,
       VAR_4->name, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_2->dev, "Failed to get IRQ ret %d\n", VAR_3);
 return VAR_3;
}
