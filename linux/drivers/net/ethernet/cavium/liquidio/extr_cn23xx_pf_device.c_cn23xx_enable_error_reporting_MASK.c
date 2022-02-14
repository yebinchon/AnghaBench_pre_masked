
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct octeon_device {TYPE_1__* pci_dev; int octeon_id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct octeon_device *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_2(VAR_4->pci_dev, VAR_1, &VAR_5);
 if (VAR_5 & VAR_2) {
  VAR_6 = 0;
  VAR_7 = 0;
  FUNC_2(VAR_4->pci_dev,
          VAR_3,
          &VAR_6);
  FUNC_2(VAR_4->pci_dev,
          VAR_0,
          &VAR_7);
  FUNC_1(&VAR_4->pci_dev->dev, "PCI-E Fatal error detected;\n"
     "\tdev_ctl_status_reg = 0x%08x\n"
     "\tuncorrectable_error_mask_reg = 0x%08x\n"
     "\tcorrectable_error_status_reg = 0x%08x\n",
       VAR_5, VAR_6,
       VAR_7);
 }

 VAR_5 |= 0xf;

 FUNC_0(&VAR_4->pci_dev->dev, "OCTEON[%d]: Enabling PCI-E error reporting..\n",
  VAR_4->octeon_id);
 FUNC_3(VAR_4->pci_dev, VAR_1, VAR_5);
}
