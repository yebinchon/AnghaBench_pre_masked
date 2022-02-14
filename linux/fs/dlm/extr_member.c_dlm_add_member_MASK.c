
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_member {int comm_seq; int weight; int nodeid; } ;
struct dlm_ls {int ls_num_nodes; } ;
struct dlm_config_node {int comm_seq; int weight; int nodeid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_member*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dlm_member*) ;
 struct dlm_member* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct dlm_ls *VAR_2, struct dlm_config_node *VAR_3)
{
 struct dlm_member *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->nodeid);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 VAR_4->nodeid = VAR_3->nodeid;
 VAR_4->weight = VAR_3->weight;
 VAR_4->comm_seq = VAR_3->comm_seq;
 FUNC_0(VAR_2, VAR_4);
 VAR_2->ls_num_nodes++;
 return 0;
}
