
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wm831x_pdata {int wm831x_num; int * ldo; } ;
struct TYPE_9__ {int id; int n_voltages; int enable_mask; int n_linear_ranges; int linear_ranges; int bypass_mask; scalar_t__ bypass_reg; int enable_reg; int vsel_mask; scalar_t__ vsel_reg; int owner; int * ops; int type; int supply_name; int name; } ;
struct wm831x_ldo {int name; int regulator; TYPE_3__ desc; scalar_t__ base; int supply_name; struct wm831x* wm831x; } ;
struct wm831x {TYPE_1__* dev; int regmap; } ;
struct resource {scalar_t__ start; } ;
struct regulator_config {int regmap; struct wm831x_ldo* driver_data; int init_data; int dev; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {int id; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 struct wm831x* FUNC_5 (int ) ;
 struct wm831x_pdata* FUNC_6 (TYPE_1__*) ;
 struct wm831x_ldo* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_9 (TYPE_1__*,int,int *,int ,int,int ,struct wm831x_ldo*) ;
 int FUNC_10 (struct platform_device*,char*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct wm831x_ldo*) ;
 int FUNC_13 (int ,int,char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (struct wm831x*,int ) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_15)
{
 struct wm831x *VAR_16 = FUNC_5(VAR_15->dev.parent);
 struct wm831x_pdata *VAR_17 = FUNC_6(VAR_16->dev);
 struct regulator_config VAR_18 = { };
 int VAR_19;
 struct wm831x_ldo *VAR_20;
 struct resource *VAR_21;
 int VAR_22, VAR_23;

 if (VAR_17 && VAR_17->wm831x_num)
  VAR_19 = (VAR_17->wm831x_num * 10) + 1;
 else
  VAR_19 = 0;
 VAR_19 = VAR_15->id - VAR_19;

 FUNC_3(&VAR_15->dev, "Probing LDO%d\n", VAR_19 + 1);

 VAR_20 = FUNC_7(&VAR_15->dev, sizeof(struct wm831x_ldo), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 VAR_20->wm831x = VAR_16;

 VAR_21 = FUNC_11(VAR_15, VAR_3, 0);
 if (VAR_21 == ((void*)0)) {
  FUNC_4(&VAR_15->dev, "No REG resource\n");
  VAR_22 = -VAR_0;
  goto err;
 }
 VAR_20->base = VAR_21->start;

 FUNC_13(VAR_20->name, sizeof(VAR_20->name), "LDO%d", VAR_19 + 1);
 VAR_20->desc.name = VAR_20->name;

 FUNC_13(VAR_20->supply_name, sizeof(VAR_20->supply_name),
   "LDO%dVDD", VAR_19 + 1);
 VAR_20->desc.supply_name = VAR_20->supply_name;

 VAR_20->desc.id = VAR_19;
 VAR_20->desc.type = VAR_6;
 VAR_20->desc.n_voltages = 32;
 VAR_20->desc.ops = &VAR_12;
 VAR_20->desc.owner = VAR_7;
 VAR_20->desc.vsel_reg = VAR_20->base + VAR_11;
 VAR_20->desc.vsel_mask = VAR_8;
 VAR_20->desc.enable_reg = VAR_10;
 VAR_20->desc.enable_mask = 1 << VAR_19;
 VAR_20->desc.bypass_reg = VAR_20->base;
 VAR_20->desc.bypass_mask = VAR_9;
 VAR_20->desc.linear_ranges = VAR_13;
 VAR_20->desc.n_linear_ranges = FUNC_0(VAR_13);

 VAR_18.dev = VAR_15->dev.parent;
 if (VAR_17)
  VAR_18.init_data = VAR_17->ldo[VAR_19];
 VAR_18.driver_data = VAR_20;
 VAR_18.regmap = VAR_16->regmap;

 VAR_20->regulator = FUNC_8(&VAR_15->dev, &VAR_20->desc,
       &VAR_18);
 if (FUNC_1(VAR_20->regulator)) {
  VAR_22 = FUNC_2(VAR_20->regulator);
  FUNC_4(VAR_16->dev, "Failed to register LDO%d: %d\n",
   VAR_19 + 1, VAR_22);
  goto err;
 }

 VAR_23 = FUNC_14(VAR_16, FUNC_10(VAR_15, "UV"));
 VAR_22 = FUNC_9(&VAR_15->dev, VAR_23, ((void*)0),
     VAR_14,
     VAR_5 | VAR_4,
     VAR_20->name,
     VAR_20);
 if (VAR_22 != 0) {
  FUNC_4(&VAR_15->dev, "Failed to request UV IRQ %d: %d\n",
   VAR_23, VAR_22);
  goto err;
 }

 FUNC_12(VAR_15, VAR_20);

 return 0;

err:
 return VAR_22;
}
