
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {char* initiatorname; } ;
struct iscsi_node_acl {struct se_node_acl se_node_acl; } ;



__attribute__((used)) static inline char *FUNC_0(
 struct iscsi_node_acl *VAR_0)
{
 struct se_node_acl *VAR_1 = &VAR_0->se_node_acl;

 return &VAR_1->initiatorname[0];
}
