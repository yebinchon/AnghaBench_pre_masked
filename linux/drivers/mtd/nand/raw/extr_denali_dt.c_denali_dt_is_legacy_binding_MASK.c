
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(struct device_node *VAR_0)
{
 u32 VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, "#size-cells", &VAR_1);
 if (VAR_2)
  return 1;

 return VAR_1 != 0;
}
