
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov2640_priv {void* pwdn_gpio; void* resetb_gpio; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
  struct ov2640_priv *VAR_4)
{
 int VAR_5;


 VAR_4->resetb_gpio = FUNC_2(&VAR_3->dev, "resetb",
   VAR_2);

 if (!VAR_4->resetb_gpio)
  FUNC_1(&VAR_3->dev, "resetb gpio is not assigned!\n");

 VAR_5 = FUNC_0(VAR_4->resetb_gpio);
 if (VAR_5 && VAR_5 != -VAR_0) {
  FUNC_1(&VAR_3->dev,
   "Error %d while getting resetb gpio\n", VAR_5);
  return VAR_5;
 }


 VAR_4->pwdn_gpio = FUNC_2(&VAR_3->dev, "pwdn",
   VAR_1);

 if (!VAR_4->pwdn_gpio)
  FUNC_1(&VAR_3->dev, "pwdn gpio is not assigned!\n");

 VAR_5 = FUNC_0(VAR_4->pwdn_gpio);
 if (VAR_5 && VAR_5 != -VAR_0) {
  FUNC_1(&VAR_3->dev,
   "Error %d while getting pwdn gpio\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
