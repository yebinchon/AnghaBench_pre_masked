
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; int flags; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_1)
{
 struct resource *VAR_2 = &VAR_1->resource[0];

 if (VAR_2->start & 0x8) {
  VAR_2->flags |= VAR_0;
  VAR_2->start = 0;
  VAR_2->end = 0xf;
 }
}
