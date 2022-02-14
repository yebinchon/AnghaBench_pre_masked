
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_portal_group {int tpg_se_tpg; int param_list; } ;
struct TYPE_2__ {struct iscsi_portal_group* discovery_tpg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct iscsi_portal_group*) ;

void FUNC_3(void)
{
 struct iscsi_portal_group *VAR_1 = VAR_0->discovery_tpg;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1->param_list);
 FUNC_0(&VAR_1->tpg_se_tpg);

 FUNC_2(VAR_1);
 VAR_0->discovery_tpg = ((void*)0);
}
