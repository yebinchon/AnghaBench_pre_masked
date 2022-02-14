
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef unsigned long u8 ;
struct rtc_wkalrm {int time; scalar_t__ enabled; } ;
struct pm8xxx_rtc_regs {unsigned int alarm_en; int alarm_ctrl; int alarm_rw; } ;
struct pm8xxx_rtc {int ctrl_reg_lock; int regmap; struct pm8xxx_rtc_regs* regs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int *,int *) ;
 int FUNC_1 (struct device*,char*) ;
 struct pm8xxx_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,unsigned long*,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int *,unsigned long*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 int VAR_3, VAR_4;
 u8 VAR_5[VAR_0];
 unsigned int VAR_6;
 unsigned long VAR_7, VAR_8;
 struct pm8xxx_rtc *VAR_9 = FUNC_2(VAR_1);
 const struct pm8xxx_rtc_regs *VAR_10 = VAR_9->regs;

 FUNC_6(&VAR_2->time, &VAR_7);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5[VAR_4] = VAR_7 & 0xFF;
  VAR_7 >>= 8;
 }

 FUNC_7(&VAR_9->ctrl_reg_lock, VAR_8);

 VAR_3 = FUNC_3(VAR_9->regmap, VAR_10->alarm_rw, VAR_5,
          sizeof(VAR_5));
 if (VAR_3) {
  FUNC_1(VAR_1, "Write to RTC ALARM register failed\n");
  goto rtc_rw_fail;
 }

 VAR_3 = FUNC_4(VAR_9->regmap, VAR_10->alarm_ctrl, &VAR_6);
 if (VAR_3)
  goto rtc_rw_fail;

 if (VAR_2->enabled)
  VAR_6 |= VAR_10->alarm_en;
 else
  VAR_6 &= ~VAR_10->alarm_en;

 VAR_3 = FUNC_5(VAR_9->regmap, VAR_10->alarm_ctrl, VAR_6);
 if (VAR_3) {
  FUNC_1(VAR_1, "Write to RTC alarm control register failed\n");
  goto rtc_rw_fail;
 }

 FUNC_0(VAR_1, "Alarm Set for h:m:s=%ptRt, y-m-d=%ptRdr\n",
  &VAR_2->time, &VAR_2->time);
rtc_rw_fail:
 FUNC_8(&VAR_9->ctrl_reg_lock, VAR_8);
 return VAR_3;
}
