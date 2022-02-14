
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm97xx_batt_pdata {scalar_t__ charge_gpio; scalar_t__ batt_tech; scalar_t__ temp_aux; scalar_t__ batt_aux; scalar_t__ max_voltage; scalar_t__ min_voltage; char* batt_name; } ;
struct power_supply_config {struct wm97xx_batt_pdata* drv_data; } ;
struct TYPE_6__ {struct wm97xx_batt_pdata* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct TYPE_7__ {char* name; int num_properties; int * properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,struct platform_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*) ;
 int FUNC_10 (scalar_t__) ;
 int * FUNC_11 (int,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,struct power_supply_config*) ;
 int * VAR_13 ;
 int FUNC_14 (int ,int ,int ,char*,struct platform_device*) ;
 int FUNC_15 (int *) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_16)
{
 int VAR_17 = 0;
 int VAR_18 = 1;
 int VAR_19 = 0;
 struct wm97xx_batt_pdata *VAR_20 = VAR_16->dev.platform_data;
 struct power_supply_config VAR_21 = {};

 if (!VAR_20) {
  FUNC_3(&VAR_16->dev, "No platform data supplied\n");
  return -VAR_0;
 }

 VAR_21.drv_data = VAR_20;

 if (VAR_16->id != -1)
  return -VAR_0;

 if (FUNC_8(VAR_20->charge_gpio)) {
  VAR_17 = FUNC_9(VAR_20->charge_gpio, "BATT CHRG");
  if (VAR_17)
   goto err;
  VAR_17 = FUNC_6(VAR_20->charge_gpio);
  if (VAR_17)
   goto err2;
  VAR_17 = FUNC_14(FUNC_10(VAR_20->charge_gpio),
    VAR_15, 0,
    "AC Detect", VAR_16);
  if (VAR_17)
   goto err2;
  VAR_18++;
 }

 if (VAR_20->batt_tech >= 0)
  VAR_18++;
 if (VAR_20->temp_aux >= 0)
  VAR_18++;
 if (VAR_20->batt_aux >= 0)
  VAR_18++;
 if (VAR_20->max_voltage >= 0)
  VAR_18++;
 if (VAR_20->min_voltage >= 0)
  VAR_18++;

 VAR_13 = FUNC_11(VAR_18, sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_17 = -VAR_1;
  goto err3;
 }

 VAR_13[VAR_19++] = VAR_3;
 if (VAR_20->charge_gpio >= 0)
  VAR_13[VAR_19++] = VAR_4;
 if (VAR_20->batt_tech >= 0)
  VAR_13[VAR_19++] = VAR_5;
 if (VAR_20->temp_aux >= 0)
  VAR_13[VAR_19++] = VAR_6;
 if (VAR_20->batt_aux >= 0)
  VAR_13[VAR_19++] = VAR_9;
 if (VAR_20->max_voltage >= 0)
  VAR_13[VAR_19++] = VAR_7;
 if (VAR_20->min_voltage >= 0)
  VAR_13[VAR_19++] = VAR_8;

 FUNC_0(&VAR_12, VAR_14);

 if (!VAR_20->batt_name) {
  FUNC_4(&VAR_16->dev, "Please consider setting proper battery "
    "name in platform definition file, falling "
    "back to name \"wm97xx-batt\"\n");
  VAR_11.name = "wm97xx-batt";
 } else
  VAR_11.name = VAR_20->batt_name;

 VAR_11.properties = VAR_13;
 VAR_11.num_properties = VAR_18;

 VAR_10 = FUNC_13(&VAR_16->dev, &VAR_11, &VAR_21);
 if (!FUNC_1(VAR_10)) {
  FUNC_15(&VAR_12);
 } else {
  VAR_17 = FUNC_2(VAR_10);
  goto err4;
 }

 return 0;
err4:
 FUNC_12(VAR_13);
err3:
 if (FUNC_8(VAR_20->charge_gpio))
  FUNC_5(FUNC_10(VAR_20->charge_gpio), VAR_16);
err2:
 if (FUNC_8(VAR_20->charge_gpio))
  FUNC_7(VAR_20->charge_gpio);
err:
 return VAR_17;
}
