
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {int se_tpg; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct se_node_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int ,struct se_node_acl*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
  const char *VAR_1, size_t VAR_2)
{
 struct se_node_acl *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->se_tpg, VAR_3, VAR_1);

 if (VAR_4 < 0)
  return VAR_4;
 return VAR_2;
}
