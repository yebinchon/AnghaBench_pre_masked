
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct vfio_pci_device {TYPE_1__* pdev; scalar_t__ nointx; } ;
struct TYPE_4__ {scalar_t__ msix_cap; scalar_t__ msi_cap; scalar_t__ is_virtfn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_4(struct vfio_pci_device *VAR_11, int VAR_12)
{
 if (VAR_12 == VAR_7) {
  u8 VAR_13;

  if (!FUNC_0(VAR_0) ||
      VAR_11->nointx || VAR_11->pdev->is_virtfn)
   return 0;

  FUNC_2(VAR_11->pdev, VAR_1, &VAR_13);

  return VAR_13 ? 1 : 0;
 } else if (VAR_12 == VAR_9) {
  u8 VAR_14;
  u16 VAR_15;

  VAR_14 = VAR_11->pdev->msi_cap;
  if (VAR_14) {
   FUNC_3(VAR_11->pdev,
          VAR_14 + VAR_4, &VAR_15);
   return 1 << ((VAR_15 & VAR_5) >> 1);
  }
 } else if (VAR_12 == VAR_8) {
  u8 VAR_16;
  u16 VAR_17;

  VAR_16 = VAR_11->pdev->msix_cap;
  if (VAR_16) {
   FUNC_3(VAR_11->pdev,
          VAR_16 + VAR_2, &VAR_17);

   return (VAR_17 & VAR_3) + 1;
  }
 } else if (VAR_12 == VAR_6) {
  if (FUNC_1(VAR_11->pdev))
   return 1;
 } else if (VAR_12 == VAR_10) {
  return 1;
 }

 return 0;
}
