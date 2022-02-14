
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct mxs_phy {TYPE_1__ phy; struct regmap* regmap_anatop; } ;
typedef enum usb_charger_type { ____Placeholder_usb_charger_type } usb_charger_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,int*) ;
 int FUNC_3 (struct regmap*,int ,int) ;

__attribute__((used)) static enum usb_charger_type FUNC_4(struct mxs_phy *VAR_9)
{
 struct regmap *VAR_10 = VAR_9->regmap_anatop;
 enum usb_charger_type VAR_11 = VAR_8;
 u32 VAR_12;






 FUNC_3(VAR_10, VAR_2,
   VAR_1 |
   VAR_0);

 FUNC_1(100);


 FUNC_2(VAR_10, VAR_5, &VAR_12);
 if (!(VAR_12 & VAR_6)) {
  VAR_11 = VAR_7;
  FUNC_0(VAR_9->phy.dev, "It is a standard downstream port\n");
 }


 FUNC_3(VAR_10, VAR_4,
   VAR_3 |
   VAR_0);

 return VAR_11;
}
