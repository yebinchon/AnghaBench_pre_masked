
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct icom_port {scalar_t__ status; TYPE_1__* dram; int uart_port; } ;
struct icom_adapter {int numb_ports; TYPE_2__* pci_dev; int base_addr; struct icom_port* port_info; } ;
struct TYPE_4__ {int irq; int dev; } ;
struct TYPE_3__ {int osr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct icom_port*) ;
 int FUNC_3 (struct icom_adapter*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct icom_port*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int,int *) ;

__attribute__((used)) static void FUNC_10(struct icom_adapter *VAR_2)
{
 struct icom_port *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->numb_ports; VAR_4++) {
  VAR_3 = &VAR_2->port_info[VAR_4];

  if (VAR_3->status == VAR_0) {
   FUNC_0(&VAR_2->pci_dev->dev,
     "Device removed\n");

   FUNC_8(&VAR_1,
          &VAR_3->uart_port);


   FUNC_9(0x00, &VAR_3->dram->osr);


   FUNC_5(100);


   FUNC_7(VAR_3);

   FUNC_2(VAR_3);
  }
 }

 FUNC_1(VAR_2->pci_dev->irq, (void *) VAR_2);
 FUNC_4(VAR_2->base_addr);
 FUNC_6(VAR_2->pci_dev);
 FUNC_3(VAR_2);
}
