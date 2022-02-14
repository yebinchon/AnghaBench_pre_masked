
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef unsigned int u8 ;
struct rtc_time {int dummy; } ;
struct pm8xxx_rtc_regs {int read; } ;
struct pm8xxx_rtc {int regmap; struct pm8xxx_rtc_regs* regs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned long,struct rtc_time*,struct rtc_time*) ;
 int FUNC_1 (struct device*,char*) ;
 struct pm8xxx_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,unsigned int*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (unsigned long,struct rtc_time*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct rtc_time *VAR_2)
{
 int VAR_3;
 u8 VAR_4[VAR_0];
 unsigned long VAR_5;
 unsigned int VAR_6;
 struct pm8xxx_rtc *VAR_7 = FUNC_2(VAR_1);
 const struct pm8xxx_rtc_regs *VAR_8 = VAR_7->regs;

 VAR_3 = FUNC_3(VAR_7->regmap, VAR_8->read, VAR_4, sizeof(VAR_4));
 if (VAR_3) {
  FUNC_1(VAR_1, "RTC read data register failed\n");
  return VAR_3;
 }





 VAR_3 = FUNC_4(VAR_7->regmap, VAR_8->read, &VAR_6);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1, "RTC read data register failed\n");
  return VAR_3;
 }

 if (FUNC_6(VAR_6 < VAR_4[0])) {
  VAR_3 = FUNC_3(VAR_7->regmap, VAR_8->read,
          VAR_4, sizeof(VAR_4));
  if (VAR_3) {
   FUNC_1(VAR_1, "RTC read data register failed\n");
   return VAR_3;
  }
 }

 VAR_5 = VAR_4[0] | (VAR_4[1] << 8) | (VAR_4[2] << 16) |
        ((unsigned long)VAR_4[3] << 24);

 FUNC_5(VAR_5, VAR_2);

 FUNC_0(VAR_1, "secs = %lu, h:m:s == %ptRt, y-m-d = %ptRdr\n", VAR_5, VAR_2, VAR_2);

 return 0;
}
