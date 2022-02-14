
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; unsigned char tm_wday; int tm_mon; int tm_year; } ;
struct pcf85363 {int regmap; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char FUNC_0 (int) ;
 struct pcf85363* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,size_t,unsigned char*,int) ;
 int FUNC_3 (int ,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct pcf85363 *VAR_13 = FUNC_1(VAR_11);
 unsigned char VAR_14[11];
 unsigned char *VAR_15 = &VAR_14[2];
 int VAR_16;

 VAR_14[0] = VAR_10;
 VAR_14[1] = VAR_9;

 VAR_15[VAR_1] = 0;
 VAR_15[VAR_6] = FUNC_0(VAR_12->tm_sec);
 VAR_15[VAR_4] = FUNC_0(VAR_12->tm_min);
 VAR_15[VAR_3] = FUNC_0(VAR_12->tm_hour);
 VAR_15[VAR_2] = FUNC_0(VAR_12->tm_mday);
 VAR_15[VAR_7] = VAR_12->tm_wday;
 VAR_15[VAR_5] = FUNC_0(VAR_12->tm_mon + 1);
 VAR_15[VAR_8] = FUNC_0(VAR_12->tm_year % 100);

 VAR_16 = FUNC_2(VAR_13->regmap, VAR_0,
    VAR_14, 2);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_13->regmap, VAR_1,
    VAR_15, sizeof(VAR_14) - 2);
 if (VAR_16)
  return VAR_16;

 return FUNC_3(VAR_13->regmap, VAR_0, 0);
}
