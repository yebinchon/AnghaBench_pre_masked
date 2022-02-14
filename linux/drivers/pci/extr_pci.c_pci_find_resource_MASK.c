
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct resource*,struct resource*) ;

struct resource *FUNC_1(struct pci_dev *VAR_1, struct resource *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct resource *VAR_4 = &VAR_1->resource[VAR_3];

  if (VAR_4->start && FUNC_0(VAR_4, VAR_2))
   return VAR_4;
 }

 return ((void*)0);
}
