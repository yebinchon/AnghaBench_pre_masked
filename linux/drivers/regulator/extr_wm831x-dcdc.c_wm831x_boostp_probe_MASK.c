
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wm831x_pdata {int ** dcdc; } ;
struct TYPE_9__ {int id; int enable_mask; int enable_reg; int owner; int * ops; int type; int name; } ;
struct wm831x_dcdc {int name; int regulator; TYPE_3__ desc; int base; struct wm831x* wm831x; } ;
struct wm831x {TYPE_1__* dev; int regmap; } ;
struct resource {int start; } ;
struct regulator_config {int regmap; struct wm831x_dcdc* driver_data; int * init_data; int dev; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {int id; TYPE_1__ dev; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 struct wm831x* FUNC_5 (int ) ;
 struct wm831x_pdata* FUNC_6 (TYPE_1__*) ;
 struct wm831x_dcdc* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_9 (TYPE_1__*,int,int *,int ,int,int ,struct wm831x_dcdc*) ;
 int FUNC_10 (struct platform_device*,char*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct wm831x_dcdc*) ;
 int FUNC_13 (int ,int,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_12)
{
 struct wm831x *VAR_13 = FUNC_5(VAR_12->dev.parent);
 struct wm831x_pdata *VAR_14 = FUNC_6(VAR_13->dev);
 struct regulator_config VAR_15 = { };
 int VAR_16 = VAR_12->id % FUNC_0(VAR_14->dcdc);
 struct wm831x_dcdc *VAR_17;
 struct resource *VAR_18;
 int VAR_19, VAR_20;

 FUNC_3(&VAR_12->dev, "Probing DCDC%d\n", VAR_16 + 1);

 if (VAR_14 == ((void*)0) || VAR_14->dcdc[VAR_16] == ((void*)0))
  return -VAR_1;

 VAR_17 = FUNC_7(&VAR_12->dev, sizeof(struct wm831x_dcdc), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->wm831x = VAR_13;

 VAR_18 = FUNC_11(VAR_12, VAR_4, 0);
 if (VAR_18 == ((void*)0)) {
  FUNC_4(&VAR_12->dev, "No REG resource\n");
  return -VAR_0;
 }
 VAR_17->base = VAR_18->start;

 FUNC_13(VAR_17->name, sizeof(VAR_17->name), "DCDC%d", VAR_16 + 1);
 VAR_17->desc.name = VAR_17->name;
 VAR_17->desc.id = VAR_16;
 VAR_17->desc.type = VAR_7;
 VAR_17->desc.ops = &VAR_10;
 VAR_17->desc.owner = VAR_8;
 VAR_17->desc.enable_reg = VAR_9;
 VAR_17->desc.enable_mask = 1 << VAR_16;

 VAR_15.dev = VAR_12->dev.parent;
 if (VAR_14)
  VAR_15.init_data = VAR_14->dcdc[VAR_16];
 VAR_15.driver_data = VAR_17;
 VAR_15.regmap = VAR_13->regmap;

 VAR_17->regulator = FUNC_8(&VAR_12->dev, &VAR_17->desc,
        &VAR_15);
 if (FUNC_1(VAR_17->regulator)) {
  VAR_19 = FUNC_2(VAR_17->regulator);
  FUNC_4(VAR_13->dev, "Failed to register DCDC%d: %d\n",
   VAR_16 + 1, VAR_19);
  return VAR_19;
 }

 VAR_20 = FUNC_14(VAR_13, FUNC_10(VAR_12, "UV"));
 VAR_19 = FUNC_9(&VAR_12->dev, VAR_20, ((void*)0),
     VAR_11,
     VAR_6 | VAR_5,
     VAR_17->name,
     VAR_17);
 if (VAR_19 != 0) {
  FUNC_4(&VAR_12->dev, "Failed to request UV IRQ %d: %d\n",
   VAR_20, VAR_19);
  return VAR_19;
 }

 FUNC_12(VAR_12, VAR_17);

 return 0;
}
