
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct rtc_wkalrm*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, unsigned int VAR_1)
{
 struct rtc_wkalrm VAR_2 = { .enabled = 0 };






 return VAR_1 ? 0 : FUNC_0(VAR_0, &VAR_2);
}
