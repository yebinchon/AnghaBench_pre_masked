
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
 scalar_t__ FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_4)
{
 u32 VAR_5 = 0;

 if (FUNC_0(VAR_4, "trickle-resistor-ohms", &VAR_5))
  return 0;

 switch (VAR_5) {
 case 1000:
  return VAR_0;
 case 5000:
  return VAR_2;
 case 20000:
  return VAR_1;
 case 80000:
  return VAR_3;
 default:
  return 0;
 }
}
