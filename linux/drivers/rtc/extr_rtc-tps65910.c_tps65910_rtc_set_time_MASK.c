
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910 {int regmap; } ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct tps65910* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned char*,int) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_time *VAR_5)
{
 unsigned char VAR_6[VAR_0];
 struct tps65910 *VAR_7 = FUNC_2(VAR_4->parent);
 int VAR_8;

 VAR_6[0] = FUNC_0(VAR_5->tm_sec);
 VAR_6[1] = FUNC_0(VAR_5->tm_min);
 VAR_6[2] = FUNC_0(VAR_5->tm_hour);
 VAR_6[3] = FUNC_0(VAR_5->tm_mday);
 VAR_6[4] = FUNC_0(VAR_5->tm_mon + 1);
 VAR_6[5] = FUNC_0(VAR_5->tm_year - 100);


 VAR_8 = FUNC_4(VAR_7->regmap, VAR_1,
  VAR_2, 0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_4, "RTC stop failed with err:%d\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_3(VAR_7->regmap, VAR_3, VAR_6,
  VAR_0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_4, "rtc_set_time error %d\n", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_4(VAR_7->regmap, VAR_1,
  VAR_2, 1);
 if (VAR_8 < 0)
  FUNC_1(VAR_4, "RTC start failed with err:%d\n", VAR_8);

 return VAR_8;
}
