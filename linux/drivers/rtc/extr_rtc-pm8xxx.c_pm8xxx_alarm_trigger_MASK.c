
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_rtc_regs {unsigned int alarm_en; int alarm_ctrl2; int alarm_ctrl; } ;
struct pm8xxx_rtc {int rtc_dev; int regmap; int ctrl_reg_lock; int rtc; struct pm8xxx_rtc_regs* regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct pm8xxx_rtc *VAR_6 = VAR_5;
 const struct pm8xxx_rtc_regs *VAR_7 = VAR_6->regs;
 unsigned int VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 FUNC_3(VAR_6->rtc, 1, VAR_3 | VAR_2);

 FUNC_4(&VAR_6->ctrl_reg_lock, VAR_10);


 VAR_9 = FUNC_1(VAR_6->regmap, VAR_7->alarm_ctrl, &VAR_8);
 if (VAR_9) {
  FUNC_5(&VAR_6->ctrl_reg_lock, VAR_10);
  goto rtc_alarm_handled;
 }

 VAR_8 &= ~VAR_7->alarm_en;

 VAR_9 = FUNC_2(VAR_6->regmap, VAR_7->alarm_ctrl, VAR_8);
 if (VAR_9) {
  FUNC_5(&VAR_6->ctrl_reg_lock, VAR_10);
  FUNC_0(VAR_6->rtc_dev,
   "Write to alarm control register failed\n");
  goto rtc_alarm_handled;
 }

 FUNC_5(&VAR_6->ctrl_reg_lock, VAR_10);


 VAR_9 = FUNC_1(VAR_6->regmap, VAR_7->alarm_ctrl2, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_6->rtc_dev,
   "RTC Alarm control2 register read failed\n");
  goto rtc_alarm_handled;
 }

 VAR_8 |= VAR_1;
 VAR_9 = FUNC_2(VAR_6->regmap, VAR_7->alarm_ctrl2, VAR_8);
 if (VAR_9)
  FUNC_0(VAR_6->rtc_dev,
   "Write to RTC Alarm control2 register failed\n");

rtc_alarm_handled:
 return VAR_0;
}
