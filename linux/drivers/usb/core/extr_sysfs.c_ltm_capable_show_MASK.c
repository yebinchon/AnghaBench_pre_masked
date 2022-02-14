
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 if (FUNC_2(FUNC_1(VAR_0)))
  return FUNC_0(VAR_2, "%s\n", "yes");
 return FUNC_0(VAR_2, "%s\n", "no");
}
