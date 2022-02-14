
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct gasket_internal_desc {TYPE_1__* driver_desc; } ;
struct TYPE_2__ {scalar_t__ pci_id_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct gasket_internal_desc* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,struct pci_dev*) ;

__attribute__((used)) static struct gasket_internal_desc *
FUNC_2(struct pci_dev *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4].driver_desc &&
      VAR_1[VAR_4].driver_desc->pci_id_table &&
      FUNC_1(VAR_1[VAR_4].driver_desc->pci_id_table, VAR_3))
   return &VAR_1[VAR_4];
 }

 return ((void*)0);
}
