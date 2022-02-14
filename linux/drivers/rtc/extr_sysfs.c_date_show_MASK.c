
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,struct rtc_time*) ;
 scalar_t__ FUNC_1 (char*,char*,struct rtc_time*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 struct rtc_time VAR_4;

 VAR_3 = FUNC_0(FUNC_2(VAR_0), &VAR_4);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2, "%ptRd\n", &VAR_4);
}
