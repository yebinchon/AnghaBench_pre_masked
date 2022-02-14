
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int publish_pci_dev_cb ;
struct TYPE_2__ {int (* add ) (struct xen_pcibk_device*,struct pci_dev*,int,int ) ;} ;


 int FUNC_0 (struct xen_pcibk_device*,struct pci_dev*,int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct xen_pcibk_device *VAR_1,
     struct pci_dev *VAR_2,
     int VAR_3,
     publish_pci_dev_cb VAR_4)
{
 if (VAR_0 && VAR_0->add)
  return VAR_0->add(VAR_1, VAR_2, VAR_3, VAR_4);
 return -1;
}
