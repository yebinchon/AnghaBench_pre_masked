
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_core_fabric_ops {int fabric_name; int (* tpg_get_tag ) (struct se_portal_group*) ;int (* tpg_get_wwn ) (struct se_portal_group*) ;} ;
struct t10_pr_registration {char* pr_res_key; char* pr_reg_aptpl; int pr_res_generation; scalar_t__ pr_reg_all_tg_pt; } ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {int initiatorname; struct se_portal_group* se_tpg; } ;
struct se_device {TYPE_1__* transport; } ;
typedef enum register_type { ____Placeholder_register_type } register_type ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct t10_pr_registration*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,char*,int ,...) ;
 int FUNC_3 (struct se_portal_group*) ;
 int FUNC_4 (struct se_portal_group*) ;

__attribute__((used)) static void FUNC_5(
 const struct target_core_fabric_ops *VAR_3,
 struct se_device *VAR_4,
 struct se_node_acl *VAR_5,
 struct t10_pr_registration *VAR_6,
 enum register_type VAR_7)
{
 struct se_portal_group *VAR_8 = VAR_5->se_tpg;
 char VAR_9[VAR_0];

 FUNC_1(&VAR_9[0], 0, VAR_0);
 FUNC_0(VAR_6, VAR_9, VAR_0);

 FUNC_2("SPC-3 PR [%s] Service Action: REGISTER%s Initiator"
  " Node: %s%s\n", VAR_3->fabric_name, (VAR_7 == VAR_2) ?
  "_AND_MOVE" : (VAR_7 == VAR_1) ?
  "_AND_IGNORE_EXISTING_KEY" : "", VAR_5->initiatorname,
  VAR_9);
 FUNC_2("SPC-3 PR [%s] registration on Target Port: %s,0x%04x\n",
   VAR_3->fabric_name, VAR_3->tpg_get_wwn(VAR_8),
  VAR_3->tpg_get_tag(VAR_8));
 FUNC_2("SPC-3 PR [%s] for %s TCM Subsystem %s Object Target"
  " Port(s)\n", VAR_3->fabric_name,
  (VAR_6->pr_reg_all_tg_pt) ? "ALL" : "SINGLE",
  VAR_4->transport->name);
 FUNC_2("SPC-3 PR [%s] SA Res Key: 0x%016Lx PRgeneration:"
  " 0x%08x  APTPL: %d\n", VAR_3->fabric_name,
  VAR_6->pr_res_key, VAR_6->pr_res_generation,
  VAR_6->pr_reg_aptpl);
}
