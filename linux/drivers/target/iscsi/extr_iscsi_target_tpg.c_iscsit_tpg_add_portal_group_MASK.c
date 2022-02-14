
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tiqn {int tiqn_tpg_lock; int tiqn; int tiqn_ntpgs; int tiqn_tpg_list; } ;
struct TYPE_2__ {struct iscsi_portal_group* tpg; } ;
struct iscsi_portal_group {scalar_t__ tpg_state; int * param_list; int tpgt; int tpg_list; int tpg_state_lock; TYPE_1__ tpg_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iscsi_portal_group*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iscsi_tiqn *VAR_4, struct iscsi_portal_group *VAR_5)
{
 if (VAR_5->tpg_state != VAR_2) {
  FUNC_5("Unable to add iSCSI Target Portal Group: %d"
   " while not in TPG_STATE_FREE state.\n", VAR_5->tpgt);
  return -VAR_0;
 }
 FUNC_2(VAR_5);

 if (FUNC_0(&VAR_5->param_list) < 0)
  goto err_out;

 VAR_5->tpg_attrib.tpg = VAR_5;

 FUNC_6(&VAR_5->tpg_state_lock);
 VAR_5->tpg_state = VAR_3;
 FUNC_7(&VAR_5->tpg_state_lock);

 FUNC_6(&VAR_4->tiqn_tpg_lock);
 FUNC_3(&VAR_5->tpg_list, &VAR_4->tiqn_tpg_list);
 VAR_4->tiqn_ntpgs++;
 FUNC_4("CORE[%s]_TPG[%hu] - Added iSCSI Target Portal Group\n",
   VAR_4->tiqn, VAR_5->tpgt);
 FUNC_7(&VAR_4->tiqn_tpg_lock);

 return 0;
err_out:
 if (VAR_5->param_list) {
  FUNC_1(VAR_5->param_list);
  VAR_5->param_list = ((void*)0);
 }
 return -VAR_1;
}
