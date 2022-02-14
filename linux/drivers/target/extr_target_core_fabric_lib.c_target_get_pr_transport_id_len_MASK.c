
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_pr_registration {int dummy; } ;
struct se_node_acl {TYPE_1__* se_tpg; } ;
struct TYPE_2__ {int proto_id; } ;


 int VAR_0 ;





 int FUNC_0 (struct se_node_acl*,struct t10_pr_registration*,int*) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct se_node_acl *VAR_1,
  struct t10_pr_registration *VAR_2, int *VAR_3)
{
 switch (VAR_1->se_tpg->proto_id) {
 case 132:
 case 129:
 case 128:
 case 130:
  break;
 case 131:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 default:
  FUNC_1("Unknown proto_id: 0x%02x\n", VAR_1->se_tpg->proto_id);
  return -VAR_0;
 }




 *VAR_3 = 0;
 return 24;
}
