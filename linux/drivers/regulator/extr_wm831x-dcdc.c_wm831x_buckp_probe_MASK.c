
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wm831x_pdata {int wm831x_num; int * dcdc; } ;
struct TYPE_9__ {int id; int enable_mask; int min_uV; int uV_step; int enable_reg; int vsel_mask; scalar_t__ vsel_reg; int owner; int * ops; scalar_t__ n_voltages; int type; int supply_name; int name; } ;
struct wm831x_dcdc {int name; int regulator; TYPE_3__ desc; scalar_t__ base; int supply_name; struct wm831x* wm831x; } ;
struct wm831x {TYPE_1__* dev; int regmap; } ;
struct resource {scalar_t__ start; } ;
struct regulator_config {int regmap; struct wm831x_dcdc* driver_data; int init_data; int dev; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {int id; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct wm831x* FUNC_4 (int ) ;
 struct wm831x_pdata* FUNC_5 (TYPE_1__*) ;
 struct wm831x_dcdc* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_8 (TYPE_1__*,int,int *,int ,int,int ,struct wm831x_dcdc*) ;
 int FUNC_9 (struct platform_device*,char*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct wm831x_dcdc*) ;
 int FUNC_12 (int ,int,char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_14)
{
 struct wm831x *VAR_15 = FUNC_4(VAR_14->dev.parent);
 struct wm831x_pdata *VAR_16 = FUNC_5(VAR_15->dev);
 struct regulator_config VAR_17 = { };
 int VAR_18;
 struct wm831x_dcdc *VAR_19;
 struct resource *VAR_20;
 int VAR_21, VAR_22;

 if (VAR_16 && VAR_16->wm831x_num)
  VAR_18 = (VAR_16->wm831x_num * 10) + 1;
 else
  VAR_18 = 0;
 VAR_18 = VAR_14->id - VAR_18;

 FUNC_2(&VAR_14->dev, "Probing DCDC%d\n", VAR_18 + 1);

 VAR_19 = FUNC_6(&VAR_14->dev, sizeof(struct wm831x_dcdc),
       VAR_2);
 if (!VAR_19)
  return -VAR_1;

 VAR_19->wm831x = VAR_15;

 VAR_20 = FUNC_10(VAR_14, VAR_3, 0);
 if (VAR_20 == ((void*)0)) {
  FUNC_3(&VAR_14->dev, "No REG resource\n");
  VAR_21 = -VAR_0;
  goto err;
 }
 VAR_19->base = VAR_20->start;

 FUNC_12(VAR_19->name, sizeof(VAR_19->name), "DCDC%d", VAR_18 + 1);
 VAR_19->desc.name = VAR_19->name;

 FUNC_12(VAR_19->supply_name, sizeof(VAR_19->supply_name),
   "DC%dVDD", VAR_18 + 1);
 VAR_19->desc.supply_name = VAR_19->supply_name;

 VAR_19->desc.id = VAR_18;
 VAR_19->desc.type = VAR_6;
 VAR_19->desc.n_voltages = VAR_8 + 1;
 VAR_19->desc.ops = &VAR_12;
 VAR_19->desc.owner = VAR_7;
 VAR_19->desc.vsel_reg = VAR_19->base + VAR_11;
 VAR_19->desc.vsel_mask = VAR_9;
 VAR_19->desc.enable_reg = VAR_10;
 VAR_19->desc.enable_mask = 1 << VAR_18;
 VAR_19->desc.min_uV = 850000;
 VAR_19->desc.uV_step = 25000;

 VAR_17.dev = VAR_14->dev.parent;
 if (VAR_16)
  VAR_17.init_data = VAR_16->dcdc[VAR_18];
 VAR_17.driver_data = VAR_19;
 VAR_17.regmap = VAR_15->regmap;

 VAR_19->regulator = FUNC_7(&VAR_14->dev, &VAR_19->desc,
        &VAR_17);
 if (FUNC_0(VAR_19->regulator)) {
  VAR_21 = FUNC_1(VAR_19->regulator);
  FUNC_3(VAR_15->dev, "Failed to register DCDC%d: %d\n",
   VAR_18 + 1, VAR_21);
  goto err;
 }

 VAR_22 = FUNC_13(VAR_15, FUNC_9(VAR_14, "UV"));
 VAR_21 = FUNC_8(&VAR_14->dev, VAR_22, ((void*)0),
     VAR_13,
     VAR_5 | VAR_4,
     VAR_19->name, VAR_19);
 if (VAR_21 != 0) {
  FUNC_3(&VAR_14->dev, "Failed to request UV IRQ %d: %d\n",
   VAR_22, VAR_21);
  goto err;
 }

 FUNC_11(VAR_14, VAR_19);

 return 0;

err:
 return VAR_21;
}
