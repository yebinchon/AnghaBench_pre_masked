
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm831x_pdata {struct wm831x_backup_pdata* backup; } ;
struct wm831x_backup_pdata {int vlim; int ilim; scalar_t__ no_constant_voltage; scalar_t__ charger_enable; } ;
struct wm831x {TYPE_1__* dev; } ;
struct TYPE_3__ {struct wm831x_pdata* platform_data; } ;


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
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct wm831x*) ;
 int FUNC_3 (struct wm831x*) ;
 int FUNC_4 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct wm831x *VAR_10)
{
 struct wm831x_pdata *VAR_11 = VAR_10->dev->platform_data;
 struct wm831x_backup_pdata *VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_11 || !VAR_11->backup) {
  FUNC_1(VAR_10->dev,
    "No backup battery charger configuration\n");
  return;
 }

 VAR_12 = VAR_11->backup;

 VAR_14 = 0;

 if (VAR_12->charger_enable)
  VAR_14 |= VAR_3 | VAR_1;
 if (VAR_12->no_constant_voltage)
  VAR_14 |= VAR_6;

 switch (VAR_12->vlim) {
 case 2500:
  break;
 case 3100:
  VAR_14 |= VAR_8;
  break;
 default:
  FUNC_0(VAR_10->dev, "Invalid backup voltage limit %dmV\n",
   VAR_12->vlim);
 }

 switch (VAR_12->ilim) {
 case 100:
  break;
 case 200:
  VAR_14 |= 1;
  break;
 case 300:
  VAR_14 |= 2;
  break;
 case 400:
  VAR_14 |= 3;
  break;
 default:
  FUNC_0(VAR_10->dev, "Invalid backup current limit %duA\n",
   VAR_12->ilim);
 }

 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13 != 0) {
  FUNC_0(VAR_10->dev, "Failed to unlock registers: %d\n", VAR_13);
  return;
 }

 VAR_13 = FUNC_4(VAR_10, VAR_0,
         VAR_4 |
         VAR_7 |
         VAR_2 |
         VAR_9 |
         VAR_5,
         VAR_14);
 if (VAR_13 != 0)
  FUNC_0(VAR_10->dev,
   "Failed to set backup charger config: %d\n", VAR_13);

 FUNC_2(VAR_10);
}
