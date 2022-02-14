
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* find ) (struct pci_dev*,struct xen_pcibk_device*,unsigned int*,unsigned int*,unsigned int*) ;} ;


 int FUNC_0 (struct pci_dev*,struct xen_pcibk_device*,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct pci_dev *VAR_1,
          struct xen_pcibk_device *VAR_2,
          unsigned int *VAR_3,
          unsigned int *VAR_4,
          unsigned int *VAR_5)
{
 if (VAR_0 && VAR_0->find)
  return VAR_0->find(VAR_1, VAR_2, VAR_3, VAR_4,
            VAR_5);
 return -1;
}
