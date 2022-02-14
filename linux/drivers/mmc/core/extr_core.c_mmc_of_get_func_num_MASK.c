
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_0)
{
 u32 VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, "reg", &VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_1;
}
