
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {TYPE_2__* id_entry; int id; int dev; } ;
struct imxuart_platform_data {int flags; } ;
struct imx_uart_data {int dummy; } ;
struct TYPE_3__ {int line; } ;
struct imx_port {int have_rtscts; struct imx_uart_data* devdata; TYPE_1__ port; } ;
struct TYPE_4__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 struct imxuart_platform_data* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct imx_port *VAR_1,
     struct platform_device *VAR_2)
{
 struct imxuart_platform_data *VAR_3 = FUNC_0(&VAR_2->dev);

 VAR_1->port.line = VAR_2->id;
 VAR_1->devdata = (struct imx_uart_data *) VAR_2->id_entry->driver_data;

 if (!VAR_3)
  return;

 if (VAR_3->flags & VAR_0)
  VAR_1->have_rtscts = 1;
}
