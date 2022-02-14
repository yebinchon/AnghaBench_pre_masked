
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


struct stm32_vrefbuf {struct regulator_dev* clk; struct regulator_dev* base; TYPE_1__* dev; } ;
struct resource {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int init_data; int of_node; struct stm32_vrefbuf* driver_data; TYPE_1__* dev; } ;
struct TYPE_16__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_3 ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,int *) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,struct resource*) ;
 struct stm32_vrefbuf* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct regulator_dev*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 struct regulator_dev* FUNC_21 (int *,struct regulator_config*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct stm32_vrefbuf *VAR_7;
 struct regulator_config VAR_8 = { };
 struct regulator_dev *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_7(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->dev = &VAR_5->dev;

 VAR_6 = FUNC_9(VAR_5, VAR_2, 0);
 VAR_7->base = FUNC_6(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_5(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);

 FUNC_13(&VAR_5->dev);
 FUNC_17(&VAR_5->dev);
 FUNC_18(&VAR_5->dev,
      VAR_3);
 FUNC_20(&VAR_5->dev);
 FUNC_12(&VAR_5->dev);

 VAR_10 = FUNC_3(VAR_7->clk);
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "clk prepare failed with error %d\n", VAR_10);
  goto err_pm_stop;
 }

 VAR_8.dev = &VAR_5->dev;
 VAR_8.driver_data = VAR_7;
 VAR_8.of_node = VAR_5->dev.of_node;
 VAR_8.init_data = FUNC_8(&VAR_5->dev,
            VAR_5->dev.of_node,
            &VAR_4);

 VAR_9 = FUNC_21(&VAR_4, &VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  FUNC_4(&VAR_5->dev, "register failed with error %d\n", VAR_10);
  goto err_clk_dis;
 }
 FUNC_10(VAR_5, VAR_9);

 FUNC_14(&VAR_5->dev);
 FUNC_15(&VAR_5->dev);

 return 0;

err_clk_dis:
 FUNC_2(VAR_7->clk);
err_pm_stop:
 FUNC_11(&VAR_5->dev);
 FUNC_19(&VAR_5->dev);
 FUNC_16(&VAR_5->dev);

 return VAR_10;
}
