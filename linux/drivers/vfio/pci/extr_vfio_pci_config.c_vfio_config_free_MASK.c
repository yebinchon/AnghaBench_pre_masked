
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int * msi_perm; int * pci_config_map; int * vconfig; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct vfio_pci_device *VAR_0)
{
 FUNC_0(VAR_0->vconfig);
 VAR_0->vconfig = ((void*)0);
 FUNC_0(VAR_0->pci_config_map);
 VAR_0->pci_config_map = ((void*)0);
 FUNC_0(VAR_0->msi_perm);
 VAR_0->msi_perm = ((void*)0);
}
