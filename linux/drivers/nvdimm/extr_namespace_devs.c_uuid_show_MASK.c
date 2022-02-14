
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 u8 *VAR_3 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 if (VAR_3)
  return FUNC_3(VAR_2, "%pUb\n", VAR_3);
 return FUNC_3(VAR_2, "\n");
}
