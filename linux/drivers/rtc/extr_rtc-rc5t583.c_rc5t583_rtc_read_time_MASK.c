
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rc5t583 {int regmap; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct rc5t583* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct rc5t583 *VAR_4 = FUNC_2(VAR_2->parent);
 u8 VAR_5[VAR_0];
 int VAR_6;

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_1, VAR_5,
  VAR_0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2, "RTC read time failed with err:%d\n", VAR_6);
  return VAR_6;
 }

 VAR_3->tm_sec = FUNC_0(VAR_5[0]);
 VAR_3->tm_min = FUNC_0(VAR_5[1]);
 VAR_3->tm_hour = FUNC_0(VAR_5[2]);
 VAR_3->tm_wday = FUNC_0(VAR_5[3]);
 VAR_3->tm_mday = FUNC_0(VAR_5[4]);
 VAR_3->tm_mon = FUNC_0(VAR_5[5]) - 1;
 VAR_3->tm_year = FUNC_0(VAR_5[6]) + 100;

 return VAR_6;
}
