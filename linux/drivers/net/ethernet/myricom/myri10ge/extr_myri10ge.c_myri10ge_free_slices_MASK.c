
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int * entry; int bus; } ;
struct myri10ge_slice_state {int napi; int * fw_stats; int fw_stats_bus; TYPE_1__ rx_done; } ;
struct myri10ge_priv {int num_slices; int max_intr_slots; struct myri10ge_slice_state* ss; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (struct myri10ge_slice_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct myri10ge_priv *VAR_0)
{
 struct myri10ge_slice_state *VAR_1;
 struct pci_dev *VAR_2 = VAR_0->pdev;
 size_t VAR_3;
 int VAR_4;

 if (VAR_0->ss == ((void*)0))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_slices; VAR_4++) {
  VAR_1 = &VAR_0->ss[VAR_4];
  if (VAR_1->rx_done.entry != ((void*)0)) {
   VAR_3 = VAR_0->max_intr_slots *
       sizeof(*VAR_1->rx_done.entry);
   FUNC_0(&VAR_2->dev, VAR_3,
       VAR_1->rx_done.entry, VAR_1->rx_done.bus);
   VAR_1->rx_done.entry = ((void*)0);
  }
  if (VAR_1->fw_stats != ((void*)0)) {
   VAR_3 = sizeof(*VAR_1->fw_stats);
   FUNC_0(&VAR_2->dev, VAR_3,
       VAR_1->fw_stats, VAR_1->fw_stats_bus);
   VAR_1->fw_stats = ((void*)0);
  }
  FUNC_2(&VAR_1->napi);
  FUNC_3(&VAR_1->napi);
 }

 FUNC_4();
 FUNC_1(VAR_0->ss);
 VAR_0->ss = ((void*)0);
}
