
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ parent; int flags; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++) {
  struct resource *VAR_4 = &VAR_2->resource[VAR_3];

  if (!VAR_4->flags || VAR_4->parent)
   continue;

  FUNC_0(VAR_2, VAR_3);
 }
}
