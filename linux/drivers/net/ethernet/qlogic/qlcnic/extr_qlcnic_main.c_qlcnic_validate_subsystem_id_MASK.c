
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {struct pci_dev* pdev; } ;
struct pci_dev {unsigned short subsystem_vendor; scalar_t__ device; scalar_t__ subsystem_device; } ;
struct TYPE_2__ {unsigned short sub_vendor; scalar_t__ sub_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct qlcnic_adapter *VAR_3,
      int VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->pdev;
 unsigned short VAR_6;
 bool VAR_7 = 1;

 VAR_6 = VAR_5->subsystem_vendor;

 if (VAR_5->device == VAR_0 ||
     VAR_5->device == VAR_1) {
  if (VAR_2[VAR_4].sub_vendor == VAR_6 &&
      VAR_2[VAR_4].sub_device == VAR_5->subsystem_device)
   VAR_7 = 1;
  else
   VAR_7 = 0;
 }

 return VAR_7;
}
