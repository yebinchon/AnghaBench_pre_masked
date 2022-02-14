
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serial_out; scalar_t__ mapbase; int flags; int iotype; struct f815xxa_data* private_data; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {struct pci_dev* dev; } ;
struct pciserial_board {int dummy; } ;
struct pci_dev {int dev; } ;
struct f815xxa_data {int idx; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct f815xxa_data* FUNC_0 (int *,int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct serial_private *VAR_5,
       const struct pciserial_board *VAR_6,
       struct uart_8250_port *VAR_7, int VAR_8)
{
 struct pci_dev *VAR_9 = VAR_5->dev;
 struct f815xxa_data *VAR_10;

 VAR_10 = FUNC_0(&VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->idx = VAR_8;
 FUNC_2(&VAR_10->lock);

 VAR_7->port.private_data = VAR_10;
 VAR_7->port.iotype = VAR_3;
 VAR_7->port.flags |= VAR_2;
 VAR_7->port.mapbase = FUNC_1(VAR_9, 0) + 8 * VAR_8;
 VAR_7->port.serial_out = VAR_4;

 return 0;
}
