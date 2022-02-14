
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct platform_device {size_t id; } ;


 int ** VAR_0 ;
 int VAR_1 ;
 struct uart_port* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct uart_port *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_1(&VAR_1, VAR_3);
 VAR_0[VAR_2->id] = ((void*)0);

 return 0;
}
