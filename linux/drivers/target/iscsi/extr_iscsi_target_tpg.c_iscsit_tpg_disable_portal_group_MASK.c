
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iscsi_tiqn {int tiqn_tpg_lock; int tiqn_active_tpgs; } ;
struct iscsi_portal_group {int tpgt; struct iscsi_tiqn* tpg_tiqn; int tpg_state_lock; int tpg_state; } ;
struct TYPE_2__ {struct iscsi_portal_group* discovery_tpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iscsi_portal_group*,int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (struct iscsi_portal_group*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iscsi_portal_group *VAR_4, int VAR_5)
{
 struct iscsi_tiqn *VAR_6;
 u8 VAR_7 = VAR_4->tpg_state;

 FUNC_4(&VAR_4->tpg_state_lock);
 if (VAR_4->tpg_state == VAR_2) {
  FUNC_3("iSCSI Target Portal Group: %hu is already"
   " inactive, ignoring request.\n", VAR_4->tpgt);
  FUNC_5(&VAR_4->tpg_state_lock);
  return -VAR_0;
 }
 VAR_4->tpg_state = VAR_2;
 FUNC_5(&VAR_4->tpg_state_lock);

 FUNC_0(VAR_4, 0);

 if (FUNC_1(VAR_4, VAR_5) < 0) {
  FUNC_4(&VAR_4->tpg_state_lock);
  VAR_4->tpg_state = VAR_7;
  FUNC_5(&VAR_4->tpg_state_lock);
  FUNC_3("Unable to disable iSCSI Target Portal Group:"
   " %hu while active sessions exist, and force=0\n",
   VAR_4->tpgt);
  return -VAR_1;
 }

 VAR_6 = VAR_4->tpg_tiqn;
 if (!VAR_6 || (VAR_4 == VAR_3->discovery_tpg))
  return 0;

 FUNC_4(&VAR_6->tiqn_tpg_lock);
 VAR_6->tiqn_active_tpgs--;
 FUNC_2("iSCSI_TPG[%hu] - Disabled iSCSI Target Portal Group\n",
   VAR_4->tpgt);
 FUNC_5(&VAR_6->tiqn_tpg_lock);

 return 0;
}
