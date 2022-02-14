
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct abeoz9_rtc_data {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct abeoz9_rtc_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct regmap*,int ,int ,int) ;
 int FUNC_4 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10, struct device_node *VAR_11)
{
 struct abeoz9_rtc_data *VAR_12 = FUNC_2(VAR_10);
 struct regmap *VAR_13 = VAR_12->regmap;
 int VAR_14;


 VAR_14 = FUNC_3(VAR_13, VAR_0,
     VAR_2,
     VAR_4 |
     VAR_1 |
     VAR_3);
 if (VAR_14 < 0) {
  FUNC_1(VAR_10, "unable to set CTRL_1 register (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_13, VAR_5, 0);
 if (VAR_14 < 0) {
  FUNC_1(VAR_10,
   "unable to set control CTRL_INT register (%d)\n",
   VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_13, VAR_6, 0);
 if (VAR_14 < 0) {
  FUNC_1(VAR_10,
   "unable to set control CTRL_INT_FLAG register (%d)\n",
   VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_0(VAR_11);


 VAR_14 |= VAR_9;

 VAR_14 = FUNC_3(VAR_13, VAR_7,
     VAR_8,
     VAR_14);
 if (VAR_14 < 0) {
  FUNC_1(VAR_10, "unable to set EEPROM register (%d)\n", VAR_14);
  return VAR_14;
 }

 return VAR_14;
}
