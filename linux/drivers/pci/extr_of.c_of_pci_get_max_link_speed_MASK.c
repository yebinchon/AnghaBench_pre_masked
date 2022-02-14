
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,int*) ;

int FUNC_1(struct device_node *VAR_1)
{
 u32 VAR_2;

 if (FUNC_0(VAR_1, "max-link-speed", &VAR_2) ||
     VAR_2 > 4)
  return -VAR_0;

 return VAR_2;
}
