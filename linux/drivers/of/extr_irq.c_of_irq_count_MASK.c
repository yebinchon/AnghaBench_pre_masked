
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int dummy; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,int,struct of_phandle_args*) ;

int FUNC_1(struct device_node *VAR_0)
{
 struct of_phandle_args VAR_1;
 int VAR_2 = 0;

 while (FUNC_0(VAR_0, VAR_2, &VAR_1) == 0)
  VAR_2++;

 return VAR_2;
}
