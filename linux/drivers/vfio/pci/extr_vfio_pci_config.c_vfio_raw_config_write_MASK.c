
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int pdev; } ;
struct perm_bits {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct vfio_pci_device *VAR_0, int VAR_1,
     int VAR_2, struct perm_bits *VAR_3,
     int VAR_4, __le32 VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0->pdev, VAR_1, VAR_5, VAR_2);
 if (VAR_6)
  return VAR_6;

 return VAR_2;
}
