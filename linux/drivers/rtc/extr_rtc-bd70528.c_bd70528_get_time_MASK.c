
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rohm_regmap_dev {int regmap; } ;
struct device {int dummy; } ;
struct bd70528_rtc_data {int dummy; } ;
struct bd70528_rtc {struct rohm_regmap_dev* mfd; } ;
typedef int rtc_data ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct bd70528_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,struct bd70528_rtc_data*,int) ;
 int FUNC_3 (struct bd70528_rtc_data*,struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct bd70528_rtc *VAR_3 = FUNC_1(VAR_1);
 struct rohm_regmap_dev *VAR_4 = VAR_3->mfd;
 struct bd70528_rtc_data VAR_5;
 int VAR_6;


 VAR_6 = FUNC_2(VAR_4->regmap,
          VAR_0, &VAR_5,
          sizeof(VAR_5));
 if (VAR_6) {
  FUNC_0(VAR_1, "Failed to read RTC time (err %d)\n", VAR_6);
  return VAR_6;
 }

 FUNC_3(&VAR_5, VAR_2);

 return 0;
}
