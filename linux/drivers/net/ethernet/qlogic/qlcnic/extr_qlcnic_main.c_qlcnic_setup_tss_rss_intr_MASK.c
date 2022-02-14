
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_adapter {int drv_tss_rings; int drv_tx_rings; int drv_rss_rings; int drv_sds_rings; TYPE_1__* ahw; int netdev; TYPE_2__* msix_entries; int flags; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct msix_entry {int dummy; } ;
struct TYPE_5__ {int entry; } ;
struct TYPE_4__ {int num_msix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (struct pci_dev*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

int FUNC_4(struct qlcnic_adapter *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pdev;
 int VAR_6 = 0, VAR_7 = 0, VAR_8;

 VAR_4->flags &= ~VAR_3;

 if (VAR_4->drv_tss_rings > 0)
  VAR_6 += VAR_4->drv_tss_rings;
 else
  VAR_6 += VAR_4->drv_tx_rings;

 if (VAR_4->drv_rss_rings > 0)
  VAR_6 += VAR_4->drv_rss_rings;
 else
  VAR_6 += VAR_4->drv_sds_rings;

 if (FUNC_3(VAR_4))
  VAR_6 += 1;

 if (!VAR_4->msix_entries) {
  VAR_4->msix_entries = FUNC_0(VAR_6,
      sizeof(struct msix_entry),
      VAR_2);
  if (!VAR_4->msix_entries)
   return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_4->msix_entries[VAR_8].entry = VAR_8;

restore:
 VAR_7 = FUNC_2(VAR_5, VAR_4->msix_entries, VAR_6);
 if (VAR_7 == -VAR_1) {
  if (!VAR_4->drv_tss_rings && !VAR_4->drv_rss_rings)
   return VAR_7;

  FUNC_1(VAR_4->netdev,
       "Unable to allocate %d MSI-X vectors, Available vectors %d\n",
       VAR_6, VAR_7);

  VAR_6 = VAR_4->drv_tx_rings + VAR_4->drv_sds_rings;


  VAR_4->drv_tss_rings = 0;
  VAR_4->drv_rss_rings = 0;

  if (FUNC_3(VAR_4))
   VAR_6 += 1;

  FUNC_1(VAR_4->netdev,
       "Restoring %d Tx, %d SDS rings for total %d vectors.\n",
       VAR_4->drv_tx_rings, VAR_4->drv_sds_rings,
       VAR_6);

  goto restore;
 } else if (VAR_7 < 0) {
  return VAR_7;
 }

 VAR_4->ahw->num_msix = VAR_6;
 if (VAR_4->drv_tss_rings > 0)
  VAR_4->drv_tx_rings = VAR_4->drv_tss_rings;

 if (VAR_4->drv_rss_rings > 0)
  VAR_4->drv_sds_rings = VAR_4->drv_rss_rings;

 return 0;
}
