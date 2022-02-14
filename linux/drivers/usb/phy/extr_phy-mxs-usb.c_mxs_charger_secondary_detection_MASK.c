
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct mxs_phy {TYPE_1__ phy; struct regmap* regmap_anatop; } ;
typedef enum usb_charger_type { ____Placeholder_usb_charger_type } usb_charger_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,int*) ;

__attribute__((used)) static enum usb_charger_type FUNC_3(struct mxs_phy *VAR_4)
{
 struct regmap *VAR_5 = VAR_4->regmap_anatop;
 int VAR_6;

 FUNC_1(80);

 FUNC_2(VAR_5, VAR_0, &VAR_6);
 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_4->phy.dev, "It is a dedicate charging port\n");
  return VAR_3;
 } else {
  FUNC_0(VAR_4->phy.dev, "It is a charging downstream port\n");
  return VAR_2;
 }
}
