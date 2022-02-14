
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tiqn {int tiqn_tpg_lock; int tiqn_active_tpgs; } ;
struct TYPE_2__ {scalar_t__ authentication; } ;
struct iscsi_portal_group {scalar_t__ tpg_state; int tpgt; int tpg_state_lock; TYPE_1__ tpg_attrib; int param_list; struct iscsi_tiqn* tpg_tiqn; } ;
struct iscsi_param {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct iscsi_param* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iscsi_param*,int ) ;
 int FUNC_2 (struct iscsi_portal_group*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct iscsi_portal_group *VAR_5)
{
 struct iscsi_param *VAR_6;
 struct iscsi_tiqn *VAR_7 = VAR_5->tpg_tiqn;
 int VAR_8;

 if (VAR_5->tpg_state == VAR_4) {
  FUNC_4("iSCSI target portal group: %hu is already"
   " active, ignoring request.\n", VAR_5->tpgt);
  return -VAR_2;
 }





 VAR_6 = FUNC_0(VAR_0, VAR_5->param_list);
 if (!VAR_6)
  return -VAR_2;

 if (VAR_5->tpg_attrib.authentication) {
  if (!FUNC_7(VAR_6->value, VAR_3)) {
   VAR_8 = FUNC_1(VAR_6, VAR_1);
   if (VAR_8)
    goto err;
  }

  VAR_8 = FUNC_2(VAR_5, 1);
  if (VAR_8 < 0)
   goto err;
 }

 FUNC_5(&VAR_5->tpg_state_lock);
 VAR_5->tpg_state = VAR_4;
 FUNC_6(&VAR_5->tpg_state_lock);

 FUNC_5(&VAR_7->tiqn_tpg_lock);
 VAR_7->tiqn_active_tpgs++;
 FUNC_3("iSCSI_TPG[%hu] - Enabled iSCSI Target Portal Group\n",
   VAR_5->tpgt);
 FUNC_6(&VAR_7->tiqn_tpg_lock);

 return 0;

err:
 return VAR_8;
}
