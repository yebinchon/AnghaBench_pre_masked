
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_device {int dummy; } ;
typedef int (* publish_pci_root_cb ) (struct xen_pcibk_device*,int ,int ) ;



__attribute__((used)) static int FUNC_0(struct xen_pcibk_device *VAR_0,
      publish_pci_root_cb VAR_1)
{

 return VAR_1(VAR_0, 0, 0);
}
