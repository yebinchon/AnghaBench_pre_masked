
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct pcf85063 {int regmap; } ;
struct device {int dummy; } ;
typedef int regs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct pcf85063* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct pcf85063 *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 u8 VAR_7[7];





 VAR_6 = FUNC_3(VAR_5->regmap, VAR_0,
    VAR_1,
    VAR_1);
 if (VAR_6)
  return VAR_6;


 VAR_7[0] = FUNC_0(VAR_4->tm_sec) & 0x7F;

 VAR_7[1] = FUNC_0(VAR_4->tm_min);
 VAR_7[2] = FUNC_0(VAR_4->tm_hour);


 VAR_7[3] = FUNC_0(VAR_4->tm_mday);


 VAR_7[4] = VAR_4->tm_wday & 0x07;


 VAR_7[5] = FUNC_0(VAR_4->tm_mon + 1);


 VAR_7[6] = FUNC_0(VAR_4->tm_year - 100);


 VAR_6 = FUNC_2(VAR_5->regmap, VAR_2,
          VAR_7, sizeof(VAR_7));
 if (VAR_6)
  return VAR_6;






 return FUNC_3(VAR_5->regmap, VAR_0,
      VAR_1, 0);
}
