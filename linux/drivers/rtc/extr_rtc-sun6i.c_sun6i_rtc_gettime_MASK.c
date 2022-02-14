
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sun6i_rtc_dev {scalar_t__ base; } ;
struct rtc_time {int tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 struct sun6i_rtc_dev* FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct sun6i_rtc_dev *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6, VAR_7;




 do {
  VAR_6 = FUNC_7(VAR_5->base + VAR_1);
  VAR_7 = FUNC_7(VAR_5->base + VAR_0);
 } while ((VAR_6 != FUNC_7(VAR_5->base + VAR_1)) ||
   (VAR_7 != FUNC_7(VAR_5->base + VAR_0)));

 VAR_4->tm_sec = FUNC_5(VAR_7);
 VAR_4->tm_min = FUNC_4(VAR_7);
 VAR_4->tm_hour = FUNC_3(VAR_7);

 VAR_4->tm_mday = FUNC_0(VAR_6);
 VAR_4->tm_mon = FUNC_1(VAR_6);
 VAR_4->tm_year = FUNC_2(VAR_6);

 VAR_4->tm_mon -= 1;





 VAR_4->tm_year += VAR_2;

 return 0;
}
