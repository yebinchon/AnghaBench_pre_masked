
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_wkalrm {int time; scalar_t__ enabled; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,struct rtc_wkalrm*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 time64_t VAR_4;
 struct rtc_wkalrm VAR_5;
 VAR_3 = FUNC_0(FUNC_3(VAR_0), &VAR_5);
 if (VAR_3 == 0 && VAR_5.enabled) {
  VAR_4 = FUNC_1(&VAR_5.time);
  VAR_3 = FUNC_2(VAR_2, "%lld\n", VAR_4);
 }

 return VAR_3;
}
