
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* (* get ) (struct xen_pcibk_device*,unsigned int,unsigned int,unsigned int) ;} ;


 struct pci_dev* FUNC_0 (struct xen_pcibk_device*,unsigned int,unsigned int,unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline struct pci_dev *
FUNC_1(struct xen_pcibk_device *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, unsigned int VAR_4)
{
 if (VAR_0 && VAR_0->get)
  return VAR_0->get(VAR_1, VAR_2, VAR_3, VAR_4);
 return ((void*)0);
}
