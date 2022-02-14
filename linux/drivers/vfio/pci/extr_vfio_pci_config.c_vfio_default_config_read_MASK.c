
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {struct pci_dev* pdev; scalar_t__ vconfig; } ;
struct perm_bits {scalar_t__ virt; } ;
struct pci_dev {int dummy; } ;
typedef scalar_t__ __le32 ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int) ;
 int FUNC_2 (struct pci_dev*,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_3(struct vfio_pci_device *VAR_0, int VAR_1,
        int VAR_2, struct perm_bits *VAR_3,
        int VAR_4, __le32 *VAR_5)
{
 __le32 VAR_6 = 0;

 FUNC_1(VAR_5, VAR_0->vconfig + VAR_1, VAR_2);

 FUNC_1(&VAR_6, VAR_3->virt + VAR_4, VAR_2);


 if (FUNC_0(~0U >> (32 - (VAR_2 * 8))) != VAR_6) {
  struct pci_dev *VAR_7 = VAR_0->pdev;
  __le32 VAR_8 = 0;
  int VAR_9;

  VAR_9 = FUNC_2(VAR_7, VAR_1, &VAR_8, VAR_2);
  if (VAR_9)
   return VAR_9;

  *VAR_5 = (VAR_8 & ~VAR_6) | (*VAR_5 & VAR_6);
 }

 return VAR_2;
}
