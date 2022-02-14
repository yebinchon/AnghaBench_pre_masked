
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_hba_data {int dummy; } ;
struct device {struct pci_hba_data* platform_data; struct device* parent; } ;


 scalar_t__ FUNC_0 (struct pci_hba_data*) ;

__attribute__((used)) static inline struct pci_hba_data *FUNC_1(struct device *VAR_0)
{
 struct device *VAR_1;

 if (FUNC_0(VAR_0->platform_data))
  return VAR_0->platform_data;


 for (VAR_1 = VAR_0->parent;
      VAR_1;
      VAR_1 = VAR_1->parent) {
  if (VAR_1->platform_data) {
   VAR_0->platform_data = VAR_1->platform_data;
   break;
  }
 }

 return VAR_0->platform_data;
}
