
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsi_tiqn {int tiqn; int tiqn_tpg_lock; int tiqn_ntpgs; } ;
struct iscsi_portal_group {int tpgt; int tpg_list; int tpg_state_lock; int tpg_state; int tpg_se_tpg; int * param_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct iscsi_portal_group*,int) ;
 int FUNC_3 (struct iscsi_portal_group*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(
 struct iscsi_tiqn *VAR_3,
 struct iscsi_portal_group *VAR_4,
 int VAR_5)
{
 u8 VAR_6 = VAR_4->tpg_state;

 FUNC_7(&VAR_4->tpg_state_lock);
 VAR_4->tpg_state = VAR_2;
 FUNC_8(&VAR_4->tpg_state_lock);

 if (FUNC_2(VAR_4, VAR_5) < 0) {
  FUNC_6("Unable to delete iSCSI Target Portal Group:"
   " %hu while active sessions exist, and force=0\n",
   VAR_4->tpgt);
  VAR_4->tpg_state = VAR_6;
  return -VAR_0;
 }

 if (VAR_4->param_list) {
  FUNC_1(VAR_4->param_list);
  VAR_4->param_list = ((void*)0);
 }

 FUNC_0(&VAR_4->tpg_se_tpg);

 FUNC_7(&VAR_4->tpg_state_lock);
 VAR_4->tpg_state = VAR_1;
 FUNC_8(&VAR_4->tpg_state_lock);

 FUNC_7(&VAR_3->tiqn_tpg_lock);
 VAR_3->tiqn_ntpgs--;
 FUNC_4(&VAR_4->tpg_list);
 FUNC_8(&VAR_3->tiqn_tpg_lock);

 FUNC_5("CORE[%s]_TPG[%hu] - Deleted iSCSI Target Portal Group\n",
   VAR_3->tiqn, VAR_4->tpgt);

 FUNC_3(VAR_4);
 return 0;
}
