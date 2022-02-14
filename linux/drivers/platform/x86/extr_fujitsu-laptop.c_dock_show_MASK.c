
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fujitsu_laptop {int flags_supported; int flags_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fujitsu_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct fujitsu_laptop *VAR_4 = FUNC_0(VAR_1);

 if (!(VAR_4->flags_supported & VAR_0))
  return FUNC_1(VAR_3, "unknown\n");
 if (VAR_4->flags_state & VAR_0)
  return FUNC_1(VAR_3, "docked\n");
 else
  return FUNC_1(VAR_3, "undocked\n");
}
