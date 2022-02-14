
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct pci_dev {int dev; } ;
struct hinic_recv_msg {void* msg_id; void* msg_len; void* async_mgmt_to_pf; void* mod; void* cmd; scalar_t__ msg; } ;
struct hinic_pf_to_mgmt {struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (struct hinic_pf_to_mgmt*,struct hinic_recv_msg*) ;
 int FUNC_4 (struct hinic_pf_to_mgmt*,struct hinic_recv_msg*) ;

__attribute__((used)) static void FUNC_5(struct hinic_pf_to_mgmt *VAR_12,
      u64 *VAR_13, struct hinic_recv_msg *VAR_14)
{
 struct hinic_hwif *VAR_15 = VAR_12->hwif;
 struct pci_dev *VAR_16 = VAR_15->pdev;
 int VAR_17, VAR_18;
 u8 *VAR_19;

 VAR_17 = FUNC_0(*VAR_13, VAR_11);
 VAR_18 = FUNC_0(*VAR_13, VAR_10);

 if (VAR_17 >= (VAR_4 / VAR_9)) {
  FUNC_1(&VAR_16->dev, "recv big mgmt msg\n");
  return;
 }

 VAR_19 = (u8 *)VAR_13 + sizeof(*VAR_13);
 FUNC_2(VAR_14->msg + VAR_17 * VAR_9, VAR_19, VAR_18);

 if (!FUNC_0(*VAR_13, VAR_3))
  return;

 VAR_14->cmd = FUNC_0(*VAR_13, VAR_1);
 VAR_14->mod = FUNC_0(*VAR_13, VAR_6);
 VAR_14->async_mgmt_to_pf = FUNC_0(*VAR_13,
         VAR_0);
 VAR_14->msg_len = FUNC_0(*VAR_13, VAR_8);
 VAR_14->msg_id = FUNC_0(*VAR_13, VAR_7);

 if (FUNC_0(*VAR_13, VAR_2) == VAR_5)
  FUNC_4(VAR_12, VAR_14);
 else
  FUNC_3(VAR_12, VAR_14);
}
