
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {int dummy; } ;
struct pci_dev {TYPE_1__* resource; struct pci_driver* driver; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_driver VAR_2 ;

struct pci_driver *FUNC_0(const struct pci_dev *VAR_3)
{
 if (VAR_3->driver)
  return VAR_3->driver;
 else {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++)
   if (VAR_3->resource[VAR_4].flags & VAR_0)
    return &VAR_2;
 }
 return ((void*)0);
}
