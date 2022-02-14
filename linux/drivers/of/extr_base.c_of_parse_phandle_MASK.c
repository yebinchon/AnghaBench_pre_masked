
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {struct device_node* np; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node const*,char const*,int *,int ,int,struct of_phandle_args*) ;

struct device_node *FUNC_1(const struct device_node *VAR_0,
         const char *VAR_1, int VAR_2)
{
 struct of_phandle_args VAR_3;

 if (VAR_2 < 0)
  return ((void*)0);

 if (FUNC_0(VAR_0, VAR_1, ((void*)0), 0,
      VAR_2, &VAR_3))
  return ((void*)0);

 return VAR_3.np;
}
