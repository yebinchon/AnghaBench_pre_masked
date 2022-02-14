
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_amba_port {int port; } ;
struct amba_device {int dummy; } ;


 struct uart_amba_port* FUNC_0 (struct amba_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct uart_amba_port*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct amba_device *VAR_1)
{
 struct uart_amba_port *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_0, &VAR_2->port);
 FUNC_1(VAR_2);
 return 0;
}
