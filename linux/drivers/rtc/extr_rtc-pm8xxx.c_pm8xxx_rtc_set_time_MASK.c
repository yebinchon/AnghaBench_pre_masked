
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u8 ;
struct rtc_time {int dummy; } ;
struct pm8xxx_rtc_regs {unsigned int alarm_en; scalar_t__ alarm_ctrl; scalar_t__ ctrl; scalar_t__ write; } ;
struct pm8xxx_rtc {int ctrl_reg_lock; int regmap; int allow_set_time; struct pm8xxx_rtc_regs* regs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned long) ;
 int FUNC_1 (struct device*,char*) ;
 struct pm8xxx_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,scalar_t__,int*,int) ;
 int FUNC_4 (int ,scalar_t__,unsigned int*) ;
 int FUNC_5 (int ,scalar_t__,unsigned int) ;
 int FUNC_6 (struct rtc_time*,unsigned long*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, struct rtc_time *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;
 u8 VAR_9[VAR_1], VAR_10 = 0, VAR_11 = 0;
 unsigned int VAR_12, VAR_13;
 struct pm8xxx_rtc *VAR_14 = FUNC_2(VAR_3);
 const struct pm8xxx_rtc_regs *VAR_15 = VAR_14->regs;

 if (!VAR_14->allow_set_time)
  return -VAR_0;

 FUNC_6(VAR_4, &VAR_7);

 FUNC_0(VAR_3, "Seconds value to be written to RTC = %lu\n", VAR_7);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_9[VAR_6] = VAR_7 & 0xFF;
  VAR_7 >>= 8;
 }

 FUNC_7(&VAR_14->ctrl_reg_lock, VAR_8);

 VAR_5 = FUNC_4(VAR_14->regmap, VAR_15->alarm_ctrl, &VAR_12);
 if (VAR_5)
  goto rtc_rw_fail;

 if (VAR_12 & VAR_15->alarm_en) {
  VAR_10 = 1;
  VAR_12 &= ~VAR_15->alarm_en;
  VAR_5 = FUNC_5(VAR_14->regmap, VAR_15->alarm_ctrl, VAR_12);
  if (VAR_5) {
   FUNC_1(VAR_3, "Write to RTC Alarm control register failed\n");
   goto rtc_rw_fail;
  }
 }


 VAR_5 = FUNC_4(VAR_14->regmap, VAR_15->ctrl, &VAR_13);
 if (VAR_5)
  goto rtc_rw_fail;

 if (VAR_13 & VAR_2) {
  VAR_11 = 1;
  VAR_13 &= ~VAR_2;
  VAR_5 = FUNC_5(VAR_14->regmap, VAR_15->ctrl, VAR_13);
  if (VAR_5) {
   FUNC_1(VAR_3, "Write to RTC control register failed\n");
   goto rtc_rw_fail;
  }
 }


 VAR_5 = FUNC_5(VAR_14->regmap, VAR_15->write, 0);
 if (VAR_5) {
  FUNC_1(VAR_3, "Write to RTC write data register failed\n");
  goto rtc_rw_fail;
 }


 VAR_5 = FUNC_3(VAR_14->regmap, VAR_15->write + 1,
          &VAR_9[1], sizeof(VAR_9) - 1);
 if (VAR_5) {
  FUNC_1(VAR_3, "Write to RTC write data register failed\n");
  goto rtc_rw_fail;
 }


 VAR_5 = FUNC_5(VAR_14->regmap, VAR_15->write, VAR_9[0]);
 if (VAR_5) {
  FUNC_1(VAR_3, "Write to RTC write data register failed\n");
  goto rtc_rw_fail;
 }


 if (VAR_11) {
  VAR_13 |= VAR_2;
  VAR_5 = FUNC_5(VAR_14->regmap, VAR_15->ctrl, VAR_13);
  if (VAR_5) {
   FUNC_1(VAR_3, "Write to RTC control register failed\n");
   goto rtc_rw_fail;
  }
 }

 if (VAR_10) {
  VAR_12 |= VAR_15->alarm_en;
  VAR_5 = FUNC_5(VAR_14->regmap, VAR_15->alarm_ctrl, VAR_12);
  if (VAR_5) {
   FUNC_1(VAR_3, "Write to RTC Alarm control register failed\n");
   goto rtc_rw_fail;
  }
 }

rtc_rw_fail:
 FUNC_8(&VAR_14->ctrl_reg_lock, VAR_8);

 return VAR_5;
}
