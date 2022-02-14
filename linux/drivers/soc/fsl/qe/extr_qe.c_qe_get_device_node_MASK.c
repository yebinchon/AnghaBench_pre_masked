
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,int *,char*) ;
 struct device_node* FUNC_1 (int *,char*) ;

__attribute__((used)) static struct device_node *FUNC_2(void)
{
 struct device_node *VAR_0;





 VAR_0 = FUNC_0(((void*)0), ((void*)0), "fsl,qe");
 if (VAR_0)
  return VAR_0;
 return FUNC_1(((void*)0), "qe");
}
