
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int usb; TYPE_1__* pdata; int mains; int battery; int dev; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ use_usb; scalar_t__ use_mains; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (struct smb347_charger*) ;
 scalar_t__ FUNC_6 (struct smb347_charger*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_14, void *VAR_15)
{
 struct smb347_charger *VAR_16 = VAR_15;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20;
 bool VAR_21 = 0;
 int VAR_22;

 VAR_22 = FUNC_4(VAR_16->regmap, VAR_12, &VAR_17);
 if (VAR_22 < 0) {
  FUNC_2(VAR_16->dev, "reading STAT_C failed\n");
  return VAR_11;
 }

 VAR_22 = FUNC_4(VAR_16->regmap, VAR_0, &VAR_18);
 if (VAR_22 < 0) {
  FUNC_2(VAR_16->dev, "reading IRQSTAT_C failed\n");
  return VAR_11;
 }

 VAR_22 = FUNC_4(VAR_16->regmap, VAR_4, &VAR_19);
 if (VAR_22 < 0) {
  FUNC_2(VAR_16->dev, "reading IRQSTAT_D failed\n");
  return VAR_11;
 }

 VAR_22 = FUNC_4(VAR_16->regmap, VAR_7, &VAR_20);
 if (VAR_22 < 0) {
  FUNC_2(VAR_16->dev, "reading IRQSTAT_E failed\n");
  return VAR_11;
 }





 if (VAR_17 & VAR_13) {
  FUNC_1(VAR_16->dev, "charging stopped due to charger error\n");
  FUNC_3(VAR_16->battery);
  VAR_21 = 1;
 }






 if (VAR_18 & (VAR_2 | VAR_1)) {
  if (VAR_18 & VAR_3)
   FUNC_3(VAR_16->battery);
  FUNC_0(VAR_16->dev, "going to HW maintenance mode\n");
  VAR_21 = 1;
 }





 if (VAR_19 & VAR_5) {
  FUNC_0(VAR_16->dev, "total Charge Timeout INT received\n");

  if (VAR_19 & VAR_6)
   FUNC_2(VAR_16->dev, "charging stopped due to timeout\n");
  FUNC_3(VAR_16->battery);
  VAR_21 = 1;
 }





 if (VAR_20 & (VAR_9 | VAR_8)) {
  if (FUNC_6(VAR_16) > 0) {
   FUNC_5(VAR_16);
   if (VAR_16->pdata->use_mains)
    FUNC_3(VAR_16->mains);
   if (VAR_16->pdata->use_usb)
    FUNC_3(VAR_16->usb);
  }
  VAR_21 = 1;
 }

 return VAR_21 ? VAR_10 : VAR_11;
}
