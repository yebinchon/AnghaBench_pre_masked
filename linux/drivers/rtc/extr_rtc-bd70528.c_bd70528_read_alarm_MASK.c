
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_mday; int tm_mon; int tm_year; } ;
struct rtc_wkalrm {int enabled; scalar_t__ pending; TYPE_1__ time; } ;
struct rohm_regmap_dev {int regmap; } ;
struct device {int dummy; } ;
struct bd70528_rtc_alm {int alm_mask; int data; } ;
struct bd70528_rtc {struct rohm_regmap_dev* mfd; } ;
typedef int alm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct bd70528_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,struct bd70528_rtc_alm*,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct bd70528_rtc_alm VAR_4;
 int VAR_5;
 struct bd70528_rtc *VAR_6 = FUNC_1(VAR_2);
 struct rohm_regmap_dev *VAR_7 = VAR_6->mfd;

 VAR_5 = FUNC_2(VAR_7->regmap, VAR_1,
          &VAR_4, sizeof(VAR_4));
 if (VAR_5) {
  FUNC_0(VAR_2, "Failed to read alarm regs\n");
  return VAR_5;
 }

 FUNC_3(&VAR_4.data, &VAR_3->time);
 VAR_3->time.tm_mday = -1;
 VAR_3->time.tm_mon = -1;
 VAR_3->time.tm_year = -1;
 VAR_3->enabled = !(VAR_4.alm_mask & VAR_0);
 VAR_3->pending = 0;

 return 0;
}
