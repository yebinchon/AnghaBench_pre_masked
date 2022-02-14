
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {scalar_t__ pm_mng_profile; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 struct hl_device *VAR_6 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_6))
  return -VAR_0;

 return FUNC_2(VAR_5, "%s\n",
   (VAR_6->pm_mng_profile == VAR_1) ? "auto" :
   (VAR_6->pm_mng_profile == VAR_2) ? "manual" :
   "unknown");
}
