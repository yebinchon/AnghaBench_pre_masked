
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_platform_data {int dummy; } ;
struct wm8350 {int * dev; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct wm8350_platform_data* FUNC_3 (int *) ;
 struct wm8350* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct wm8350*) ;
 int FUNC_7 (struct wm8350*,int ,struct wm8350_platform_data*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_3,
       const struct i2c_device_id *VAR_4)
{
 struct wm8350 *VAR_5;
 struct wm8350_platform_data *VAR_6 = FUNC_3(&VAR_3->dev);
 int VAR_7 = 0;

 VAR_5 = FUNC_4(&VAR_3->dev, sizeof(struct wm8350), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->regmap = FUNC_5(VAR_3, &VAR_2);
 if (FUNC_0(VAR_5->regmap)) {
  VAR_7 = FUNC_1(VAR_5->regmap);
  FUNC_2(&VAR_3->dev, "Failed to allocate register map: %d\n",
   VAR_7);
  return VAR_7;
 }

 FUNC_6(VAR_3, VAR_5);
 VAR_5->dev = &VAR_3->dev;

 return FUNC_7(VAR_5, VAR_3->irq, VAR_6);
}
