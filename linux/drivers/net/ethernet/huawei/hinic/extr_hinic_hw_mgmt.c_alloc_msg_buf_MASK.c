
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_pf_to_mgmt {int sync_msg_buf; int recv_resp_msg_from_mgmt; int recv_msg_from_mgmt; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hinic_pf_to_mgmt*,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hinic_pf_to_mgmt *VAR_3)
{
 struct hinic_hwif *VAR_4 = VAR_3->hwif;
 struct pci_dev *VAR_5 = VAR_4->pdev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3,
        &VAR_3->recv_msg_from_mgmt);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "Failed to allocate recv msg\n");
  return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_3,
        &VAR_3->recv_resp_msg_from_mgmt);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "Failed to allocate resp recv msg\n");
  return VAR_6;
 }

 VAR_3->sync_msg_buf = FUNC_2(&VAR_5->dev,
      VAR_2,
      VAR_1);
 if (!VAR_3->sync_msg_buf)
  return -VAR_0;

 return 0;
}
