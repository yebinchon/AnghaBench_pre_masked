
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_2)
{
 u32 VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_2, "port");
 if (!VAR_2)
  return -VAR_0;
 FUNC_2(VAR_2, "reg", &VAR_3);
 FUNC_1(VAR_2);
 return VAR_3 - VAR_1;
}
