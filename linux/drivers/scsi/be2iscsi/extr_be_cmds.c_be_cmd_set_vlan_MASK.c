
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {int interface_handle; struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_set_vlan_req {int vlan_priority; int interface_hndl; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 struct be_cmd_set_vlan_req* FUNC_4 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct beiscsi_hba *VAR_2,
       uint16_t VAR_3)
{
 unsigned int VAR_4;
 struct be_mcc_wrb *VAR_5;
 struct be_cmd_set_vlan_req *VAR_6;
 struct be_ctrl_info *VAR_7 = &VAR_2->ctrl;

 if (FUNC_5(&VAR_7->mbox_lock))
  return 0;
 VAR_5 = FUNC_0(VAR_2, &VAR_4);
 if (!VAR_5) {
  FUNC_6(&VAR_7->mbox_lock);
  return 0;
 }

 VAR_6 = FUNC_4(VAR_5);
 FUNC_3(VAR_5, sizeof(*VAR_5), 1, 0);
 FUNC_1(&VAR_6->hdr, VAR_0,
      VAR_1,
      sizeof(*VAR_6));

 VAR_6->interface_hndl = VAR_2->interface_handle;
 VAR_6->vlan_priority = VAR_3;

 FUNC_2(VAR_2, VAR_4);
 FUNC_6(&VAR_7->mbox_lock);

 return VAR_4;
}
