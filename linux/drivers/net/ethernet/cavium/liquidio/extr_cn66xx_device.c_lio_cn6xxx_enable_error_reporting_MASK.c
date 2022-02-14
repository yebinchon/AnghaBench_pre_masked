
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(struct octeon_device *VAR_1)
{
 u32 VAR_2;

 FUNC_2(VAR_1->pci_dev, VAR_0, &VAR_2);
 if (VAR_2 & 0x000c0000) {
  FUNC_1(&VAR_1->pci_dev->dev, "PCI-E Link error detected: 0x%08x\n",
   VAR_2 & 0x000c0000);
 }

 VAR_2 |= 0xf;

 FUNC_0(&VAR_1->pci_dev->dev, "Enabling PCI-E error reporting..\n");
 FUNC_3(VAR_1->pci_dev, VAR_0, VAR_2);
}
