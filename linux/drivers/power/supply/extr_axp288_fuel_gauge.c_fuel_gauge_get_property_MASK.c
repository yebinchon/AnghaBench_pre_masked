
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct axp288_fg_info {int status; int max_volt; int lock; TYPE_1__* pdev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct axp288_fg_info*) ;
 int FUNC_4 (struct axp288_fg_info*,int*) ;
 int FUNC_5 (struct axp288_fg_info*) ;
 int FUNC_6 (struct axp288_fg_info*,int*) ;
 int FUNC_7 (struct axp288_fg_info*,int*) ;
 int FUNC_8 (struct axp288_fg_info*,int ) ;
 int FUNC_9 (struct axp288_fg_info*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct axp288_fg_info* FUNC_12 (struct power_supply*) ;

__attribute__((used)) static int FUNC_13(struct power_supply *VAR_11,
  enum power_supply_property VAR_12,
  union power_supply_propval *VAR_13)
{
 struct axp288_fg_info *VAR_14 = FUNC_12(VAR_11);
 int VAR_15 = 0, VAR_16;

 FUNC_10(&VAR_14->lock);
 switch (VAR_12) {
 case 132:
  FUNC_5(VAR_14);
  VAR_13->intval = VAR_14->status;
  break;
 case 134:
  VAR_13->intval = FUNC_3(VAR_14);
  break;
 case 129:
  VAR_15 = FUNC_6(VAR_14, &VAR_16);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;
  VAR_13->intval = FUNC_1(VAR_16);
  break;
 case 128:
  VAR_15 = FUNC_7(VAR_14, &VAR_16);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;
  VAR_13->intval = FUNC_1(VAR_16);
  break;
 case 135:
  VAR_15 = FUNC_4(VAR_14, &VAR_16);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;
  VAR_13->intval = FUNC_0(VAR_16);
  break;
 case 133:
  VAR_15 = FUNC_9(VAR_14, VAR_1);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;

  if (VAR_15 & VAR_5)
   VAR_13->intval = 1;
  else
   VAR_13->intval = 0;
  break;
 case 139:
  VAR_15 = FUNC_9(VAR_14, VAR_0);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;

  if (!(VAR_15 & VAR_8))
   FUNC_2(&VAR_14->pdev->dev,
    "capacity measurement not valid\n");
  VAR_13->intval = (VAR_15 & VAR_9);
  break;
 case 138:
  VAR_15 = FUNC_9(VAR_14, VAR_4);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;
  VAR_13->intval = (VAR_15 & 0x0f);
  break;
 case 131:
  VAR_13->intval = VAR_10;
  break;
 case 136:
  VAR_15 = FUNC_8(VAR_14, VAR_2);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;

  VAR_13->intval = VAR_15 * VAR_7;
  break;
 case 137:
  VAR_15 = FUNC_8(VAR_14, VAR_3);
  if (VAR_15 < 0)
   goto fuel_gauge_read_err;

  VAR_13->intval = VAR_15 * VAR_7;
  break;
 case 130:
  VAR_13->intval = FUNC_1(VAR_14->max_volt);
  break;
 default:
  FUNC_11(&VAR_14->lock);
  return -VAR_6;
 }

 FUNC_11(&VAR_14->lock);
 return 0;

fuel_gauge_read_err:
 FUNC_11(&VAR_14->lock);
 return VAR_15;
}
