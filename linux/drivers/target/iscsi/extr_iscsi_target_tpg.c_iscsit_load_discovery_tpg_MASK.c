
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * se_tpg_tfo; } ;
struct TYPE_5__ {scalar_t__ authentication; } ;
struct iscsi_portal_group {int sid; TYPE_3__ tpg_se_tpg; int param_list; int tpg_state_lock; int tpg_state; TYPE_1__ tpg_attrib; } ;
struct iscsi_param {int dummy; } ;
struct TYPE_6__ {struct iscsi_portal_group* discovery_tpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct iscsi_param* FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct iscsi_param*,char*) ;
 struct iscsi_portal_group* FUNC_6 (int *,int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_7 (struct iscsi_portal_group*) ;
 int FUNC_8 (struct iscsi_portal_group*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(void)
{
 struct iscsi_param *VAR_4;
 struct iscsi_portal_group *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(((void*)0), 1);
 if (!VAR_5) {
  FUNC_10("Unable to allocate struct iscsi_portal_group\n");
  return -1;
 }




 VAR_5->tpg_se_tpg.se_tpg_tfo = &VAR_2;
 VAR_6 = FUNC_1(((void*)0), &VAR_5->tpg_se_tpg, -1);
 if (VAR_6 < 0) {
  FUNC_8(VAR_5);
  return -1;
 }

 VAR_5->sid = 1;
 FUNC_7(VAR_5);

 if (FUNC_2(&VAR_5->param_list) < 0)
  goto out;






 VAR_4 = FUNC_3(VAR_0, VAR_5->param_list);
 if (!VAR_4)
  goto free_pl_out;

 if (FUNC_5(VAR_4, "CHAP,None") < 0)
  goto free_pl_out;

 VAR_5->tpg_attrib.authentication = 0;

 FUNC_11(&VAR_5->tpg_state_lock);
 VAR_5->tpg_state = VAR_1;
 FUNC_12(&VAR_5->tpg_state_lock);

 VAR_3->discovery_tpg = VAR_5;
 FUNC_9("CORE[0] - Allocated Discovery TPG\n");

 return 0;
free_pl_out:
 FUNC_4(VAR_5->param_list);
out:
 if (VAR_5->sid == 1)
  FUNC_0(&VAR_5->tpg_se_tpg);
 FUNC_8(VAR_5);
 return -1;
}
