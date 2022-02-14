
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_reconfig_data {struct device_node* dn; } ;
struct device_node {int dummy; } ;
typedef int rd ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int VAR_1 ;
 int FUNC_2 (struct of_reconfig_data*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct of_reconfig_data*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct device_node *VAR_3)
{
 struct of_reconfig_data VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.dn = VAR_3;

 FUNC_3(&VAR_2);
 FUNC_6(&VAR_1, VAR_5);
 FUNC_0(VAR_3);
 FUNC_7(&VAR_1, VAR_5);

 FUNC_1(VAR_3);
 FUNC_4(&VAR_2);

 FUNC_5(VAR_0, &VAR_4);

 return VAR_6;
}
