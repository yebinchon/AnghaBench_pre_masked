
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ start; scalar_t__ end; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,char*,int,struct resource*) ;
 scalar_t__ FUNC_1 (struct resource*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_3; VAR_5++) {
  struct resource *VAR_6 = &VAR_4->resource[VAR_5];

  if (VAR_6->flags & VAR_0 && FUNC_1(VAR_6) < VAR_2) {
   VAR_6->end = VAR_2 - 1;
   VAR_6->start = 0;
   VAR_6->flags |= VAR_1;
   FUNC_0(VAR_4, "expanded BAR %d to page size: %pR\n",
     VAR_5, VAR_6);
  }
 }
}
