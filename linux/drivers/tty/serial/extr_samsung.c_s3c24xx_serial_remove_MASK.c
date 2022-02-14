
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct platform_device {int dev; } ;


 struct uart_port* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *,struct uart_port*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct uart_port *VAR_2 = FUNC_0(&VAR_1->dev);

 if (VAR_2) {
  FUNC_1(FUNC_2(VAR_2));
  FUNC_3(&VAR_0, VAR_2);
 }

 FUNC_4(&VAR_0);

 return 0;
}
