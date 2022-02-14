
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int dummy; } ;
struct vfio_info_cap_header {int version; int id; } ;
struct vfio_info_cap {int dummy; } ;
typedef int header ;


 int VAR_0 ;
 int FUNC_0 (struct vfio_info_cap*,struct vfio_info_cap_header*,int) ;

__attribute__((used)) static int FUNC_1(struct vfio_pci_device *VAR_1,
         struct vfio_info_cap *VAR_2)
{
 struct vfio_info_cap_header VAR_3 = {
  .id = VAR_0,
  .version = 1
 };

 return FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3));
}
