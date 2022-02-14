
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9062 {int dev; int regmap; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,int,char*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct da9062 *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 char *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_2(VAR_10->regmap, VAR_0, &VAR_11);
 if (VAR_16 < 0) {
  FUNC_0(VAR_10->dev, "Cannot read chip ID.\n");
  return -VAR_8;
 }
 if (VAR_11 != VAR_6) {
  FUNC_0(VAR_10->dev, "Invalid device ID: 0x%02x\n", VAR_11);
  return -VAR_9;
 }

 VAR_16 = FUNC_2(VAR_10->regmap, VAR_3, &VAR_12);
 if (VAR_16 < 0) {
  FUNC_0(VAR_10->dev, "Cannot read chip variant id.\n");
  return -VAR_8;
 }

 VAR_14 = (VAR_12 & VAR_4) >> VAR_5;

 switch (VAR_14) {
 case 129:
  VAR_15 = "DA9061";
  break;
 case 128:
  VAR_15 = "DA9062";
  break;
 default:
  VAR_15 = "Unknown";
  break;
 }

 FUNC_1(VAR_10->dev,
   "Device detected (device-ID: 0x%02X, var-ID: 0x%02X, %s)\n",
   VAR_11, VAR_12, VAR_15);

 VAR_13 = (VAR_12 & VAR_1) >> VAR_2;

 if (VAR_13 < VAR_7) {
  FUNC_0(VAR_10->dev,
   "Cannot support variant MRC: 0x%02X\n", VAR_13);
  return -VAR_9;
 }

 return VAR_16;
}
