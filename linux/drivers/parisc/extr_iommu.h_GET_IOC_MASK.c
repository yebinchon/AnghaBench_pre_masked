
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_hba_data {struct ioc* iommu; } ;
struct ioc {int dummy; } ;
struct device {int dummy; } ;


 struct pci_hba_data* FUNC_0 (struct device*) ;

__attribute__((used)) static inline struct ioc *FUNC_1(struct device *VAR_0)
{
 struct pci_hba_data *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);
 return VAR_1->iommu;
}
