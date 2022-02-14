
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u8 ;
struct rtc_wkalrm {int time; } ;
struct pm8xxx_rtc_regs {int alarm_rw; } ;
struct pm8xxx_rtc {int regmap; struct pm8xxx_rtc_regs* regs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int *,int *) ;
 int FUNC_1 (struct device*,char*) ;
 struct pm8xxx_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (unsigned long,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 int VAR_3;
 u8 VAR_4[VAR_0];
 unsigned long VAR_5;
 struct pm8xxx_rtc *VAR_6 = FUNC_2(VAR_1);
 const struct pm8xxx_rtc_regs *VAR_7 = VAR_6->regs;

 VAR_3 = FUNC_3(VAR_6->regmap, VAR_7->alarm_rw, VAR_4,
         sizeof(VAR_4));
 if (VAR_3) {
  FUNC_1(VAR_1, "RTC alarm time read failed\n");
  return VAR_3;
 }

 VAR_5 = VAR_4[0] | (VAR_4[1] << 8) | (VAR_4[2] << 16) |
        ((unsigned long)VAR_4[3] << 24);

 FUNC_4(VAR_5, &VAR_2->time);

 VAR_3 = FUNC_5(&VAR_2->time);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1, "Invalid alarm time read from RTC\n");
  return VAR_3;
 }

 FUNC_0(VAR_1, "Alarm set for - h:m:s=%ptRt, y-m-d=%ptRdr\n",
  &VAR_2->time, &VAR_2->time);

 return 0;
}
