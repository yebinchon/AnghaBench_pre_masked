
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct device_node* of_node; struct ab8500_regulator_info* driver_data; struct regulator_init_data* init_data; TYPE_1__* dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ id; int name; int volt_table; int n_voltages; } ;
struct ab8500_regulator_info {int voltage_mask; TYPE_2__ desc; TYPE_1__* dev; } ;
struct ab8500 {int dummy; } ;
struct TYPE_7__ {struct ab8500_regulator_info* info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 struct ab8500* FUNC_4 (int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 scalar_t__ FUNC_6 (struct ab8500*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3,
         struct regulator_init_data *VAR_4,
         int VAR_5, struct device_node *VAR_6)
{
 struct ab8500 *VAR_7 = FUNC_4(VAR_3->dev.parent);
 struct ab8500_regulator_info *VAR_8 = ((void*)0);
 struct regulator_config VAR_9 = { };
 struct regulator_dev *VAR_10;


 VAR_8 = &VAR_1.info[VAR_5];
 VAR_8->dev = &VAR_3->dev;

 VAR_9.dev = &VAR_3->dev;
 VAR_9.init_data = VAR_4;
 VAR_9.driver_data = VAR_8;
 VAR_9.of_node = VAR_6;


 if (FUNC_6(VAR_7)) {
  if (VAR_8->desc.id == VAR_0) {
   VAR_8->desc.n_voltages =
    FUNC_0(VAR_2);
   VAR_8->desc.volt_table = VAR_2;
   VAR_8->voltage_mask = 0xf;
  }
 }


 VAR_10 = FUNC_5(&VAR_3->dev, &VAR_8->desc, &VAR_9);
 if (FUNC_1(VAR_10)) {
  FUNC_3(&VAR_3->dev, "failed to register regulator %s\n",
   VAR_8->desc.name);
  return FUNC_2(VAR_10);
 }

 return 0;
}
