
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wm831x_pdata {int wm831x_num; TYPE_1__** dcdc; } ;
struct TYPE_11__ {int id; int enable_mask; void* curr_table; void* n_current_limits; int csel_mask; scalar_t__ csel_reg; int enable_reg; int owner; int * ops; void* n_linear_ranges; void* linear_ranges; scalar_t__ n_voltages; int type; int supply_name; int name; } ;
struct wm831x_dcdc {int on_vsel; int dvs_vsel; int name; int regulator; TYPE_4__ desc; scalar_t__ base; int supply_name; struct wm831x* wm831x; } ;
struct wm831x {TYPE_2__* dev; int regmap; } ;
struct resource {scalar_t__ start; } ;
struct regulator_config {int regmap; struct wm831x_dcdc* driver_data; TYPE_1__* init_data; int dev; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct TYPE_9__ {int driver_data; } ;


 void* FUNC_0 (void*) ;
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
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 struct wm831x* FUNC_5 (int ) ;
 struct wm831x_pdata* FUNC_6 (TYPE_2__*) ;
 struct wm831x_dcdc* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__*,struct regulator_config*) ;
 int FUNC_9 (TYPE_2__*,int,int *,int ,int,int ,struct wm831x_dcdc*) ;
 int FUNC_10 (struct platform_device*,char*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct wm831x_dcdc*) ;
 int FUNC_13 (int ,int,char*,int) ;
 int FUNC_14 (struct platform_device*,struct wm831x_dcdc*,int ) ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (struct wm831x*,int ) ;
 int FUNC_16 (struct wm831x*,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_21)
{
 struct wm831x *VAR_22 = FUNC_5(VAR_21->dev.parent);
 struct wm831x_pdata *VAR_23 = FUNC_6(VAR_22->dev);
 struct regulator_config VAR_24 = { };
 int VAR_25;
 struct wm831x_dcdc *VAR_26;
 struct resource *VAR_27;
 int VAR_28, VAR_29;

 if (VAR_23 && VAR_23->wm831x_num)
  VAR_25 = (VAR_23->wm831x_num * 10) + 1;
 else
  VAR_25 = 0;
 VAR_25 = VAR_21->id - VAR_25;

 FUNC_3(&VAR_21->dev, "Probing DCDC%d\n", VAR_25 + 1);

 VAR_26 = FUNC_7(&VAR_21->dev, sizeof(struct wm831x_dcdc),
       VAR_2);
 if (!VAR_26)
  return -VAR_1;

 VAR_26->wm831x = VAR_22;

 VAR_27 = FUNC_11(VAR_21, VAR_3, 0);
 if (VAR_27 == ((void*)0)) {
  FUNC_4(&VAR_21->dev, "No REG resource\n");
  VAR_28 = -VAR_0;
  goto err;
 }
 VAR_26->base = VAR_27->start;

 FUNC_13(VAR_26->name, sizeof(VAR_26->name), "DCDC%d", VAR_25 + 1);
 VAR_26->desc.name = VAR_26->name;

 FUNC_13(VAR_26->supply_name, sizeof(VAR_26->supply_name),
   "DC%dVDD", VAR_25 + 1);
 VAR_26->desc.supply_name = VAR_26->supply_name;

 VAR_26->desc.id = VAR_25;
 VAR_26->desc.type = VAR_6;
 VAR_26->desc.n_voltages = VAR_8 + 1;
 VAR_26->desc.linear_ranges = VAR_17;
 VAR_26->desc.n_linear_ranges = FUNC_0(VAR_17);
 VAR_26->desc.ops = &VAR_16;
 VAR_26->desc.owner = VAR_7;
 VAR_26->desc.enable_reg = VAR_14;
 VAR_26->desc.enable_mask = 1 << VAR_25;
 VAR_26->desc.csel_reg = VAR_26->base + VAR_12;
 VAR_26->desc.csel_mask = VAR_10;
 VAR_26->desc.n_current_limits = FUNC_0(VAR_18);
 VAR_26->desc.curr_table = VAR_18;

 VAR_28 = FUNC_16(VAR_22, VAR_26->base + VAR_15);
 if (VAR_28 < 0) {
  FUNC_4(VAR_22->dev, "Failed to read ON VSEL: %d\n", VAR_28);
  goto err;
 }
 VAR_26->on_vsel = VAR_28 & VAR_11;

 VAR_28 = FUNC_16(VAR_22, VAR_26->base + VAR_13);
 if (VAR_28 < 0) {
  FUNC_4(VAR_22->dev, "Failed to read DVS VSEL: %d\n", VAR_28);
  goto err;
 }
 VAR_26->dvs_vsel = VAR_28 & VAR_9;

 if (VAR_23 && VAR_23->dcdc[VAR_25])
  FUNC_14(VAR_21, VAR_26,
          VAR_23->dcdc[VAR_25]->driver_data);

 VAR_24.dev = VAR_21->dev.parent;
 if (VAR_23)
  VAR_24.init_data = VAR_23->dcdc[VAR_25];
 VAR_24.driver_data = VAR_26;
 VAR_24.regmap = VAR_22->regmap;

 VAR_26->regulator = FUNC_8(&VAR_21->dev, &VAR_26->desc,
        &VAR_24);
 if (FUNC_1(VAR_26->regulator)) {
  VAR_28 = FUNC_2(VAR_26->regulator);
  FUNC_4(VAR_22->dev, "Failed to register DCDC%d: %d\n",
   VAR_25 + 1, VAR_28);
  goto err;
 }

 VAR_29 = FUNC_15(VAR_22, FUNC_10(VAR_21, "UV"));
 VAR_28 = FUNC_9(&VAR_21->dev, VAR_29, ((void*)0),
     VAR_20,
     VAR_5 | VAR_4,
     VAR_26->name, VAR_26);
 if (VAR_28 != 0) {
  FUNC_4(&VAR_21->dev, "Failed to request UV IRQ %d: %d\n",
   VAR_29, VAR_28);
  goto err;
 }

 VAR_29 = FUNC_15(VAR_22, FUNC_10(VAR_21, "HC"));
 VAR_28 = FUNC_9(&VAR_21->dev, VAR_29, ((void*)0),
     VAR_19,
     VAR_5 | VAR_4,
     VAR_26->name, VAR_26);
 if (VAR_28 != 0) {
  FUNC_4(&VAR_21->dev, "Failed to request HC IRQ %d: %d\n",
   VAR_29, VAR_28);
  goto err;
 }

 FUNC_12(VAR_21, VAR_26);

 return 0;

err:
 return VAR_28;
}
