
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct platform_device {int dummy; } ;
struct pic32_sport {size_t idx; } ;


 int FUNC_0 (struct pic32_sport*) ;
 int ** VAR_0 ;
 int VAR_1 ;
 struct uart_port* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 struct pic32_sport* FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct uart_port *VAR_3 = FUNC_1(VAR_2);
 struct pic32_sport *VAR_4 = FUNC_3(VAR_3);

 FUNC_4(&VAR_1, VAR_3);
 FUNC_0(VAR_4);
 FUNC_2(VAR_2, ((void*)0));
 VAR_0[VAR_4->idx] = ((void*)0);


 return 0;
}
