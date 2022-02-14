
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int id; } ;
struct vfio_region_info_cap_nvlink2_ssatgt {TYPE_1__ header; int tgt; } ;
struct vfio_pci_region {struct vfio_pci_nvgpu_data* data; } ;
struct vfio_pci_nvgpu_data {int gpu_tgt; } ;
struct vfio_pci_device {int dummy; } ;
struct vfio_info_cap {int dummy; } ;
typedef int cap ;


 int VAR_0 ;
 int FUNC_0 (struct vfio_info_cap*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct vfio_pci_device *VAR_1,
  struct vfio_pci_region *VAR_2, struct vfio_info_cap *VAR_3)
{
 struct vfio_pci_nvgpu_data *VAR_4 = VAR_2->data;
 struct vfio_region_info_cap_nvlink2_ssatgt VAR_5 = {
  .header.id = VAR_0,
  .header.version = 1,
  .tgt = VAR_4->gpu_tgt
 };

 return FUNC_0(VAR_3, &VAR_5.header, sizeof(VAR_5));
}
