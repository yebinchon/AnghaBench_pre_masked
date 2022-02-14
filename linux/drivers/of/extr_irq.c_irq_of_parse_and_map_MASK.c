
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int dummy; } ;
struct device_node {int dummy; } ;


 unsigned int FUNC_0 (struct of_phandle_args*) ;
 scalar_t__ FUNC_1 (struct device_node*,int,struct of_phandle_args*) ;

unsigned int FUNC_2(struct device_node *VAR_0, int VAR_1)
{
 struct of_phandle_args VAR_2;

 if (FUNC_1(VAR_0, VAR_1, &VAR_2))
  return 0;

 return FUNC_0(&VAR_2);
}
