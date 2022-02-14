
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vfio_pci_device {int * vconfig; TYPE_1__* pdev; } ;
struct perm_bits {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ is_virtfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vfio_pci_device*) ;
 int FUNC_5 (struct vfio_pci_device*,int,int,struct perm_bits*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct vfio_pci_device *VAR_2, int VAR_3,
      int VAR_4, struct perm_bits *VAR_5,
      int VAR_6, __le32 *VAR_7)
{
 if (FUNC_1(VAR_6))
  FUNC_4(VAR_2);

 VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 if (VAR_6 == VAR_0 && VAR_2->pdev->is_virtfn) {
  u16 VAR_8 = FUNC_2(*(__le16 *)&VAR_2->vconfig[VAR_0]);
  u32 VAR_9 = FUNC_3(*VAR_7);

  VAR_9 |= VAR_8 & VAR_1;
  *VAR_7 = FUNC_0(VAR_9);
 }

 return VAR_4;
}
