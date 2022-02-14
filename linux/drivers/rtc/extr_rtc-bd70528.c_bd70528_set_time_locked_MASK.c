
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
 int FUNC_0 (struct bd70528_rtc*,int*) ;
 int FUNC_1 (struct bd70528_rtc*,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct bd70528_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,struct bd70528_rtc_data*,int) ;
 int FUNC_5 (int ,int ,struct bd70528_rtc_data*,int) ;
 int FUNC_6 (struct rtc_time*,struct bd70528_rtc_data*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct rtc_time *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct bd70528_rtc_data VAR_6;
 struct bd70528_rtc *VAR_7 = FUNC_3(VAR_1);
 struct rohm_regmap_dev *VAR_8 = VAR_7->mfd;

 VAR_3 = FUNC_0(VAR_7, &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_4(VAR_8->regmap,
      VAR_0, &VAR_6,
      sizeof(VAR_6));
 if (VAR_4) {
  FUNC_2(VAR_1, "Failed to read RTC time registers\n");
  goto renable_out;
 }
 FUNC_6(VAR_2, &VAR_6);

 VAR_4 = FUNC_5(VAR_8->regmap,
       VAR_0, &VAR_6,
       sizeof(VAR_6));
 if (VAR_4) {
  FUNC_2(VAR_1, "Failed to set RTC time\n");
  goto renable_out;
 }

renable_out:
 VAR_3 = FUNC_1(VAR_7, VAR_5);
 if (VAR_4)
  VAR_3 = VAR_4;

 return VAR_3;
}
