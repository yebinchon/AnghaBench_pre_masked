
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_core_fabric_ops {char* fabric_name; char* (* tpg_get_wwn ) (struct se_portal_group*) ;int (* tpg_get_tag ) (struct se_portal_group*) ;} ;
struct t10_pr_registration {char* tg_pt_sep_rtpi; int pr_aptpl_target_lun; struct se_node_acl* pr_reg_nacl; } ;
struct se_portal_group {struct target_core_fabric_ops* se_tpg_tfo; } ;
struct se_node_acl {struct se_portal_group* se_tpg; } ;
struct se_device {int dev_reservation_lock; struct t10_pr_registration* dev_pr_res_holder; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct se_device* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (struct se_portal_group*) ;
 char* FUNC_5 (struct se_portal_group*) ;
 int FUNC_6 (struct se_portal_group*) ;

__attribute__((used)) static ssize_t FUNC_7(struct config_item *VAR_0,
  char *VAR_1)
{
 struct se_device *VAR_2 = FUNC_0(VAR_0);
 struct se_node_acl *VAR_3;
 struct se_portal_group *VAR_4;
 struct t10_pr_registration *VAR_5;
 const struct target_core_fabric_ops *VAR_6;
 ssize_t VAR_7 = 0;

 FUNC_1(&VAR_2->dev_reservation_lock);
 VAR_5 = VAR_2->dev_pr_res_holder;
 if (!VAR_5) {
  VAR_7 = FUNC_3(VAR_1, "No SPC-3 Reservation holder\n");
  goto out_unlock;
 }

 VAR_3 = VAR_5->pr_reg_nacl;
 VAR_4 = VAR_3->se_tpg;
 VAR_6 = VAR_4->se_tpg_tfo;

 VAR_7 += FUNC_3(VAR_1+VAR_7, "SPC-3 Reservation: %s"
  " Target Node Endpoint: %s\n", VAR_6->fabric_name,
  VAR_6->tpg_get_wwn(VAR_4));
 VAR_7 += FUNC_3(VAR_1+VAR_7, "SPC-3 Reservation: Relative Port"
  " Identifier Tag: %hu %s Portal Group Tag: %hu"
  " %s Logical Unit: %llu\n", VAR_5->tg_pt_sep_rtpi,
  VAR_6->fabric_name, VAR_6->tpg_get_tag(VAR_4),
  VAR_6->fabric_name, VAR_5->pr_aptpl_target_lun);

out_unlock:
 FUNC_2(&VAR_2->dev_reservation_lock);
 return VAR_7;
}
