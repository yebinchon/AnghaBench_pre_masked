
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wm831x_pdata {int * epe; } ;
struct TYPE_6__ {int id; int enable_mask; int enable_reg; int owner; int type; int * ops; int name; } ;
struct wm831x_dcdc {int regulator; TYPE_2__ desc; int name; struct wm831x* wm831x; } ;
struct wm831x {int dev; int regmap; } ;
struct regulator_config {int regmap; struct wm831x_dcdc* driver_data; int init_data; int dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {int id; TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (int ,char*,int,int) ;
 struct wm831x* FUNC_5 (int ) ;
 struct wm831x_pdata* FUNC_6 (int ) ;
 struct wm831x_dcdc* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 int FUNC_9 (struct platform_device*,struct wm831x_dcdc*) ;
 int FUNC_10 (int ,int,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct wm831x *VAR_8 = FUNC_5(VAR_7->dev.parent);
 struct wm831x_pdata *VAR_9 = FUNC_6(VAR_8->dev);
 struct regulator_config VAR_10 = { };
 int VAR_11 = VAR_7->id % FUNC_0(VAR_9->epe);
 struct wm831x_dcdc *VAR_12;
 int VAR_13;

 FUNC_3(&VAR_7->dev, "Probing EPE%d\n", VAR_11 + 1);

 VAR_12 = FUNC_7(&VAR_7->dev, sizeof(struct wm831x_dcdc), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->wm831x = VAR_8;




 FUNC_10(VAR_12->name, sizeof(VAR_12->name), "EPE%d", VAR_11 + 1);
 VAR_12->desc.name = VAR_12->name;
 VAR_12->desc.id = VAR_11 + VAR_5;
 VAR_12->desc.ops = &VAR_6;
 VAR_12->desc.type = VAR_2;
 VAR_12->desc.owner = VAR_3;
 VAR_12->desc.enable_reg = VAR_4;
 VAR_12->desc.enable_mask = 1 << VAR_12->desc.id;

 VAR_10.dev = VAR_7->dev.parent;
 if (VAR_9)
  VAR_10.init_data = VAR_9->epe[VAR_11];
 VAR_10.driver_data = VAR_12;
 VAR_10.regmap = VAR_8->regmap;

 VAR_12->regulator = FUNC_8(&VAR_7->dev, &VAR_12->desc,
        &VAR_10);
 if (FUNC_1(VAR_12->regulator)) {
  VAR_13 = FUNC_2(VAR_12->regulator);
  FUNC_4(VAR_8->dev, "Failed to register EPE%d: %d\n",
   VAR_11 + 1, VAR_13);
  goto err;
 }

 FUNC_9(VAR_7, VAR_12);

 return 0;

err:
 return VAR_13;
}
