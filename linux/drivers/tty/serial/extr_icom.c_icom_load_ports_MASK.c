
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icom_port {scalar_t__ status; int port; struct icom_adapter* adapter; scalar_t__ dram; } ;
struct icom_adapter {int numb_ports; TYPE_1__* pci_dev; scalar_t__ base_addr; struct icom_port* port_info; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct icom_port*) ;
 int FUNC_2 (struct icom_port*,struct icom_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct icom_adapter *VAR_1)
{
 struct icom_port *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->numb_ports; VAR_3++) {

  VAR_2 = &VAR_1->port_info[VAR_3];

  if (VAR_2->status == VAR_0) {
   FUNC_2(VAR_2, VAR_1, VAR_3);
   VAR_2->dram = VAR_1->base_addr +
     0x2000 * VAR_2->port;

   VAR_2->adapter = VAR_1;


   if (FUNC_1(VAR_2) != 0) {
    FUNC_0(&VAR_2->adapter->pci_dev->dev,
     "Memory allocation for port FAILED\n");
   }
  }
 }
 return 0;
}
