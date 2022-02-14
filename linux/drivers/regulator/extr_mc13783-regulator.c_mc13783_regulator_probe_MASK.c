
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_desc {int name; } ;
struct regulator_config {struct device_node* of_node; struct mc13xxx_regulator_priv* driver_data; struct regulator_init_data* init_data; TYPE_4__* dev; } ;
struct TYPE_11__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct mc13xxx_regulator_priv {int num_regulators; int * regulators; struct mc13xxx* mc13xxx; TYPE_2__* mc13xxx_regulators; } ;
struct mc13xxx_regulator_platform_data {int num_regulators; TYPE_1__* regulators; } ;
struct mc13xxx_regulator_init_data {int id; struct device_node* node; struct regulator_init_data* init_data; } ;
struct mc13xxx {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {struct regulator_desc desc; } ;
struct TYPE_9__ {int id; struct regulator_init_data* init_data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,char*,int ) ;
 struct mc13xxx* FUNC_4 (int ) ;
 struct mc13xxx_regulator_platform_data* FUNC_5 (TYPE_4__*) ;
 struct mc13xxx_regulator_priv* FUNC_6 (TYPE_4__*,int ,int ) ;
 int FUNC_7 (TYPE_4__*,struct regulator_desc*,struct regulator_config*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_8 (struct platform_device*) ;
 struct mc13xxx_regulator_init_data* FUNC_9 (struct platform_device*,TYPE_2__*,int ) ;
 int FUNC_10 (struct platform_device*,struct mc13xxx_regulator_priv*) ;
 int VAR_4 ;
 int FUNC_11 (struct mc13xxx_regulator_priv*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct mc13xxx_regulator_priv *VAR_6;
 struct mc13xxx *VAR_7 = FUNC_4(VAR_5->dev.parent);
 struct mc13xxx_regulator_platform_data *VAR_8 =
  FUNC_5(&VAR_5->dev);
 struct mc13xxx_regulator_init_data *VAR_9;
 struct regulator_config VAR_10 = { };
 int VAR_11, VAR_12;

 VAR_12 = FUNC_8(VAR_5);

 if (VAR_12 <= 0 && VAR_8)
  VAR_12 = VAR_8->num_regulators;
 if (VAR_12 <= 0)
  return -VAR_0;

 VAR_6 = FUNC_6(&VAR_5->dev,
       FUNC_11(VAR_6, VAR_4, VAR_12),
       VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->num_regulators = VAR_12;
 VAR_6->mc13xxx_regulators = VAR_3;
 VAR_6->mc13xxx = VAR_7;
 FUNC_10(VAR_5, VAR_6);

 VAR_9 = FUNC_9(VAR_5, VAR_3,
     FUNC_0(VAR_3));

 for (VAR_11 = 0; VAR_11 < VAR_6->num_regulators; VAR_11++) {
  struct regulator_init_data *VAR_13;
  struct regulator_desc *VAR_14;
  struct device_node *VAR_15 = ((void*)0);
  int VAR_16;

  if (VAR_9) {
   VAR_16 = VAR_9[VAR_11].id;
   VAR_13 = VAR_9[VAR_11].init_data;
   VAR_15 = VAR_9[VAR_11].node;
  } else {
   VAR_16 = VAR_8->regulators[VAR_11].id;
   VAR_13 = VAR_8->regulators[VAR_11].init_data;
  }
  VAR_14 = &VAR_3[VAR_16].desc;

  VAR_10.dev = &VAR_5->dev;
  VAR_10.init_data = VAR_13;
  VAR_10.driver_data = VAR_6;
  VAR_10.of_node = VAR_15;

  VAR_6->regulators[VAR_11] = FUNC_7(&VAR_5->dev, VAR_14,
             &VAR_10);
  if (FUNC_1(VAR_6->regulators[VAR_11])) {
   FUNC_3(&VAR_5->dev, "failed to register regulator %s\n",
    VAR_3[VAR_11].desc.name);
   return FUNC_2(VAR_6->regulators[VAR_11]);
  }
 }

 return 0;
}
