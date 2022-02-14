
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt_cp_ring_info {int * hw_stats; int hw_stats_map; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int hw_ring_stats_size; int cp_nr_rings; struct bnxt_napi** bnapi; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2, VAR_3;

 if (!VAR_0->bnapi)
  return;

 VAR_2 = VAR_0->hw_ring_stats_size;

 for (VAR_3 = 0; VAR_3 < VAR_0->cp_nr_rings; VAR_3++) {
  struct bnxt_napi *VAR_4 = VAR_0->bnapi[VAR_3];
  struct bnxt_cp_ring_info *VAR_5 = &VAR_4->cp_ring;

  if (VAR_5->hw_stats) {
   FUNC_0(&VAR_1->dev, VAR_2, VAR_5->hw_stats,
       VAR_5->hw_stats_map);
   VAR_5->hw_stats = ((void*)0);
  }
 }
}
