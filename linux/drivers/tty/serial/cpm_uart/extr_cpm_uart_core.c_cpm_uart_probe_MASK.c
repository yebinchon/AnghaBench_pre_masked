
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int line; TYPE_1__* dev; } ;
struct uart_cpm_port {TYPE_2__ port; } ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct uart_cpm_port*) ;
 struct uart_cpm_port* VAR_3 ;
 int FUNC_1 (struct platform_device*,struct uart_cpm_port*) ;
 int VAR_4 ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 int VAR_6 = VAR_4++;
 struct uart_cpm_port *VAR_7 = &VAR_3[VAR_6];
 int VAR_8;

 VAR_7->port.line = VAR_6;

 if (VAR_6 >= VAR_1)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_7);


 VAR_7->port.dev = &VAR_5->dev;

 VAR_8 = FUNC_0(VAR_5->dev.of_node, VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_2(&VAR_2, &VAR_7->port);
}
