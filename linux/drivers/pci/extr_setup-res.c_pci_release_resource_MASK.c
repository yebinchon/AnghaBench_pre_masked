
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ start; scalar_t__ end; int parent; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*,int,struct resource*) ;
 int FUNC_1 (struct resource*) ;
 scalar_t__ FUNC_2 (struct resource*) ;

void FUNC_3(struct pci_dev *VAR_1, int VAR_2)
{
 struct resource *VAR_3 = VAR_1->resource + VAR_2;

 FUNC_0(VAR_1, "BAR %d: releasing %pR\n", VAR_2, VAR_3);

 if (!VAR_3->parent)
  return;

 FUNC_1(VAR_3);
 VAR_3->end = FUNC_2(VAR_3) - 1;
 VAR_3->start = 0;
 VAR_3->flags |= VAR_0;
}
