
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwdev {int aeqs; } ;
struct hinic_pfhwdev {struct hinic_hwdev hwdev; } ;
struct hinic_pf_to_mgmt {int cmd_chain; scalar_t__ sync_msg_id; int sync_msg_lock; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_pf_to_mgmt*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,struct hinic_pf_to_mgmt*,int ) ;
 int FUNC_3 (int ,struct hinic_hwif*) ;
 int VAR_1 ;
 struct hinic_pfhwdev* FUNC_4 (struct hinic_pf_to_mgmt*) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(struct hinic_pf_to_mgmt *VAR_2,
     struct hinic_hwif *VAR_3)
{
 struct hinic_pfhwdev *VAR_4 = FUNC_4(VAR_2);
 struct hinic_hwdev *VAR_5 = &VAR_4->hwdev;
 struct pci_dev *VAR_6 = VAR_3->pdev;
 int VAR_7;

 VAR_2->hwif = VAR_3;

 FUNC_5(&VAR_2->sync_msg_lock, 1);
 VAR_2->sync_msg_id = 0;

 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7) {
  FUNC_1(&VAR_6->dev, "Failed to allocate msg buffers\n");
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_2->cmd_chain, VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_6->dev, "Failed to initialize cmd chains\n");
  return VAR_7;
 }

 FUNC_2(&VAR_5->aeqs, VAR_0,
     VAR_2,
     VAR_1);
 return 0;
}
