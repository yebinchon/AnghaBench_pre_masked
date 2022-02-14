
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rda_uart_port {int port; } ;
struct platform_device {size_t id; } ;


 struct rda_uart_port* FUNC_0 (struct platform_device*) ;
 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct rda_uart_port *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_0, &VAR_3->port);
 VAR_1[VAR_2->id] = ((void*)0);

 return 0;
}
