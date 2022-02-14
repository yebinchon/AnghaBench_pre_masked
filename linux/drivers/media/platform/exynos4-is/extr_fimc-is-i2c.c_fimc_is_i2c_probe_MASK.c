
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {TYPE_2__* parent; struct device_node* of_node; } ;
struct i2c_adapter {TYPE_1__ dev; int class; int * algo; int owner; int name; } ;
struct fimc_is_i2c {struct i2c_adapter adapter; int clock; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct fimc_is_i2c* FUNC_4 (TYPE_2__*,int,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (struct platform_device*,struct fimc_is_i2c*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct fimc_is_i2c *VAR_7;
 struct i2c_adapter *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->clock = FUNC_3(&VAR_5->dev, "i2c_isp");
 if (FUNC_0(VAR_7->clock)) {
  FUNC_2(&VAR_5->dev, "failed to get the clock\n");
  return FUNC_1(VAR_7->clock);
 }

 VAR_8 = &VAR_7->adapter;
 VAR_8->dev.of_node = VAR_6;
 VAR_8->dev.parent = &VAR_5->dev;
 FUNC_10(VAR_8->name, "exynos4x12-isp-i2c", sizeof(VAR_8->name));
 VAR_8->owner = VAR_3;
 VAR_8->algo = &VAR_4;
 VAR_8->class = VAR_2;

 FUNC_6(VAR_5, VAR_7);
 FUNC_8(&VAR_5->dev);

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9 < 0)
  goto err_pm_dis;
 FUNC_9(&VAR_8->dev, 0);
 return 0;

err_pm_dis:
 FUNC_7(&VAR_5->dev);
 return VAR_9;
}
