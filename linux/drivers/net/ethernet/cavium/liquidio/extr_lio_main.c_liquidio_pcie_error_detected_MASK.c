
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct octeon_device {TYPE_1__* pci_dev; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_2 ;
 struct octeon_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct octeon_device*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_3,
           pci_channel_state_t VAR_4)
{
 struct octeon_device *VAR_5 = FUNC_2(VAR_3);


 if (VAR_4 == VAR_2) {
  FUNC_1(&VAR_5->pci_dev->dev, "Non-correctable non-fatal error reported:\n");
  FUNC_0(VAR_5->pci_dev);
  return VAR_0;
 }


 FUNC_1(&VAR_5->pci_dev->dev, "Non-correctable FATAL reported by PCI AER driver\n");
 FUNC_3(VAR_5);




 return VAR_1;
}
