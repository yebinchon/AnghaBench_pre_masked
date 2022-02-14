
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int flags; int drv_sds_rings; int drv_tx_rings; TYPE_1__* ahw; TYPE_2__* msix_entries; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct msix_entry {int dummy; } ;
struct TYPE_5__ {int entry; } ;
struct TYPE_4__ {int num_msix; scalar_t__ msix_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 TYPE_2__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (int) ;

int FUNC_7(struct qlcnic_adapter *VAR_9, u32 VAR_10)
{
 struct pci_dev *VAR_11 = VAR_9->pdev;
 int VAR_12, VAR_13;

 if (!VAR_9->msix_entries) {
  VAR_9->msix_entries = FUNC_1(VAR_10,
      sizeof(struct msix_entry),
      VAR_3);
  if (!VAR_9->msix_entries)
   return -VAR_1;
 }

 VAR_9->flags &= ~(VAR_7 | VAR_6);

 if (VAR_9->ahw->msix_supported) {
enable_msix:
  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
   VAR_9->msix_entries[VAR_13].entry = VAR_13;

  VAR_12 = FUNC_3(VAR_11,
         VAR_9->msix_entries, 1, VAR_10);

  if (VAR_12 == VAR_10) {
   VAR_9->flags |= VAR_6;
   VAR_9->ahw->num_msix = VAR_10;
   FUNC_0(&VAR_11->dev, "using msi-x interrupts\n");
   return 0;
  } else if (VAR_12 > 0) {
   FUNC_2(VAR_11);

   FUNC_0(&VAR_11->dev,
     "Unable to allocate %d MSI-X vectors, Available vectors %d\n",
     VAR_10, VAR_12);

   if (FUNC_4(VAR_9)) {
    VAR_10 = FUNC_6(VAR_12);
    if (VAR_12 < VAR_4)
     return -VAR_2;
   } else {
    VAR_10 = FUNC_6(VAR_12 - 1);
    VAR_10 += 1;
    if (VAR_12 < VAR_5)
     return -VAR_2;
   }

   if (FUNC_4(VAR_9) &&
       !FUNC_5(VAR_9)) {
    VAR_9->drv_sds_rings = VAR_10;
    VAR_9->drv_tx_rings = VAR_8;
   } else {

    VAR_9->drv_tx_rings = VAR_10 / 2;
    VAR_9->drv_sds_rings = VAR_9->drv_tx_rings;
   }

   if (VAR_10) {
    FUNC_0(&VAR_11->dev,
      "Trying to allocate %d MSI-X interrupt vectors\n",
      VAR_10);
    goto enable_msix;
   }
  } else {
   FUNC_0(&VAR_11->dev,
     "Unable to allocate %d MSI-X vectors, err=%d\n",
     VAR_10, VAR_12);
   return VAR_12;
  }
 }

 return -VAR_0;
}
