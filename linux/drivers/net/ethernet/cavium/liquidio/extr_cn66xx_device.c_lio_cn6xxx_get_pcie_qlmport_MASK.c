
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {int pcie_port; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct octeon_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct octeon_device *VAR_1)
{



 VAR_1->pcie_port = FUNC_1(VAR_1, VAR_0) & 0xff;

 FUNC_0(&VAR_1->pci_dev->dev, "Using PCIE Port %d\n", VAR_1->pcie_port);
}
