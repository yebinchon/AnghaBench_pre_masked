
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int regshift; int uartclk; int flags; int membase; int mapbase; int iotype; int type; TYPE_1__* private_data; int irq; int * dev; } ;
struct uart_8250_port {int capabilities; TYPE_2__ port; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct lpss8250_board {int base_baud; int (* setup ) (struct lpss8250*,TYPE_2__*) ;int (* exit ) (struct lpss8250*) ;} ;
struct TYPE_4__ {int line; } ;
struct lpss8250 {struct lpss8250_board* board; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct lpss8250* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct lpss8250*,struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*,int ,int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,struct lpss8250*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int ) ;
 int FUNC_8 (struct uart_8250_port*) ;
 int FUNC_9 (struct lpss8250*,TYPE_2__*) ;
 int FUNC_10 (struct lpss8250*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 struct uart_8250_port VAR_11;
 struct lpss8250 *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_6(VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_12 = FUNC_0(&VAR_9->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->board = (struct lpss8250_board *)VAR_10->driver_data;

 FUNC_3(&VAR_11, 0, sizeof(struct uart_8250_port));

 VAR_11.port.dev = &VAR_9->dev;
 VAR_11.port.irq = VAR_9->irq;
 VAR_11.port.private_data = &VAR_12->data;
 VAR_11.port.type = VAR_2;
 VAR_11.port.iotype = VAR_8;
 VAR_11.port.regshift = 2;
 VAR_11.port.uartclk = VAR_12->board->base_baud * 16;
 VAR_11.port.flags = VAR_7 | VAR_5 | VAR_6;
 VAR_11.capabilities = VAR_4 | VAR_3;
 VAR_11.port.mapbase = FUNC_4(VAR_9, 0);
 VAR_11.port.membase = FUNC_7(VAR_9, 0, 0);
 if (!VAR_11.port.membase)
  return -VAR_0;

 VAR_13 = VAR_12->board->setup(VAR_12, &VAR_11.port);
 if (VAR_13)
  return VAR_13;

 FUNC_1(&VAR_11.port);

 VAR_13 = FUNC_2(VAR_12, &VAR_11);
 if (VAR_13)
  goto err_exit;

 VAR_13 = FUNC_8(&VAR_11);
 if (VAR_13 < 0)
  goto err_exit;

 VAR_12->data.line = VAR_13;

 FUNC_5(VAR_9, VAR_12);
 return 0;

err_exit:
 if (VAR_12->board->exit)
  VAR_12->board->exit(VAR_12);
 return VAR_13;
}
