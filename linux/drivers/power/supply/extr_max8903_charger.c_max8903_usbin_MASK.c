
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max8903_pdata {int cen; int uok; } ;
struct TYPE_2__ {int type; } ;
struct max8903_data {int usb_in; int psy; TYPE_1__ psy_desc; scalar_t__ ta_in; int dev; struct max8903_pdata* pdata; } ;
typedef int irqreturn_t ;
typedef enum power_supply_type { ____Placeholder_power_supply_type } power_supply_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct max8903_data *VAR_6 = VAR_5;
 struct max8903_pdata *VAR_7 = VAR_6->pdata;
 bool VAR_8;
 enum power_supply_type VAR_9;

 VAR_8 = FUNC_1(VAR_7->uok) ? 0 : 1;

 if (VAR_8 == VAR_6->usb_in)
  return VAR_0;

 VAR_6->usb_in = VAR_8;




 if (FUNC_2(VAR_7->cen))
  FUNC_3(VAR_7->cen, VAR_8 ? 0 :
    (VAR_6->ta_in ? 0 : 1));

 FUNC_0(VAR_6->dev, "USB Charger %s.\n", VAR_8 ?
   "Connected" : "Disconnected");

 VAR_9 = VAR_6->psy_desc.type;

 if (VAR_6->ta_in)
  VAR_6->psy_desc.type = VAR_2;
 else if (VAR_6->usb_in)
  VAR_6->psy_desc.type = VAR_3;
 else
  VAR_6->psy_desc.type = VAR_1;

 if (VAR_9 != VAR_6->psy_desc.type)
  FUNC_4(VAR_6->psy);

 return VAR_0;
}
