
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_dev {int class; struct resource* resource; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct resource*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static inline resource_size_t FUNC_3(struct pci_dev *VAR_3,
           struct resource *VAR_4)
{






 if (VAR_3->class >> 8 == VAR_0)
  return FUNC_0(VAR_4);
 return FUNC_2(VAR_4);
}
