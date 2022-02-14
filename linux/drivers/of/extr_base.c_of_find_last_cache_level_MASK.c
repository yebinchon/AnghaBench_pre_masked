
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (unsigned int) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;

int FUNC_4(unsigned int VAR_0)
{
 u32 VAR_1 = 0;
 struct device_node *VAR_2 = ((void*)0), *VAR_3 = FUNC_0(VAR_0);

 while (VAR_3) {
  VAR_2 = VAR_3;
  FUNC_2(VAR_3);
  VAR_3 = FUNC_1(VAR_3);
 }

 FUNC_3(VAR_2, "cache-level", &VAR_1);

 return VAR_1;
}
