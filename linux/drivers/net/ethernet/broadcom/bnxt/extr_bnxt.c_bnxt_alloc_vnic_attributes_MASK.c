
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct bnxt_vnic_info {int flags; int mc_list_size; scalar_t__ rss_table_dma_addr; scalar_t__ rss_hash_key_dma_addr; void* rss_table; void* rss_hash_key; int fw_grp_ids; void* mc_list; scalar_t__ mc_list_mapping; int uc_list; } ;
struct bnxt {int nr_vnics; int flags; int rx_nr_rings; struct bnxt_vnic_info* vnic_info; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15;
 struct bnxt_vnic_info *VAR_16;
 struct pci_dev *VAR_17 = VAR_12->pdev;
 int VAR_18;

 for (VAR_13 = 0; VAR_13 < VAR_12->nr_vnics; VAR_13++) {
  VAR_16 = &VAR_12->vnic_info[VAR_13];

  if (VAR_16->flags & VAR_6) {
   int VAR_19 = (VAR_3 - 1) * VAR_8;

   if (VAR_19 > 0) {
    VAR_16->uc_list = FUNC_3(VAR_19, VAR_9);
    if (!VAR_16->uc_list) {
     VAR_14 = -VAR_7;
     goto out;
    }
   }
  }

  if (VAR_16->flags & VAR_4) {
   VAR_16->mc_list_size = VAR_2 * VAR_8;
   VAR_16->mc_list =
    FUNC_1(&VAR_17->dev,
         VAR_16->mc_list_size,
         &VAR_16->mc_list_mapping,
         VAR_9);
   if (!VAR_16->mc_list) {
    VAR_14 = -VAR_7;
    goto out;
   }
  }

  if (VAR_12->flags & VAR_0)
   goto vnic_skip_grps;

  if (VAR_16->flags & VAR_5)
   VAR_18 = VAR_12->rx_nr_rings;
  else
   VAR_18 = 1;

  VAR_16->fw_grp_ids = FUNC_2(VAR_18, sizeof(u16), VAR_9);
  if (!VAR_16->fw_grp_ids) {
   VAR_14 = -VAR_7;
   goto out;
  }
vnic_skip_grps:
  if ((VAR_12->flags & VAR_1) &&
      !(VAR_16->flags & VAR_5))
   continue;


  VAR_16->rss_table = FUNC_1(&VAR_17->dev, VAR_11,
           &VAR_16->rss_table_dma_addr,
           VAR_9);
  if (!VAR_16->rss_table) {
   VAR_14 = -VAR_7;
   goto out;
  }

  VAR_15 = FUNC_0(VAR_10 * sizeof(u16));

  VAR_16->rss_hash_key = ((void *)VAR_16->rss_table) + VAR_15;
  VAR_16->rss_hash_key_dma_addr = VAR_16->rss_table_dma_addr + VAR_15;
 }
 return 0;

out:
 return VAR_14;
}
