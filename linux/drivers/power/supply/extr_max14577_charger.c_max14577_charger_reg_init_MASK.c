
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct regmap {int dummy; } ;
struct max14577_charger {TYPE_2__* pdata; int dev; TYPE_1__* max14577; } ;
struct TYPE_4__ {int ovp_uvolt; int fast_charge_uamp; int eoc_uamp; int constant_uvolt; } ;
struct TYPE_3__ {struct regmap* regmap; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct max14577_charger*,int ) ;
 int FUNC_2 (struct max14577_charger*,int ) ;
 int FUNC_3 (struct max14577_charger*,int ) ;
 int FUNC_4 (struct max14577_charger*,int ) ;
 int FUNC_5 (struct regmap*,int ,int,int) ;
 int FUNC_6 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct max14577_charger *VAR_13)
{
 struct regmap *VAR_14 = VAR_13->max14577->regmap;
 u8 VAR_15;
 int VAR_16;






 VAR_15 = 0x1 << VAR_1;
 FUNC_5(VAR_14, VAR_8,
   VAR_0 | VAR_2,
   VAR_15);





 VAR_15 = 0x1 << VAR_4;
 VAR_15 |= 0x1 << VAR_3;
 FUNC_6(VAR_14, VAR_9, VAR_15);


 VAR_15 = 0x0 << VAR_5;
 FUNC_6(VAR_14, VAR_10, VAR_15);

 VAR_16 = FUNC_1(VAR_13, VAR_13->pdata->constant_uvolt);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_13, VAR_13->pdata->eoc_uamp);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_3(VAR_13, VAR_13->pdata->fast_charge_uamp);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_13,
   VAR_12);
 if (VAR_16)
  return VAR_16;


 switch (VAR_13->pdata->ovp_uvolt) {
 case 7500000:
  VAR_15 = 0x0;
  break;
 case 6000000:
 case 6500000:
 case 7000000:
  VAR_15 = 0x1 + (VAR_13->pdata->ovp_uvolt - 6000000) / 500000;
  break;
 default:
  FUNC_0(VAR_13->dev, "Wrong value for OVP: %u\n",
    VAR_13->pdata->ovp_uvolt);
  return -VAR_7;
 }
 VAR_15 <<= VAR_6;
 FUNC_6(VAR_14, VAR_11, VAR_15);

 return 0;
}
