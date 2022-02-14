
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct msix_entry {int vector; } ;
struct iwl_trans_pcie {int alloc_vecs; int def_irq; int trans; struct msix_entry* msix_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,int ,int ,int ,char const*,struct msix_entry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 char* FUNC_3 (int *,struct iwl_trans_pcie*,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_5,
          struct iwl_trans_pcie *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->alloc_vecs; VAR_7++) {
  int VAR_8;
  struct msix_entry *VAR_9;
  const char *VAR_10 = FUNC_3(&VAR_5->dev, VAR_6, VAR_7);

  if (!VAR_10)
   return -VAR_0;

  VAR_9 = &VAR_6->msix_entries[VAR_7];
  VAR_8 = FUNC_1(&VAR_5->dev,
      VAR_9->vector,
      VAR_4,
      (VAR_7 == VAR_6->def_irq) ?
      VAR_2 :
      VAR_3,
      VAR_1,
      VAR_10,
      VAR_9);
  if (VAR_8) {
   FUNC_0(VAR_6->trans,
    "Error allocating IRQ %d\n", VAR_7);

   return VAR_8;
  }
 }
 FUNC_2(VAR_6->trans);

 return 0;
}
