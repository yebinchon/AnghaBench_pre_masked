
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_pr_registration {scalar_t__ pr_reg_all_tg_pt; int pr_res_type; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int initiatorname; } ;
struct se_device {int dev_reservation_lock; struct t10_pr_registration* dev_pr_res_holder; } ;
struct TYPE_2__ {int fabric_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct t10_pr_registration*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,int ,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
 struct se_device *VAR_1,
 struct se_portal_group *VAR_2,
 struct se_node_acl *VAR_3,
 struct t10_pr_registration *VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_2(VAR_5, 0, VAR_0);
 FUNC_0(VAR_4, VAR_5, VAR_0);

 FUNC_4(&VAR_1->dev_reservation_lock);
 VAR_1->dev_pr_res_holder = VAR_4;
 FUNC_5(&VAR_1->dev_reservation_lock);

 FUNC_3("SPC-3 PR [%s] Service Action: APTPL RESERVE created"
  " new reservation holder TYPE: %s ALL_TG_PT: %d\n",
  VAR_2->se_tpg_tfo->fabric_name,
  FUNC_1(VAR_4->pr_res_type),
  (VAR_4->pr_reg_all_tg_pt) ? 1 : 0);
 FUNC_3("SPC-3 PR [%s] RESERVE Node: %s%s\n",
  VAR_2->se_tpg_tfo->fabric_name, VAR_3->initiatorname,
  VAR_5);
}
