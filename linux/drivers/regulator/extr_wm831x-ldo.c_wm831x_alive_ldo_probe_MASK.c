
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wm831x_pdata {int wm831x_num; int * ldo; } ;
struct TYPE_7__ {int id; int enable_mask; int min_uV; int uV_step; int enable_time; int enable_reg; int vsel_mask; scalar_t__ vsel_reg; int owner; int * ops; scalar_t__ n_voltages; int type; int supply_name; int name; } ;
struct wm831x_ldo {int regulator; TYPE_2__ desc; scalar_t__ base; int supply_name; int name; struct wm831x* wm831x; } ;
struct wm831x {int dev; int regmap; } ;
struct resource {scalar_t__ start; } ;
struct regulator_config {int regmap; struct wm831x_ldo* driver_data; int init_data; int dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {int id; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct wm831x* FUNC_4 (int ) ;
 struct wm831x_pdata* FUNC_5 (int ) ;
 struct wm831x_ldo* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct wm831x_ldo*) ;
 int FUNC_10 (int ,int,char*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_11)
{
 struct wm831x *VAR_12 = FUNC_4(VAR_11->dev.parent);
 struct wm831x_pdata *VAR_13 = FUNC_5(VAR_12->dev);
 struct regulator_config VAR_14 = { };
 int VAR_15;
 struct wm831x_ldo *VAR_16;
 struct resource *VAR_17;
 int VAR_18;

 if (VAR_13 && VAR_13->wm831x_num)
  VAR_15 = (VAR_13->wm831x_num * 10) + 1;
 else
  VAR_15 = 0;
 VAR_15 = VAR_11->id - VAR_15;


 FUNC_2(&VAR_11->dev, "Probing LDO%d\n", VAR_15 + 1);

 VAR_16 = FUNC_6(&VAR_11->dev, sizeof(struct wm831x_ldo), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->wm831x = VAR_12;

 VAR_17 = FUNC_8(VAR_11, VAR_3, 0);
 if (VAR_17 == ((void*)0)) {
  FUNC_3(&VAR_11->dev, "No REG resource\n");
  VAR_18 = -VAR_0;
  goto err;
 }
 VAR_16->base = VAR_17->start;

 FUNC_10(VAR_16->name, sizeof(VAR_16->name), "LDO%d", VAR_15 + 1);
 VAR_16->desc.name = VAR_16->name;

 FUNC_10(VAR_16->supply_name, sizeof(VAR_16->supply_name),
   "LDO%dVDD", VAR_15 + 1);
 VAR_16->desc.supply_name = VAR_16->supply_name;

 VAR_16->desc.id = VAR_15;
 VAR_16->desc.type = VAR_4;
 VAR_16->desc.n_voltages = VAR_6 + 1;
 VAR_16->desc.ops = &VAR_10;
 VAR_16->desc.owner = VAR_5;
 VAR_16->desc.vsel_reg = VAR_16->base + VAR_7;
 VAR_16->desc.vsel_mask = VAR_8;
 VAR_16->desc.enable_reg = VAR_9;
 VAR_16->desc.enable_mask = 1 << VAR_15;
 VAR_16->desc.min_uV = 800000;
 VAR_16->desc.uV_step = 50000;
 VAR_16->desc.enable_time = 1000;

 VAR_14.dev = VAR_11->dev.parent;
 if (VAR_13)
  VAR_14.init_data = VAR_13->ldo[VAR_15];
 VAR_14.driver_data = VAR_16;
 VAR_14.regmap = VAR_12->regmap;

 VAR_16->regulator = FUNC_7(&VAR_11->dev, &VAR_16->desc,
       &VAR_14);
 if (FUNC_0(VAR_16->regulator)) {
  VAR_18 = FUNC_1(VAR_16->regulator);
  FUNC_3(VAR_12->dev, "Failed to register LDO%d: %d\n",
   VAR_15 + 1, VAR_18);
  goto err;
 }

 FUNC_9(VAR_11, VAR_16);

 return 0;

err:
 return VAR_18;
}
