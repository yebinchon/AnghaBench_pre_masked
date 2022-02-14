
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct regulator_ops {int dummy; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_desc {int name; TYPE_2__* ops; } ;
struct regulator_config {struct device_node* of_node; struct mc13xxx_regulator_priv* driver_data; struct regulator_init_data* init_data; TYPE_7__* dev; } ;
struct TYPE_15__ {int parent; } ;
struct platform_device {TYPE_7__ dev; } ;
struct mc13xxx_regulator_priv {int num_regulators; int * regulators; struct mc13xxx* mc13xxx; TYPE_4__* mc13xxx_regulators; } ;
struct mc13xxx_regulator_platform_data {int num_regulators; TYPE_1__* regulators; } ;
struct mc13xxx_regulator_init_data {int id; struct device_node* node; struct regulator_init_data* init_data; } ;
struct mc13xxx {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_14__ {struct regulator_desc desc; } ;
struct TYPE_13__ {int get_mode; int set_mode; } ;
struct TYPE_12__ {int id; struct regulator_init_data* init_data; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
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
 size_t VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,char*,int ) ;
 struct mc13xxx* FUNC_4 (int ) ;
 struct mc13xxx_regulator_platform_data* FUNC_5 (TYPE_7__*) ;
 struct mc13xxx_regulator_priv* FUNC_6 (TYPE_7__*,int ,int ) ;
 int FUNC_7 (TYPE_7__*,struct regulator_desc*,struct regulator_config*) ;
 TYPE_4__* VAR_15 ;
 int VAR_16 ;
 TYPE_2__ VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct mc13xxx*) ;
 struct mc13xxx_regulator_init_data* FUNC_10 (struct platform_device*,TYPE_4__*,int ) ;
 int FUNC_11 (struct mc13xxx*,int ,int*) ;
 int FUNC_12 (struct mc13xxx*,int ,int,int) ;
 int FUNC_13 (struct mc13xxx*) ;
 int FUNC_14 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_15 (struct platform_device*,struct mc13xxx_regulator_priv*) ;
 int VAR_19 ;
 int FUNC_16 (struct mc13xxx_regulator_priv*,int ,int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_20)
{
 struct mc13xxx_regulator_priv *VAR_21;
 struct mc13xxx *VAR_22 = FUNC_4(VAR_20->dev.parent);
 struct mc13xxx_regulator_platform_data *VAR_23 =
  FUNC_5(&VAR_20->dev);
 struct mc13xxx_regulator_init_data *VAR_24;
 struct regulator_config VAR_25 = { };
 int VAR_26, VAR_27;
 int VAR_28 = 0;
 u32 VAR_29;

 VAR_28 = FUNC_8(VAR_20);

 if (VAR_28 <= 0 && VAR_23)
  VAR_28 = VAR_23->num_regulators;
 if (VAR_28 <= 0)
  return -VAR_0;

 VAR_21 = FUNC_6(&VAR_20->dev,
       FUNC_16(VAR_21, VAR_19, VAR_28),
       VAR_2);
 if (!VAR_21)
  return -VAR_1;

 VAR_21->num_regulators = VAR_28;
 VAR_21->mc13xxx_regulators = VAR_15;
 VAR_21->mc13xxx = VAR_22;
 FUNC_15(VAR_20, VAR_21);

 FUNC_9(VAR_22);
 VAR_27 = FUNC_11(VAR_22, VAR_3, &VAR_29);
 if (VAR_27)
  goto err_unlock;


 if ((VAR_29 & 0x0000FFFF) == 0x45d0) {
  VAR_27 = FUNC_12(VAR_22, VAR_4,
   VAR_6 |
   VAR_8,
   VAR_5 |
   VAR_7);
  if (VAR_27)
   goto err_unlock;

  VAR_27 = FUNC_12(VAR_22, VAR_9,
   VAR_11 |
   VAR_13,
   VAR_10 |
   VAR_12);
  if (VAR_27)
   goto err_unlock;
 }
 FUNC_13(VAR_22);


 FUNC_14(&VAR_17, VAR_15[VAR_14].desc.ops,
      sizeof(struct regulator_ops));
 VAR_17.set_mode = VAR_18,
 VAR_17.get_mode = VAR_16,
 VAR_15[VAR_14].desc.ops = &VAR_17;

 VAR_24 = FUNC_10(VAR_20, VAR_15,
     FUNC_0(VAR_15));

 for (VAR_26 = 0; VAR_26 < VAR_21->num_regulators; VAR_26++) {
  struct regulator_init_data *VAR_30;
  struct regulator_desc *VAR_31;
  struct device_node *VAR_32 = ((void*)0);
  int VAR_33;

  if (VAR_24) {
   VAR_33 = VAR_24[VAR_26].id;
   VAR_30 = VAR_24[VAR_26].init_data;
   VAR_32 = VAR_24[VAR_26].node;
  } else {
   VAR_33 = VAR_23->regulators[VAR_26].id;
   VAR_30 = VAR_23->regulators[VAR_26].init_data;
  }
  VAR_31 = &VAR_15[VAR_33].desc;

  VAR_25.dev = &VAR_20->dev;
  VAR_25.init_data = VAR_30;
  VAR_25.driver_data = VAR_21;
  VAR_25.of_node = VAR_32;

  VAR_21->regulators[VAR_26] = FUNC_7(&VAR_20->dev, VAR_31,
             &VAR_25);
  if (FUNC_1(VAR_21->regulators[VAR_26])) {
   FUNC_3(&VAR_20->dev, "failed to register regulator %s\n",
    VAR_15[VAR_26].desc.name);
   return FUNC_2(VAR_21->regulators[VAR_26]);
  }
 }

 return 0;

err_unlock:
 FUNC_13(VAR_22);
 return VAR_27;
}
