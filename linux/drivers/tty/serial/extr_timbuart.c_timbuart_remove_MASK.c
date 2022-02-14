
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timbuart_port {int port; int tasklet; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct timbuart_port*) ;
 struct timbuart_port* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct timbuart_port *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->tasklet);
 FUNC_3(&VAR_0, &VAR_2->port);
 FUNC_4(&VAR_0);
 FUNC_0(VAR_2);

 return 0;
}
