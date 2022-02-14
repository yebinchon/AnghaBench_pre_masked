
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int tm_sec; int tm_wday; int tm_mon; int tm_year; } ;
struct mt6397_rtc {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mt6397_rtc*,struct rtc_time*,int*) ;
 struct mt6397_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 time64_t VAR_3;
 struct mt6397_rtc *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6, VAR_7;

 do {
  VAR_7 = FUNC_0(VAR_4, VAR_2, &VAR_6);
  if (VAR_7 < 0)
   goto exit;
 } while (VAR_6 < VAR_2->tm_sec);





 VAR_2->tm_year += VAR_0;


 VAR_2->tm_mon--;
 VAR_3 = FUNC_3(VAR_2);




 VAR_5 = FUNC_2(VAR_3, 86400);
 VAR_2->tm_wday = (VAR_5 + 4) % 7;

exit:
 return VAR_7;
}
