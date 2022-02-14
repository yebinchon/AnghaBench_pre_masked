
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wm831x_pdata {int dummy; } ;
struct wm831x {int type; int pdata; TYPE_1__* dev; int regmap; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
typedef enum wm831x_parent { ____Placeholder_wm831x_parent } wm831x_parent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct wm831x_pdata* FUNC_3 (TYPE_1__*) ;
 struct wm831x* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct wm831x*) ;
 int FUNC_7 (int *,struct wm831x_pdata*,int) ;
 struct of_device_id* FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (struct wm831x*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5,
       const struct i2c_device_id *VAR_6)
{
 struct wm831x_pdata *VAR_7 = FUNC_3(&VAR_5->dev);
 const struct of_device_id *VAR_8;
 struct wm831x *VAR_9;
 enum wm831x_parent VAR_10;
 int VAR_11;

 if (VAR_5->dev.of_node) {
  VAR_8 = FUNC_8(VAR_3, &VAR_5->dev);
  if (!VAR_8) {
   FUNC_2(&VAR_5->dev, "Failed to match device\n");
   return -VAR_0;
  }
  VAR_10 = (enum wm831x_parent)VAR_8->data;
 } else {
  VAR_10 = (enum wm831x_parent)VAR_6->driver_data;
 }

 VAR_9 = FUNC_4(&VAR_5->dev, sizeof(struct wm831x), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 FUNC_6(VAR_5, VAR_9);
 VAR_9->dev = &VAR_5->dev;
 VAR_9->type = VAR_10;

 VAR_9->regmap = FUNC_5(VAR_5, &VAR_4);
 if (FUNC_0(VAR_9->regmap)) {
  VAR_11 = FUNC_1(VAR_9->regmap);
  FUNC_2(VAR_9->dev, "Failed to allocate register map: %d\n",
   VAR_11);
  return VAR_11;
 }

 if (VAR_7)
  FUNC_7(&VAR_9->pdata, VAR_7, sizeof(*VAR_7));

 return FUNC_9(VAR_9, VAR_5->irq);
}
