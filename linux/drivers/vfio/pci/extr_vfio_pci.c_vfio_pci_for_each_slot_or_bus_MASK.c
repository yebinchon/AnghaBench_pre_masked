
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_walk_info {int (* fn ) (struct pci_dev*,void*) ;void* data; int slot; int ret; struct pci_dev* pdev; } ;
struct pci_dev {int bus; } ;


 int FUNC_0 (int ,int ,struct vfio_pci_walk_info*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1,
      int (*VAR_2)(struct pci_dev *,
         void *VAR_3), void *VAR_4,
      bool VAR_5)
{
 struct vfio_pci_walk_info VAR_6 = {
  .fn = VAR_2, .data = VAR_4, .pdev = VAR_1, .slot = VAR_5, .ret = 0,
 };

 FUNC_0(VAR_1->bus, VAR_0, &VAR_6);

 return VAR_6.ret;
}
