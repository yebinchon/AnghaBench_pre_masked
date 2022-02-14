
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface3_button_data {struct platform_device** children; } ;
struct platform_device {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 struct surface3_button_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct i2c_client*,struct surface3_button_data*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 struct platform_device* FUNC_10 (struct i2c_client*,int ,int) ;
 int FUNC_11 (struct i2c_client*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_6,
     const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct surface3_button_data *VAR_9;
 struct platform_device *VAR_10;
 int VAR_11;
 int VAR_12;

 if (FUNC_9(FUNC_3(FUNC_0(&VAR_6->dev)),
      VAR_4,
      FUNC_8(VAR_4)))
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_8, ((void*)0));
 if (VAR_12 < 0) {
  FUNC_4(VAR_8, "no GPIO attached, ignoring...\n");
  return VAR_12;
 }

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_7(VAR_6, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_10 = FUNC_10(VAR_6,
         VAR_5,
         VAR_11 == 0);
  if (FUNC_1(VAR_10)) {
   VAR_12 = FUNC_2(VAR_10);
   if (VAR_12 != -VAR_1) {
    FUNC_11(VAR_6);
    return VAR_12;
   }
   continue;
  }

  VAR_9->children[VAR_11] = VAR_10;
 }

 if (!VAR_9->children[0] && !VAR_9->children[1])
  return -VAR_1;

 return 0;
}
