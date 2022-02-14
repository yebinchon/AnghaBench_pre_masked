
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int* vconfig; struct pci_dev* pdev; } ;
struct perm_bits {int* write; int* virt; } ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct pci_dev*,int,int*,int) ;
 int FUNC_2 (struct pci_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct vfio_pci_device *VAR_0, int VAR_1,
         int VAR_2, struct perm_bits *VAR_3,
         int VAR_4, __le32 VAR_5)
{
 __le32 VAR_6 = 0, VAR_7 = 0;

 FUNC_0(&VAR_7, VAR_3->write + VAR_4, VAR_2);

 if (!VAR_7)
  return VAR_2;

 FUNC_0(&VAR_6, VAR_3->virt + VAR_4, VAR_2);


 if (VAR_7 & VAR_6) {
  __le32 VAR_8 = 0;

  FUNC_0(&VAR_8, VAR_0->vconfig + VAR_1, VAR_2);

  VAR_8 &= ~(VAR_7 & VAR_6);
  VAR_8 |= (VAR_5 & (VAR_7 & VAR_6));

  FUNC_0(VAR_0->vconfig + VAR_1, &VAR_8, VAR_2);
 }


 if (VAR_7 & ~VAR_6) {
  struct pci_dev *VAR_9 = VAR_0->pdev;
  __le32 VAR_10 = 0;
  int VAR_11;

  VAR_11 = FUNC_1(VAR_9, VAR_1, &VAR_10, VAR_2);
  if (VAR_11)
   return VAR_11;

  VAR_10 &= ~(VAR_7 & ~VAR_6);
  VAR_10 |= (VAR_5 & (VAR_7 & ~VAR_6));

  VAR_11 = FUNC_2(VAR_9, VAR_1, VAR_10, VAR_2);
  if (VAR_11)
   return VAR_11;
 }

 return VAR_2;
}
