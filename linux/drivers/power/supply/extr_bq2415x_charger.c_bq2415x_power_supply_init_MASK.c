
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct power_supply_config {int attr_grp; int of_node; struct bq2415x_device* drv_data; } ;
struct TYPE_5__ {int get_property; int num_properties; int properties; int type; int name; } ;
struct bq2415x_device {int charger; int model; TYPE_2__ charger_desc; TYPE_1__* dev; int name; } ;
struct TYPE_4__ {int of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int * VAR_4 ;
 int FUNC_3 (struct bq2415x_device*) ;
 int FUNC_4 (struct bq2415x_device*) ;
 int FUNC_5 (struct bq2415x_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int ,char*,int ,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,struct power_supply_config*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(struct bq2415x_device *VAR_8)
{
 int VAR_9;
 int VAR_10;
 char VAR_11[8];
 struct power_supply_config VAR_12 = {
  .drv_data = VAR_8,
  .of_node = VAR_8->dev->of_node,
  .attr_grp = VAR_7,
 };

 VAR_8->charger_desc.name = VAR_8->name;
 VAR_8->charger_desc.type = VAR_3;
 VAR_8->charger_desc.properties = VAR_6;
 VAR_8->charger_desc.num_properties =
   FUNC_0(VAR_6);
 VAR_8->charger_desc.get_property = VAR_5;

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9 < 0)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_9;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 < 0)
  FUNC_11(VAR_11, "unknown");
 else
  FUNC_10(VAR_11, "1.%d", VAR_9);

 VAR_8->model = FUNC_7(VAR_2,
    "chip %s, revision %s, vender code %.3d",
    VAR_4[VAR_10], VAR_11,
    FUNC_5(VAR_8));
 if (!VAR_8->model) {
  FUNC_6(VAR_8->dev, "failed to allocate model name\n");
  return -VAR_1;
 }

 VAR_8->charger = FUNC_9(VAR_8->dev, &VAR_8->charger_desc,
         &VAR_12);
 if (FUNC_1(VAR_8->charger)) {
  FUNC_8(VAR_8->model);
  return FUNC_2(VAR_8->charger);
 }

 return 0;
}
