
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct abeoz9_rtc_data {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct abeoz9_rtc_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5)
{
 struct abeoz9_rtc_data *VAR_6 = FUNC_1(VAR_5);
 struct regmap *VAR_7 = VAR_6->regmap;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7, VAR_0, &VAR_9);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5,
   "unable to get CTRL_STATUS register (%d)\n", VAR_8);
  return VAR_8;
 }

 if (VAR_9 & VAR_1) {
  FUNC_2(VAR_5, "power-on reset detected, date is invalid\n");
  return -VAR_4;
 }

 if (VAR_9 & VAR_2) {
  FUNC_2(VAR_5,
    "voltage drops below VLOW1 threshold, date is invalid\n");
  return -VAR_4;
 }

 if ((VAR_9 & VAR_3)) {
  FUNC_2(VAR_5,
    "voltage drops below VLOW2 threshold, date is invalid\n");
  return -VAR_4;
 }

 return 0;
}
