
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quirks; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {TYPE_2__* dev; } ;
struct pciserial_board {int dummy; } ;
struct TYPE_4__ {int subsystem_device; int subsystem_vendor; int device; int vendor; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct serial_private*,struct pciserial_board const*,struct uart_8250_port*,int) ;

__attribute__((used)) static int FUNC_2(struct serial_private *VAR_1,
   const struct pciserial_board *VAR_2,
   struct uart_8250_port *VAR_3, int VAR_4)
{
 VAR_3->port.quirks |= VAR_0;
 FUNC_0(&VAR_1->dev->dev,
  "serial8250: skipping TxEn test for device [%04x:%04x] subsystem [%04x:%04x]\n",
  VAR_1->dev->vendor, VAR_1->dev->device,
  VAR_1->dev->subsystem_vendor, VAR_1->dev->subsystem_device);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
