
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_wday; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,struct rtc_time*) ;
 int FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct rtc_time VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_3 = FUNC_0(FUNC_2(&VAR_2), 24 * 60 * 60);
 VAR_4 = FUNC_0(FUNC_2(VAR_1), 24 * 60 * 60);

 return (VAR_2.tm_wday + VAR_4 - VAR_3) % 7 + 1;
}
