
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_pr_registration {int dummy; } ;
struct se_node_acl {TYPE_1__* se_tpg; } ;
struct TYPE_2__ {int proto_id; } ;


 int VAR_0 ;





 int FUNC_0 (struct se_node_acl*,int*,unsigned char*) ;
 int FUNC_1 (struct se_node_acl*,struct t10_pr_registration*,int*,unsigned char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct se_node_acl*,int*,unsigned char*) ;
 int FUNC_4 (struct se_node_acl*,int*,unsigned char*) ;
 int FUNC_5 (struct se_node_acl*,int*,unsigned char*) ;

int FUNC_6(struct se_node_acl *VAR_1,
  struct t10_pr_registration *VAR_2, int *VAR_3,
  unsigned char *VAR_4)
{
 switch (VAR_1->se_tpg->proto_id) {
 case 130:
  return FUNC_3(VAR_1, VAR_3, VAR_4);
 case 129:
  return FUNC_4(VAR_1, VAR_3, VAR_4);
 case 128:
  return FUNC_5(VAR_1, VAR_3, VAR_4);
 case 132:
  return FUNC_0(VAR_1, VAR_3, VAR_4);
 case 131:
  return FUNC_1(VAR_1, VAR_2, VAR_3,
    VAR_4);
 default:
  FUNC_2("Unknown proto_id: 0x%02x\n", VAR_1->se_tpg->proto_id);
  return -VAR_0;
 }
}
