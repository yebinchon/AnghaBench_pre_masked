
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wm8994 {int type; TYPE_1__* dev; int regmap; int irq; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
typedef enum wm8994_type { ____Placeholder_wm8994_type } wm8994_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct wm8994* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct wm8994*) ;
 struct of_device_id* FUNC_6 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_7 (struct wm8994*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
          const struct i2c_device_id *VAR_5)
{
 const struct of_device_id *VAR_6;
 struct wm8994 *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_4->dev, sizeof(struct wm8994), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_5(VAR_4, VAR_7);
 VAR_7->dev = &VAR_4->dev;
 VAR_7->irq = VAR_4->irq;

 if (VAR_4->dev.of_node) {
  VAR_6 = FUNC_6(VAR_3, &VAR_4->dev);
  if (VAR_6)
   VAR_7->type = (enum wm8994_type)VAR_6->data;
 } else {
  VAR_7->type = VAR_5->driver_data;
 }

 VAR_7->regmap = FUNC_4(VAR_4, &VAR_2);
 if (FUNC_0(VAR_7->regmap)) {
  VAR_8 = FUNC_1(VAR_7->regmap);
  FUNC_2(VAR_7->dev, "Failed to allocate register map: %d\n",
   VAR_8);
  return VAR_8;
 }

 return FUNC_7(VAR_7, VAR_4->irq);
}
