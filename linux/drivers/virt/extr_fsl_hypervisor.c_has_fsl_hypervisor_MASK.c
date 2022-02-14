
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 int * FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct device_node *VAR_0;
 int VAR_1;

 VAR_0 = FUNC_0("/hypervisor");
 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_1(VAR_0, "fsl,hv-version", ((void*)0)) != ((void*)0);

 FUNC_2(VAR_0);

 return VAR_1;
}
