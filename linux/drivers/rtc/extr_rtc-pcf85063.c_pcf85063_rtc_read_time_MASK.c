
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct pcf85063 {TYPE_1__* rtc; int regmap; } ;
struct device {int dummy; } ;
typedef int regs ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct pcf85063* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct pcf85063 *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 u8 VAR_7[7];







 VAR_6 = FUNC_3(VAR_5->regmap, VAR_1, VAR_7,
         sizeof(VAR_7));
 if (VAR_6)
  return VAR_6;


 if (VAR_7[0] & VAR_2) {
  FUNC_2(&VAR_5->rtc->dev, "Power loss detected, invalid time\n");
  return -VAR_0;
 }

 VAR_4->tm_sec = FUNC_0(VAR_7[0] & 0x7F);
 VAR_4->tm_min = FUNC_0(VAR_7[1] & 0x7F);
 VAR_4->tm_hour = FUNC_0(VAR_7[2] & 0x3F);
 VAR_4->tm_mday = FUNC_0(VAR_7[3] & 0x3F);
 VAR_4->tm_wday = VAR_7[4] & 0x07;
 VAR_4->tm_mon = FUNC_0(VAR_7[5] & 0x1F) - 1;
 VAR_4->tm_year = FUNC_0(VAR_7[6]);
 VAR_4->tm_year += 100;

 return 0;
}
