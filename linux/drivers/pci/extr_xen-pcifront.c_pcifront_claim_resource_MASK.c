
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ flags; scalar_t__ start; int parent; } ;
struct pcifront_device {TYPE_1__* xdev; } ;
struct pci_dev {struct resource* resource; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1, void *VAR_2)
{
 struct pcifront_device *VAR_3 = VAR_2;
 int VAR_4;
 struct resource *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = &VAR_1->resource[VAR_4];

  if (!VAR_5->parent && VAR_5->start && VAR_5->flags) {
   FUNC_1(&VAR_3->xdev->dev, "claiming resource %s/%d\n",
    FUNC_3(VAR_1), VAR_4);
   if (FUNC_2(VAR_1, VAR_4)) {
    FUNC_0(&VAR_3->xdev->dev, "Could not claim resource %s/%d! "
     "Device offline. Try using e820_host=1 in the guest config.\n",
     FUNC_3(VAR_1), VAR_4);
   }
  }
 }

 return 0;
}
