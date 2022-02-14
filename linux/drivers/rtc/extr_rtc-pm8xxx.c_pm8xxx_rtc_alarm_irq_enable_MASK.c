
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_rtc_regs {unsigned int alarm_en; int alarm_ctrl; } ;
struct pm8xxx_rtc {int ctrl_reg_lock; int regmap; struct pm8xxx_rtc_regs* regs; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 struct pm8xxx_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;
 struct pm8xxx_rtc *VAR_4 = FUNC_1(VAR_0);
 const struct pm8xxx_rtc_regs *VAR_5 = VAR_4->regs;
 unsigned int VAR_6;

 FUNC_4(&VAR_4->ctrl_reg_lock, VAR_3);

 VAR_2 = FUNC_2(VAR_4->regmap, VAR_5->alarm_ctrl, &VAR_6);
 if (VAR_2)
  goto rtc_rw_fail;

 if (VAR_1)
  VAR_6 |= VAR_5->alarm_en;
 else
  VAR_6 &= ~VAR_5->alarm_en;

 VAR_2 = FUNC_3(VAR_4->regmap, VAR_5->alarm_ctrl, VAR_6);
 if (VAR_2) {
  FUNC_0(VAR_0, "Write to RTC control register failed\n");
  goto rtc_rw_fail;
 }

rtc_rw_fail:
 FUNC_5(&VAR_4->ctrl_reg_lock, VAR_3);
 return VAR_2;
}
