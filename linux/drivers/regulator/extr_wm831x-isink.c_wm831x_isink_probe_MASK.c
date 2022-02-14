
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wm831x_pdata {int ** isink; } ;
struct TYPE_9__ {int id; int n_current_limits; int csel_mask; int csel_reg; int ** curr_table; int owner; int type; int * ops; int name; } ;
struct wm831x_isink {int name; int regulator; TYPE_3__ desc; int reg; struct wm831x* wm831x; } ;
struct wm831x {TYPE_1__* dev; int regmap; } ;
struct resource {int start; } ;
struct regulator_config {int regmap; struct wm831x_isink* driver_data; int * init_data; int dev; } ;
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
 struct wm831x_isink* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_9 (TYPE_1__*,int,int *,int ,int,int ,struct wm831x_isink*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct wm831x_isink*) ;
 int FUNC_13 (int ,int,char*,int) ;
 int FUNC_14 (struct wm831x*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int ** VAR_12 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_13)
{
 struct wm831x *VAR_14 = FUNC_5(VAR_13->dev.parent);
 struct wm831x_pdata *VAR_15 = FUNC_6(VAR_14->dev);
 struct wm831x_isink *VAR_16;
 int VAR_17 = VAR_13->id % FUNC_0(VAR_15->isink);
 struct regulator_config VAR_18 = { };
 struct resource *VAR_19;
 int VAR_20, VAR_21;

 FUNC_3(&VAR_13->dev, "Probing ISINK%d\n", VAR_17 + 1);

 if (VAR_15 == ((void*)0) || VAR_15->isink[VAR_17] == ((void*)0))
  return -VAR_1;

 VAR_16 = FUNC_7(&VAR_13->dev, sizeof(struct wm831x_isink),
        VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->wm831x = VAR_14;

 VAR_19 = FUNC_11(VAR_13, VAR_4, 0);
 if (VAR_19 == ((void*)0)) {
  FUNC_4(&VAR_13->dev, "No REG resource\n");
  VAR_20 = -VAR_0;
  goto err;
 }
 VAR_16->reg = VAR_19->start;




 FUNC_13(VAR_16->name, sizeof(VAR_16->name), "ISINK%d", VAR_17 + 1);
 VAR_16->desc.name = VAR_16->name;
 VAR_16->desc.id = VAR_17;
 VAR_16->desc.ops = &VAR_11;
 VAR_16->desc.type = VAR_7;
 VAR_16->desc.owner = VAR_8;
 VAR_16->desc.curr_table = VAR_12,
 VAR_16->desc.n_current_limits = FUNC_0(VAR_12),
 VAR_16->desc.csel_reg = VAR_16->reg,
 VAR_16->desc.csel_mask = VAR_9,

 VAR_18.dev = VAR_13->dev.parent;
 VAR_18.init_data = VAR_15->isink[VAR_17];
 VAR_18.driver_data = VAR_16;
 VAR_18.regmap = VAR_14->regmap;

 VAR_16->regulator = FUNC_8(&VAR_13->dev, &VAR_16->desc,
         &VAR_18);
 if (FUNC_1(VAR_16->regulator)) {
  VAR_20 = FUNC_2(VAR_16->regulator);
  FUNC_4(VAR_14->dev, "Failed to register ISINK%d: %d\n",
   VAR_17 + 1, VAR_20);
  goto err;
 }

 VAR_21 = FUNC_14(VAR_14, FUNC_10(VAR_13, 0));
 VAR_20 = FUNC_9(&VAR_13->dev, VAR_21, ((void*)0),
     VAR_10,
     VAR_6 | VAR_5,
     VAR_16->name,
     VAR_16);
 if (VAR_20 != 0) {
  FUNC_4(&VAR_13->dev, "Failed to request ISINK IRQ %d: %d\n",
   VAR_21, VAR_20);
  goto err;
 }

 FUNC_12(VAR_13, VAR_16);

 return 0;

err:
 return VAR_20;
}
