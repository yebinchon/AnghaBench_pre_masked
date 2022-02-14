
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct sprd_rtc {int valid; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sprd_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,struct rtc_time*) ;
 int FUNC_3 (struct sprd_rtc*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct sprd_rtc *VAR_4 = FUNC_0(VAR_2);
 time64_t VAR_5;
 int VAR_6;

 if (!VAR_4->valid) {
  FUNC_1(VAR_2, "RTC values are invalid\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_5, VAR_3);
 return 0;
}
