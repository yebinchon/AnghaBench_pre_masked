
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node const*,char*) ;

bool FUNC_2(const struct device_node *VAR_1)
{
 if (FUNC_1(VAR_1, "big-endian"))
  return 1;
 if (FUNC_0(VAR_0) &&
     FUNC_1(VAR_1, "native-endian"))
  return 1;
 return 0;
}
