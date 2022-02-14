
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct power_supply_config {int attr_grp; struct ds2781_device_info* drv_data; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_7__ {int get_property; int num_properties; int properties; int type; int name; } ;
struct ds2781_device_info {int bat; TYPE_1__* dev; TYPE_2__ bat_desc; int w1_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct ds2781_device_info* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,struct power_supply_config*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct platform_device*,struct ds2781_device_info*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct power_supply_config VAR_7 = {};
 struct ds2781_device_info *VAR_8;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_7(VAR_6, VAR_8);

 VAR_8->dev = &VAR_6->dev;
 VAR_8->w1_dev = VAR_6->dev.parent;
 VAR_8->bat_desc.name = FUNC_4(&VAR_6->dev);
 VAR_8->bat_desc.type = VAR_2;
 VAR_8->bat_desc.properties = VAR_4;
 VAR_8->bat_desc.num_properties = FUNC_0(VAR_4);
 VAR_8->bat_desc.get_property = VAR_3;

 VAR_7.drv_data = VAR_8;
 VAR_7.attr_grp = VAR_5;

 VAR_8->bat = FUNC_6(&VAR_6->dev,
         &VAR_8->bat_desc,
         &VAR_7);
 if (FUNC_1(VAR_8->bat)) {
  FUNC_3(VAR_8->dev, "failed to register battery\n");
  return FUNC_2(VAR_8->bat);
 }

 return 0;
}
