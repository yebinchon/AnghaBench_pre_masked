
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_walk_info {int ret; int (* fn ) (struct pci_dev*,int ) ;int data; TYPE_1__* pdev; int slot; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int slot; } ;


 int FUNC_0 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_0, void *VAR_1)
{
 struct vfio_pci_walk_info *VAR_2 = VAR_1;

 if (!VAR_2->slot || FUNC_1(VAR_0, VAR_2->pdev->slot))
  VAR_2->ret = VAR_2->fn(VAR_0, VAR_2->data);

 return VAR_2->ret;
}
