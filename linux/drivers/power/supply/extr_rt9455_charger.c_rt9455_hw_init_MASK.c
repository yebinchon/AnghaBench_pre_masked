
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt9455_info {int voreg; int * regmap_fields; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int) ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int FUNC_3 (struct rt9455_info*) ;
 int FUNC_4 (struct rt9455_info*,int ,int*,int,int) ;
 int* VAR_16 ;
 int* VAR_17 ;

__attribute__((used)) static int FUNC_5(struct rt9455_info *VAR_18, u32 VAR_19,
     u32 VAR_20,
     u32 VAR_21, u32 VAR_22)
{
 struct device *VAR_23 = &VAR_18->client->dev;
 int VAR_24, VAR_25;

 VAR_25 = FUNC_3(VAR_18);
 if (VAR_25) {
  FUNC_1(VAR_23, "Power On Reset failed\n");
  return VAR_25;
 }


 VAR_25 = FUNC_2(VAR_18->regmap_fields[VAR_7], 1);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set TE bit\n");
  return VAR_25;
 }


 VAR_25 = FUNC_2(VAR_18->regmap_fields[VAR_8], 1);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set TE_SHDN_EN bit\n");
  return VAR_25;
 }





 VAR_25 = FUNC_2(VAR_18->regmap_fields[VAR_0], 1);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set BATD_EN bit\n");
  return VAR_25;
 }
 VAR_25 = FUNC_2(VAR_18->regmap_fields[VAR_9], 0x00);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to disable Safety Timer\n");
  return VAR_25;
 }


 VAR_25 = FUNC_4(VAR_18, VAR_4,
       VAR_13,
       FUNC_0(VAR_13), VAR_19);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set ICHRG value\n");
  return VAR_25;
 }


 VAR_25 = FUNC_4(VAR_18, VAR_5,
       VAR_14,
       FUNC_0(VAR_14),
       VAR_20);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set IEOC Percentage value\n");
  return VAR_25;
 }


 VAR_25 = FUNC_4(VAR_18, VAR_11,
       VAR_17,
       FUNC_0(VAR_17),
       VAR_18->voreg);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set VOREG value\n");
  return VAR_25;
 }


 VAR_24 = FUNC_0(VAR_16) - 1;
 VAR_25 = FUNC_4(VAR_18, VAR_10,
       VAR_16,
       FUNC_0(VAR_16),
       VAR_16[VAR_24]);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set VMREG value\n");
  return VAR_25;
 }





 if (VAR_21 == -1)
  VAR_21 = 4500000;

 VAR_25 = FUNC_4(VAR_18, VAR_6,
       VAR_15,
       FUNC_0(VAR_15), VAR_21);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set MIVR value\n");
  return VAR_25;
 }





 if (VAR_22 == -1)
  VAR_22 = 500000;

 VAR_25 = FUNC_4(VAR_18, VAR_2,
       VAR_12,
       FUNC_0(VAR_12), VAR_22);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set IAICR value\n");
  return VAR_25;
 }





 VAR_25 = FUNC_2(VAR_18->regmap_fields[VAR_3], 0x01);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to set IAICR_INT bit\n");
  return VAR_25;
 }






 VAR_25 = FUNC_2(VAR_18->regmap_fields[VAR_1], 0x01);
 if (VAR_25) {
  FUNC_1(VAR_23, "Failed to mask CHMIVRI interrupt\n");
  return VAR_25;
 }

 return 0;
}
