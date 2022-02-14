
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct portdrv_service_data {struct pcie_port_service_driver* drv; int service; } ;
struct pcie_port_service_driver {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,struct portdrv_service_data*,int ) ;
 int VAR_0 ;

struct pcie_port_service_driver *FUNC_1(struct pci_dev *VAR_1,
       u32 VAR_2)
{
 struct pcie_port_service_driver *VAR_3;
 struct portdrv_service_data VAR_4;

 VAR_4.drv = ((void*)0);
 VAR_4.service = VAR_2;
 FUNC_0(&VAR_1->dev, &VAR_4, VAR_0);

 VAR_3 = VAR_4.drv;
 return VAR_3;
}
