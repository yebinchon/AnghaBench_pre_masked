
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {struct clk* private_data; } ;
struct platform_device {size_t id; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct uart_port* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct uart_port *VAR_3 = &VAR_0[VAR_2->id];
 struct clk *VAR_4 = VAR_3->private_data;

 FUNC_1(&VAR_1, VAR_3);
 FUNC_0(VAR_4);

 return 0;
}
