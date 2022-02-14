
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt_vnic_info {scalar_t__ flags; int * rss_hash_key; int * rss_table; int rss_table_dma_addr; int * mc_list; int mc_list_mapping; int mc_list_size; int * uc_list; int * fw_grp_ids; } ;
struct bnxt {int nr_vnics; struct bnxt_vnic_info* vnic_info; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_1)
{
 int VAR_2;
 struct bnxt_vnic_info *VAR_3;
 struct pci_dev *VAR_4 = VAR_1->pdev;

 if (!VAR_1->vnic_info)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_vnics; VAR_2++) {
  VAR_3 = &VAR_1->vnic_info[VAR_2];

  FUNC_1(VAR_3->fw_grp_ids);
  VAR_3->fw_grp_ids = ((void*)0);

  FUNC_1(VAR_3->uc_list);
  VAR_3->uc_list = ((void*)0);

  if (VAR_3->mc_list) {
   FUNC_0(&VAR_4->dev, VAR_3->mc_list_size,
       VAR_3->mc_list, VAR_3->mc_list_mapping);
   VAR_3->mc_list = ((void*)0);
  }

  if (VAR_3->rss_table) {
   FUNC_0(&VAR_4->dev, VAR_0,
       VAR_3->rss_table,
       VAR_3->rss_table_dma_addr);
   VAR_3->rss_table = ((void*)0);
  }

  VAR_3->rss_hash_key = ((void*)0);
  VAR_3->flags = 0;
 }
}
