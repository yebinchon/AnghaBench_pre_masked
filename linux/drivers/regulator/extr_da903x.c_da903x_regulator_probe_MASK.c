
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct da903x_regulator_info* driver_data; int init_data; int * dev; } ;
struct platform_device {int dev; int id; } ;
struct TYPE_2__ {scalar_t__ id; int n_voltages; int name; int * ops; int n_linear_ranges; int linear_ranges; } ;
struct da903x_regulator_info {TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 struct regulator_dev* FUNC_5 (int *,TYPE_1__*,struct regulator_config*) ;
 struct da903x_regulator_info* FUNC_6 (int ) ;
 int FUNC_7 (struct platform_device*,struct regulator_dev*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct da903x_regulator_info *VAR_10 = ((void*)0);
 struct regulator_dev *VAR_11;
 struct regulator_config VAR_12 = { };

 VAR_10 = FUNC_6(VAR_9->id);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(&VAR_9->dev, "invalid regulator ID specified\n");
  return -VAR_4;
 }


 if (VAR_10->desc.id == VAR_3) {
  VAR_10->desc.ops = &VAR_8;
  VAR_10->desc.n_voltages = 16;
  VAR_10->desc.linear_ranges = VAR_7;
  VAR_10->desc.n_linear_ranges = FUNC_0(VAR_7);
 }

 if (VAR_10->desc.id == VAR_1)
  VAR_10->desc.ops = &VAR_5;

 if (VAR_10->desc.id == VAR_0 || VAR_10->desc.id == VAR_2)
  VAR_10->desc.ops = &VAR_6;

 VAR_12.dev = &VAR_9->dev;
 VAR_12.init_data = FUNC_4(&VAR_9->dev);
 VAR_12.driver_data = VAR_10;

 VAR_11 = FUNC_5(&VAR_9->dev, &VAR_10->desc, &VAR_12);
 if (FUNC_1(VAR_11)) {
  FUNC_3(&VAR_9->dev, "failed to register regulator %s\n",
    VAR_10->desc.name);
  return FUNC_2(VAR_11);
 }

 FUNC_7(VAR_9, VAR_11);
 return 0;
}
