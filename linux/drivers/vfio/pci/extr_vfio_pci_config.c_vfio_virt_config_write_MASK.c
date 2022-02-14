
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {scalar_t__ vconfig; } ;
struct perm_bits {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_1(struct vfio_pci_device *VAR_0, int VAR_1,
      int VAR_2, struct perm_bits *VAR_3,
      int VAR_4, __le32 VAR_5)
{
 FUNC_0(VAR_0->vconfig + VAR_1, &VAR_5, VAR_2);
 return VAR_2;
}
