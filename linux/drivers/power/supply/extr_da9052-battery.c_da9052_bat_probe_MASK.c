
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct power_supply_config {struct da9052_battery* drv_data; } ;
struct TYPE_12__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct da9052_pdata {int use_for_apm; } ;
struct TYPE_10__ {int notifier_call; } ;
struct da9052_battery {TYPE_6__* da9052; int psy; TYPE_1__ nb; int health; int status; int charger_type; } ;
typedef int s32 ;
struct TYPE_14__ {struct da9052_pdata* platform_data; } ;
struct TYPE_13__ {TYPE_7__* dev; } ;
struct TYPE_11__ {int use_for_apm; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_3 (TYPE_6__*,int ,struct da9052_battery*) ;
 int FUNC_4 (TYPE_6__*,int ,int ,int ,struct da9052_battery*) ;
 int FUNC_5 (TYPE_7__*,char*,int ,int) ;
 TYPE_6__* FUNC_6 (int ) ;
 struct da9052_battery* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (struct platform_device*,struct da9052_battery*) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,struct power_supply_config*) ;
 TYPE_2__ VAR_9 ;

__attribute__((used)) static s32 FUNC_10(struct platform_device *VAR_10)
{
 struct da9052_pdata *VAR_11;
 struct da9052_battery *VAR_12;
 struct power_supply_config VAR_13 = {};
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_7(&VAR_10->dev, sizeof(struct da9052_battery),
    VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13.drv_data = VAR_12;

 VAR_12->da9052 = FUNC_6(VAR_10->dev.parent);
 VAR_12->charger_type = VAR_0;
 VAR_12->status = VAR_4;
 VAR_12->health = VAR_3;
 VAR_12->nb.notifier_call = VAR_5;

 VAR_11 = VAR_12->da9052->dev->platform_data;
 if (VAR_11 != ((void*)0) && VAR_11->use_for_apm)
  VAR_9.use_for_apm = VAR_11->use_for_apm;
 else
  VAR_9.use_for_apm = 1;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_8); VAR_15++) {
  VAR_14 = FUNC_4(VAR_12->da9052,
    VAR_7[VAR_15], VAR_8[VAR_15],
    VAR_6, VAR_12);

  if (VAR_14 != 0) {
   FUNC_5(VAR_12->da9052->dev,
    "DA9052 failed to request %s IRQ: %d\n",
    VAR_8[VAR_15], VAR_14);
   goto err;
  }
 }

 VAR_12->psy = FUNC_9(&VAR_10->dev, &VAR_9, &VAR_13);
 if (FUNC_1(VAR_12->psy)) {
  VAR_14 = FUNC_2(VAR_12->psy);
  goto err;
 }

 FUNC_8(VAR_10, VAR_12);
 return 0;

err:
 while (--VAR_15 >= 0)
  FUNC_3(VAR_12->da9052, VAR_7[VAR_15], VAR_12);

 return VAR_14;
}
