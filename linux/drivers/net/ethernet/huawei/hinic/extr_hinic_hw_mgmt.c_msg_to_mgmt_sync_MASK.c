
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dev; } ;
struct completion {int dummy; } ;
struct hinic_recv_msg {scalar_t__ msg_id; scalar_t__ msg_len; int msg; struct completion recv_done; } ;
struct hinic_pf_to_mgmt {int sync_msg_lock; struct hinic_recv_msg recv_resp_msg_from_mgmt; struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
typedef enum mgmt_direction_type { ____Placeholder_mgmt_direction_type } mgmt_direction_type ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct hinic_pf_to_mgmt*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct completion*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (struct hinic_pf_to_mgmt*,int,int ,int *,scalar_t__,int ,int,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_9(struct hinic_pf_to_mgmt *VAR_6,
       enum hinic_mod_type VAR_7, u8 VAR_8,
       u8 *VAR_9, u16 VAR_10,
       u8 *VAR_11, u16 *VAR_12,
       enum mgmt_direction_type VAR_13,
       u16 VAR_14)
{
 struct hinic_hwif *VAR_15 = VAR_6->hwif;
 struct pci_dev *VAR_16 = VAR_15->pdev;
 struct hinic_recv_msg *VAR_17;
 struct completion *VAR_18;
 u16 VAR_19;
 int VAR_20;


 FUNC_2(&VAR_6->sync_msg_lock);

 VAR_17 = &VAR_6->recv_resp_msg_from_mgmt;
 VAR_18 = &VAR_17->recv_done;

 if (VAR_14 == VAR_5)
  VAR_19 = FUNC_0(VAR_6);
 else
  VAR_19 = VAR_14;

 FUNC_3(VAR_18);

 VAR_20 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
          VAR_4, VAR_13, VAR_14);
 if (VAR_20) {
  FUNC_1(&VAR_16->dev, "Failed to send sync msg to mgmt\n");
  goto unlock_sync_msg;
 }

 if (!FUNC_8(VAR_18, VAR_3)) {
  FUNC_1(&VAR_16->dev, "MGMT timeout, MSG id = %d\n", VAR_19);
  VAR_20 = -VAR_1;
  goto unlock_sync_msg;
 }

 FUNC_6();

 if (VAR_17->msg_id != VAR_19) {
  FUNC_1(&VAR_16->dev, "incorrect MSG for id = %d\n", VAR_19);
  VAR_20 = -VAR_0;
  goto unlock_sync_msg;
 }

 if ((VAR_11) && (VAR_17->msg_len <= VAR_2)) {
  FUNC_4(VAR_11, VAR_17->msg, VAR_17->msg_len);
  *VAR_12 = VAR_17->msg_len;
 }

unlock_sync_msg:
 FUNC_7(&VAR_6->sync_msg_lock);
 return VAR_20;
}
