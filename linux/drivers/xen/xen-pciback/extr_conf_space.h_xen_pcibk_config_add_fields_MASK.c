
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct config_field {scalar_t__ size; } ;


 int FUNC_0 (struct pci_dev*,struct config_field const*) ;

__attribute__((used)) static inline int FUNC_1(struct pci_dev *VAR_0,
         const struct config_field *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 for (VAR_2 = 0; VAR_1[VAR_2].size != 0; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, &VAR_1[VAR_2]);
  if (VAR_3)
   break;
 }
 return VAR_3;
}
