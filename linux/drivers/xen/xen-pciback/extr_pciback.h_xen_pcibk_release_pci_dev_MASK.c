
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {void (* release ) (struct xen_pcibk_device*,struct pci_dev*,int) ;} ;


 void FUNC_0 (struct xen_pcibk_device*,struct pci_dev*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct xen_pcibk_device *VAR_1,
          struct pci_dev *VAR_2, bool VAR_3)
{
 if (VAR_0 && VAR_0->release)
  return VAR_0->release(VAR_1, VAR_2, VAR_3);
}
