
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int id; int name; } ;
struct twlreg_info {int remap; TYPE_2__ desc; } ;
struct regulation_constraints {int valid_modes_mask; int valid_ops_mask; int always_on; } ;
struct regulator_init_data {struct regulation_constraints constraints; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int of_node; struct twlreg_info* driver_data; struct regulator_init_data* init_data; TYPE_1__* dev; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,char*,int ,int) ;
 struct twlreg_info* FUNC_3 (TYPE_1__*,struct twlreg_info const*,int,int ) ;
 struct regulator_dev* FUNC_4 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 struct twlreg_info* FUNC_5 (TYPE_1__*) ;
 struct regulator_init_data* FUNC_6 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_7 (struct platform_device*,struct regulator_dev*) ;
 int FUNC_8 (struct twlreg_info*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_11)
{
 int VAR_12;
 struct twlreg_info *VAR_13;
 const struct twlreg_info *VAR_14;
 struct regulator_init_data *VAR_15;
 struct regulation_constraints *VAR_16;
 struct regulator_dev *VAR_17;
 struct regulator_config VAR_18 = { };

 VAR_14 = FUNC_5(&VAR_11->dev);
 if (!VAR_14)
  return -VAR_1;

 VAR_12 = VAR_14->desc.id;
 VAR_15 = FUNC_6(&VAR_11->dev, VAR_11->dev.of_node,
      &VAR_14->desc);
 if (!VAR_15)
  return -VAR_0;

 VAR_13 = FUNC_3(&VAR_11->dev, VAR_14, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;




 VAR_16 = &VAR_15->constraints;
 VAR_16->valid_modes_mask &= VAR_7 | VAR_8;
 VAR_16->valid_ops_mask &= VAR_6
    | VAR_4
    | VAR_5;
 switch (VAR_12) {
 case 129:
 case 134:
 case 133:
 case 128:
 case 132:
 case 131:
 case 130:
  VAR_16->always_on = 1;
  break;
 default:
  break;
 }

 VAR_18.dev = &VAR_11->dev;
 VAR_18.init_data = VAR_15;
 VAR_18.driver_data = VAR_13;
 VAR_18.of_node = VAR_11->dev.of_node;

 VAR_17 = FUNC_4(&VAR_11->dev, &VAR_13->desc, &VAR_18);
 if (FUNC_0(VAR_17)) {
  FUNC_2(&VAR_11->dev, "can't register %s, %ld\n",
    VAR_13->desc.name, FUNC_1(VAR_17));
  return FUNC_1(VAR_17);
 }
 FUNC_7(VAR_11, VAR_17);

 FUNC_8(VAR_13, VAR_9, VAR_10, VAR_13->remap);
 return 0;
}
