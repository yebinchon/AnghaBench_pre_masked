
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wm831x_pdata {struct wm831x_battery_pdata* battery; } ;
struct wm831x_battery_pdata {int timeout; int eoc_iterm; int fast_ilim; int vsel; int trickle_ilim; scalar_t__ fast_enable; scalar_t__ off_mask; int enable; } ;
struct wm831x {TYPE_1__* dev; } ;
struct TYPE_4__ {struct wm831x_pdata* platform_data; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct wm831x*,int ,int ,int ,int*,char*,char*) ;
 int FUNC_5 (struct wm831x*) ;
 int FUNC_6 (struct wm831x*) ;
 int FUNC_7 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static void FUNC_8(struct wm831x *VAR_17)
{
 struct wm831x_pdata *VAR_18 = VAR_17->dev->platform_data;
 struct wm831x_battery_pdata *VAR_19;
 int VAR_20, VAR_21, VAR_22;

 if (!VAR_18 || !VAR_18->battery) {
  FUNC_3(VAR_17->dev,
    "No battery charger configuration\n");
  return;
 }

 VAR_19 = VAR_18->battery;

 VAR_21 = 0;
 VAR_22 = 0;

 if (!VAR_19->enable) {
  FUNC_2(VAR_17->dev, "Battery charger disabled\n");
  return;
 }

 VAR_21 |= VAR_2;
 if (VAR_19->off_mask)
  VAR_22 |= VAR_8;
 if (VAR_19->fast_enable)
  VAR_21 |= VAR_4;

 FUNC_4(VAR_17, VAR_15,
       FUNC_0(VAR_15),
       VAR_19->trickle_ilim, &VAR_22,
       "trickle charge current limit", "mA");

 FUNC_4(VAR_17, VAR_16, FUNC_0(VAR_16),
       VAR_19->vsel, &VAR_22,
       "target voltage", "mV");

 FUNC_4(VAR_17, VAR_14, FUNC_0(VAR_14),
       VAR_19->fast_ilim, &VAR_22,
       "fast charge current limit", "mA");

 FUNC_4(VAR_17, VAR_13, FUNC_0(VAR_13),
       VAR_19->eoc_iterm, &VAR_21,
       "end of charge current threshold", "mA");

 FUNC_4(VAR_17, VAR_12, FUNC_0(VAR_12),
       VAR_19->timeout, &VAR_22,
       "charger timeout", "min");

 VAR_20 = FUNC_6(VAR_17);
 if (VAR_20 != 0) {
  FUNC_1(VAR_17->dev, "Failed to unlock registers: %d\n", VAR_20);
  return;
 }

 VAR_20 = FUNC_7(VAR_17, VAR_0,
         VAR_3 |
         VAR_6 |
         VAR_7,
         VAR_21);
 if (VAR_20 != 0)
  FUNC_1(VAR_17->dev, "Failed to set charger control 1: %d\n",
   VAR_20);

 VAR_20 = FUNC_7(VAR_17, VAR_1,
         VAR_8 |
         VAR_9 |
         VAR_5 |
         VAR_10 |
         VAR_11,
         VAR_22);
 if (VAR_20 != 0)
  FUNC_1(VAR_17->dev, "Failed to set charger control 2: %d\n",
   VAR_20);

 FUNC_5(VAR_17);
}
