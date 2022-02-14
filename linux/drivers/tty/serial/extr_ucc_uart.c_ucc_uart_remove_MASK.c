
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct uart_qe_port {TYPE_1__ port; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct uart_qe_port*) ;
 struct uart_qe_port* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct uart_qe_port *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_1->dev, "removing /dev/ttyQE%u\n", VAR_2->port.line);

 FUNC_3(&VAR_0, &VAR_2->port);

 FUNC_1(VAR_2);

 return 0;
}
