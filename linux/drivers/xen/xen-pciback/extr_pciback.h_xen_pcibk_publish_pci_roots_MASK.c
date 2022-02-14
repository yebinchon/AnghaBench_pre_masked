
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {int dummy; } ;
typedef int publish_pci_root_cb ;
struct TYPE_2__ {int (* publish ) (struct xen_pcibk_device*,int ) ;} ;


 int FUNC_0 (struct xen_pcibk_device*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct xen_pcibk_device *VAR_1,
           publish_pci_root_cb VAR_2)
{
 if (VAR_0 && VAR_0->publish)
  return VAR_0->publish(VAR_1, VAR_2);
 return -1;
}
