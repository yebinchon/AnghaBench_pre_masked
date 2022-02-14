
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wake ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct rohm_regmap_dev {int regmap; } ;
struct device {int dummy; } ;
struct bd70528_rtc_wake {int ctrl; int alm_mask; int time; int data; } ;
struct bd70528_rtc_alm {int ctrl; int alm_mask; int time; int data; } ;
struct bd70528_rtc {struct rohm_regmap_dev* mfd; } ;
typedef int alm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 struct bd70528_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,struct bd70528_rtc_wake*,int) ;
 int FUNC_3 (int ,int ,struct bd70528_rtc_wake*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct bd70528_rtc_wake VAR_6;
 struct bd70528_rtc_alm VAR_7;
 int VAR_8;
 struct bd70528_rtc *VAR_9 = FUNC_1(VAR_4);
 struct rohm_regmap_dev *VAR_10 = VAR_9->mfd;

 VAR_8 = FUNC_2(VAR_10->regmap, VAR_3,
          &VAR_6, sizeof(VAR_6));
 if (VAR_8) {
  FUNC_0(VAR_4, "Failed to read wake regs\n");
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_10->regmap, VAR_2,
          &VAR_7, sizeof(VAR_7));
 if (VAR_8) {
  FUNC_0(VAR_4, "Failed to read alarm regs\n");
  return VAR_8;
 }

 FUNC_4(&VAR_5->time, &VAR_7.data);
 FUNC_5(&VAR_5->time, &VAR_6.time);

 if (VAR_5->enabled) {
  VAR_7.alm_mask &= ~VAR_0;
  VAR_6.ctrl |= VAR_1;
 } else {
  VAR_7.alm_mask |= VAR_0;
  VAR_6.ctrl &= ~VAR_1;
 }

 VAR_8 = FUNC_3(VAR_10->regmap,
    VAR_3, &VAR_6,
    sizeof(VAR_6));
 if (VAR_8) {
  FUNC_0(VAR_4, "Failed to set wake time\n");
  return VAR_8;
 }
 VAR_8 = FUNC_3(VAR_10->regmap, VAR_2,
    &VAR_7, sizeof(VAR_7));
 if (VAR_8)
  FUNC_0(VAR_4, "Failed to set alarm time\n");

 return VAR_8;
}
