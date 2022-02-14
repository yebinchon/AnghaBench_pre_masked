
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int id; int name; } ;
struct twlreg_info {TYPE_2__ desc; int flags; } ;
struct regulation_constraints {int valid_modes_mask; int valid_ops_mask; } ;
struct regulator_init_data {struct regulation_constraints constraints; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct device_node* of_node; struct twlreg_info* driver_data; struct regulator_init_data* init_data; TYPE_1__* dev; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int VAR_14 ;
 int FUNC_2 (TYPE_1__*,char*,int ,int) ;
 struct twlreg_info* FUNC_3 (TYPE_1__*,struct twlreg_info const*,int,int ) ;
 struct regulator_dev* FUNC_4 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 struct twlreg_info* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int *) ;
 struct regulator_init_data* FUNC_7 (TYPE_1__*,struct device_node*,TYPE_2__*) ;
 int FUNC_8 (struct platform_device*,struct regulator_dev*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_15)
{
 int VAR_16;
 struct twlreg_info *VAR_17;
 const struct twlreg_info *VAR_18;
 struct regulator_init_data *VAR_19;
 struct regulation_constraints *VAR_20;
 struct regulator_dev *VAR_21;
 struct regulator_config VAR_22 = { };
 struct device_node *VAR_23 = VAR_15->dev.of_node;

 VAR_18 = FUNC_5(&VAR_15->dev);
 if (!VAR_18)
  return -VAR_1;

 VAR_16 = VAR_18->desc.id;
 VAR_19 = FUNC_7(&VAR_15->dev, VAR_23, &VAR_18->desc);
 if (!VAR_19)
  return -VAR_0;

 VAR_17 = FUNC_3(&VAR_15->dev, VAR_18, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;




 VAR_20 = &VAR_19->constraints;
 VAR_20->valid_modes_mask &= VAR_7 | VAR_8;
 VAR_20->valid_ops_mask &= VAR_6
    | VAR_4
    | VAR_5;

 switch (VAR_16) {
 case 130:
  if (FUNC_9() & VAR_10)
   VAR_17->flags |= VAR_9;
  if (FUNC_10() & VAR_10)
   VAR_17->flags |= VAR_13;
  break;
 case 129:
  if (FUNC_9() & VAR_11)
   VAR_17->flags |= VAR_9;
  if (FUNC_10() & VAR_11)
   VAR_17->flags |= VAR_13;
  break;
 case 128:
  if (FUNC_9() & VAR_12)
   VAR_17->flags |= VAR_9;
  if (FUNC_10() & VAR_12)
   VAR_17->flags |= VAR_13;
  break;
 }

 if (FUNC_6(VAR_23, "ti,retain-on-reset", ((void*)0)))
  VAR_17->flags |= VAR_14;

 VAR_22.dev = &VAR_15->dev;
 VAR_22.init_data = VAR_19;
 VAR_22.driver_data = VAR_17;
 VAR_22.of_node = VAR_23;

 VAR_21 = FUNC_4(&VAR_15->dev, &VAR_17->desc, &VAR_22);
 if (FUNC_0(VAR_21)) {
  FUNC_2(&VAR_15->dev, "can't register %s, %ld\n",
    VAR_17->desc.name, FUNC_1(VAR_21));
  return FUNC_1(VAR_21);
 }
 FUNC_8(VAR_15, VAR_21);
 return 0;
}
