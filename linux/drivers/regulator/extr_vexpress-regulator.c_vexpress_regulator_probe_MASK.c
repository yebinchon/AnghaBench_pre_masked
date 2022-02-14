
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ max_uV; scalar_t__ min_uV; scalar_t__ apply_uV; } ;
struct regulator_init_data {TYPE_1__ constraints; } ;
struct regulator_dev {int dummy; } ;
struct regulator_desc {int continuous_voltage_range; int * ops; int owner; int type; int name; } ;
struct regulator_config {int of_node; struct regulator_init_data* init_data; TYPE_2__* dev; struct regulator_dev* regmap; } ;
typedef struct regulator_dev regmap ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 struct regulator_desc* FUNC_3 (TYPE_2__*,int,int ) ;
 struct regulator_dev* FUNC_4 (TYPE_2__*) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,struct regulator_desc*,struct regulator_config*) ;
 struct regulator_init_data* FUNC_6 (TYPE_2__*,int ,struct regulator_desc*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct regulator_desc *VAR_8;
 struct regulator_init_data *VAR_9;
 struct regulator_config VAR_10 = { };
 struct regulator_dev *VAR_11;
 struct regmap *VAR_12;

 VAR_8 = FUNC_3(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_12 = FUNC_4(&VAR_7->dev);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_8->name = FUNC_2(&VAR_7->dev);
 VAR_8->type = VAR_3;
 VAR_8->owner = VAR_4;
 VAR_8->continuous_voltage_range = 1;

 VAR_9 = FUNC_6(&VAR_7->dev, VAR_7->dev.of_node,
            VAR_8);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->constraints.apply_uV = 0;
 if (VAR_9->constraints.min_uV && VAR_9->constraints.max_uV)
  VAR_8->ops = &VAR_5;
 else
  VAR_8->ops = &VAR_6;

 VAR_10.regmap = VAR_12;
 VAR_10.dev = &VAR_7->dev;
 VAR_10.init_data = VAR_9;
 VAR_10.of_node = VAR_7->dev.of_node;

 VAR_11 = FUNC_5(&VAR_7->dev, VAR_8, &VAR_10);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 return 0;
}
