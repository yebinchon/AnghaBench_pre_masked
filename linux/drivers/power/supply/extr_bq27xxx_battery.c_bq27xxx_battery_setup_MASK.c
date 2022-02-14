
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct power_supply_desc {int external_power_changed; int get_property; int num_properties; int properties; int type; int name; } ;
struct power_supply_config {struct bq27xxx_device_info* drv_data; int of_node; } ;
struct bq27xxx_device_info {size_t chip; int list; int bat; TYPE_1__* dev; int name; int opts; int dm_regs; int unseal_key; int regs; int lock; int work; } ;
struct TYPE_6__ {int props_size; int props; int opts; int dm_regs; int unseal_key; int regs; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bq27xxx_device_info*) ;
 int FUNC_4 (struct bq27xxx_device_info*) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct power_supply_desc* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,struct power_supply_desc*,struct power_supply_config*) ;

int FUNC_12(struct bq27xxx_device_info *VAR_9)
{
 struct power_supply_desc *VAR_10;
 struct power_supply_config VAR_11 = {
  .of_node = VAR_9->dev->of_node,
  .drv_data = VAR_9,
 };

 FUNC_0(&VAR_9->work, VAR_5);
 FUNC_8(&VAR_9->lock);

 VAR_9->regs = VAR_6[VAR_9->chip].regs;
 VAR_9->unseal_key = VAR_6[VAR_9->chip].unseal_key;
 VAR_9->dm_regs = VAR_6[VAR_9->chip].dm_regs;
 VAR_9->opts = VAR_6[VAR_9->chip].opts;

 VAR_10 = FUNC_6(VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->name = VAR_9->name;
 VAR_10->type = VAR_2;
 VAR_10->properties = VAR_6[VAR_9->chip].props;
 VAR_10->num_properties = VAR_6[VAR_9->chip].props_size;
 VAR_10->get_property = VAR_4;
 VAR_10->external_power_changed = VAR_7;

 VAR_9->bat = FUNC_11(VAR_9->dev, VAR_10, &VAR_11);
 if (FUNC_1(VAR_9->bat)) {
  FUNC_5(VAR_9->dev, "failed to register battery\n");
  return FUNC_2(VAR_9->bat);
 }

 FUNC_3(VAR_9);
 FUNC_4(VAR_9);

 FUNC_9(&VAR_8);
 FUNC_7(&VAR_9->list, &VAR_3);
 FUNC_10(&VAR_8);

 return 0;
}
