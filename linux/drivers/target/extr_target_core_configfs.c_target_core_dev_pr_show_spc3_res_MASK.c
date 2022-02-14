
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t10_pr_registration {struct se_node_acl* pr_reg_nacl; } ;
struct se_node_acl {char* initiatorname; TYPE_2__* se_tpg; } ;
struct se_device {struct t10_pr_registration* dev_pr_res_holder; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* se_tpg_tfo; } ;
struct TYPE_3__ {char* fabric_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct t10_pr_registration*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct se_device *VAR_1,
  char *VAR_2)
{
 struct se_node_acl *VAR_3;
 struct t10_pr_registration *VAR_4;
 char VAR_5[VAR_0];

 FUNC_1(VAR_5, 0, VAR_0);

 VAR_4 = VAR_1->dev_pr_res_holder;
 if (!VAR_4)
  return FUNC_2(VAR_2, "No SPC-3 Reservation holder\n");

 VAR_3 = VAR_4->pr_reg_nacl;
 FUNC_0(VAR_4, VAR_5, VAR_0);

 return FUNC_2(VAR_2, "SPC-3 Reservation: %s Initiator: %s%s\n",
  VAR_3->se_tpg->se_tpg_tfo->fabric_name,
  VAR_3->initiatorname, VAR_5);
}
