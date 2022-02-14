
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {scalar_t__ vconfig; int pdev; } ;
struct perm_bits {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct vfio_pci_device *VAR_5, int VAR_6,
       int VAR_7, struct perm_bits *VAR_8,
       int VAR_9, __le32 *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_2(VAR_5->pdev, VAR_6, VAR_10, VAR_7);
 if (VAR_11)
  return VAR_11;

 if (VAR_6 >= VAR_3) {
  if (VAR_9 < 4)
   FUNC_0(VAR_10, VAR_5->vconfig + VAR_6, VAR_7);
 } else if (VAR_6 >= VAR_4) {
  if (VAR_9 == VAR_1 && VAR_7 > 1)
   FUNC_0(VAR_10, VAR_5->vconfig + VAR_6,
          FUNC_1(VAR_0, VAR_7));
  else if (VAR_9 == VAR_2)
   FUNC_0(VAR_10, VAR_5->vconfig + VAR_6, 1);
 }

 return VAR_7;
}
