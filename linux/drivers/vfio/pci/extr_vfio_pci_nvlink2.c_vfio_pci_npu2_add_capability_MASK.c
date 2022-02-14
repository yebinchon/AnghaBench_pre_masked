
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int id; } ;
struct vfio_region_info_cap_nvlink2_ssatgt {TYPE_1__ header; int tgt; } ;
struct vfio_region_info_cap_nvlink2_lnkspd {TYPE_1__ header; int link_speed; } ;
struct vfio_pci_region {struct vfio_pci_npu2_data* data; } ;
struct vfio_pci_npu2_data {int link_speed; int gpu_tgt; } ;
struct vfio_pci_device {int dummy; } ;
struct vfio_info_cap {int dummy; } ;
typedef int captgt ;
typedef int capspd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vfio_info_cap*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct vfio_pci_device *VAR_2,
  struct vfio_pci_region *VAR_3, struct vfio_info_cap *VAR_4)
{
 struct vfio_pci_npu2_data *VAR_5 = VAR_3->data;
 struct vfio_region_info_cap_nvlink2_ssatgt VAR_6 = {
  .header.id = VAR_1,
  .header.version = 1,
  .tgt = VAR_5->gpu_tgt
 };
 struct vfio_region_info_cap_nvlink2_lnkspd VAR_7 = {
  .header.id = VAR_0,
  .header.version = 1,
  .link_speed = VAR_5->link_speed
 };
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, &VAR_6.header, sizeof(VAR_6));
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_4, &VAR_7.header, sizeof(VAR_7));
}
