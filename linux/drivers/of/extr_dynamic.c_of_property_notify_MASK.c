
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct of_reconfig_data {struct property* old_prop; struct property* prop; struct device_node* dn; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (int,struct of_reconfig_data*) ;

int FUNC_2(int VAR_0, struct device_node *VAR_1,
         struct property *VAR_2, struct property *VAR_3)
{
 struct of_reconfig_data VAR_4;


 if (!FUNC_0(VAR_1))
  return 0;

 VAR_4.dn = VAR_1;
 VAR_4.prop = VAR_2;
 VAR_4.old_prop = VAR_3;
 return FUNC_1(VAR_0, &VAR_4);
}
