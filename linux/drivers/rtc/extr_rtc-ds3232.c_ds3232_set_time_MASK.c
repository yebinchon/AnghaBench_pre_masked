
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct ds3232 {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ds3232* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct ds3232 *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4[7];



 VAR_4[0] = FUNC_0(VAR_2->tm_sec);
 VAR_4[1] = FUNC_0(VAR_2->tm_min);
 VAR_4[2] = FUNC_0(VAR_2->tm_hour);

 VAR_4[3] = FUNC_0(VAR_2->tm_wday + 1);
 VAR_4[4] = FUNC_0(VAR_2->tm_mday);

 VAR_4[5] = FUNC_0(VAR_2->tm_mon + 1);
 if (VAR_2->tm_year >= 100) {
  VAR_4[5] |= 0x80;
  VAR_4[6] = FUNC_0(VAR_2->tm_year - 100);
 } else {
  VAR_4[6] = FUNC_0(VAR_2->tm_year);
 }

 return FUNC_2(VAR_3->regmap, VAR_0, VAR_4, 7);
}
