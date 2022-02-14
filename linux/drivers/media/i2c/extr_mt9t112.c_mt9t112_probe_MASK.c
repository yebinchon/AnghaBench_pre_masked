
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mt9t112_priv {int init_done; int subdev; int * standby_gpio; int * clk; scalar_t__ info; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {scalar_t__ platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int * FUNC_3 (TYPE_1__*,char*) ;
 int * FUNC_4 (TYPE_1__*,char*,int ) ;
 struct mt9t112_priv* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct i2c_client*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct mt9t112_priv *VAR_8;
 int VAR_9;

 if (!VAR_6->dev.platform_data) {
  FUNC_2(&VAR_6->dev, "mt9t112: missing platform data!\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->info = VAR_6->dev.platform_data;
 VAR_8->init_done = 0;

 FUNC_8(&VAR_8->subdev, VAR_6, &VAR_5);

 VAR_8->clk = FUNC_3(&VAR_6->dev, "extclk");
 if (FUNC_1(VAR_8->clk) == -VAR_1) {
  VAR_8->clk = ((void*)0);
 } else if (FUNC_0(VAR_8->clk)) {
  FUNC_2(&VAR_6->dev, "Unable to get clock \"extclk\"\n");
  return FUNC_1(VAR_8->clk);
 }

 VAR_8->standby_gpio = FUNC_4(&VAR_6->dev, "standby",
           VAR_4);
 if (FUNC_0(VAR_8->standby_gpio)) {
  FUNC_2(&VAR_6->dev, "Unable to get gpio \"standby\"\n");
  return FUNC_1(VAR_8->standby_gpio);
 }

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9)
  return VAR_9;

 return FUNC_7(&VAR_8->subdev);
}
