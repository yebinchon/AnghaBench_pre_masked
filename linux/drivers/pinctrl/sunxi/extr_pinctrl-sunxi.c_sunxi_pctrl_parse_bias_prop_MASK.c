
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_4)
{
 u32 VAR_5;


 if (FUNC_0(VAR_4, "bias-pull-up", ((void*)0)))
  return VAR_3;

 if (FUNC_0(VAR_4, "bias-pull-down", ((void*)0)))
  return VAR_2;

 if (FUNC_0(VAR_4, "bias-disable", ((void*)0)))
  return VAR_1;


 if (FUNC_1(VAR_4, "allwinner,pull", &VAR_5))
  return -VAR_0;

 switch (VAR_5) {
 case 130:
  return VAR_1;
 case 128:
  return VAR_3;
 case 129:
  return VAR_2;
 }

 return -VAR_0;
}
