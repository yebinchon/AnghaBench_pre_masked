
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tc3589x_platform_data {int dummy; } ;
struct tc3589x {int num_gpio; TYPE_1__* dev; struct i2c_client* i2c; struct tc3589x_platform_data* pdata; int lock; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; int adapter; } ;
struct device_node {int dummy; } ;
typedef enum tc3589x_version { ____Placeholder_tc3589x_version } tc3589x_version ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct tc3589x_platform_data*) ;
 int FUNC_1 (struct tc3589x_platform_data*) ;







 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct tc3589x_platform_data* FUNC_3 (TYPE_1__*) ;
 struct tc3589x* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct tc3589x*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ,int,char*,struct tc3589x*) ;
 int FUNC_9 (struct tc3589x*) ;
 int FUNC_10 (struct tc3589x*) ;
 int VAR_7 ;
 int FUNC_11 (struct tc3589x*,struct device_node*) ;
 struct tc3589x_platform_data* FUNC_12 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 struct device_node *VAR_10 = VAR_8->dev.of_node;
 struct tc3589x_platform_data *VAR_11 = FUNC_3(&VAR_8->dev);
 struct tc3589x *VAR_12;
 enum tc3589x_version VAR_13;
 int VAR_14;

 if (!VAR_11) {
  VAR_11 = FUNC_12(&VAR_8->dev, &VAR_13);
  if (FUNC_0(VAR_11)) {
   FUNC_2(&VAR_8->dev, "No platform data or DT found\n");
   return FUNC_1(VAR_11);
  }
 } else {

  VAR_13 = VAR_9->driver_data;
 }

 if (!FUNC_5(VAR_8->adapter, VAR_3
         | VAR_4))
  return -VAR_0;

 VAR_12 = FUNC_4(&VAR_8->dev, sizeof(struct tc3589x),
    VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_7(&VAR_12->lock);

 VAR_12->dev = &VAR_8->dev;
 VAR_12->i2c = VAR_8;
 VAR_12->pdata = VAR_11;

 switch (VAR_13) {
 case 132:
 case 130:
 case 129:
  VAR_12->num_gpio = 20;
  break;
 case 134:
 case 133:
 case 131:
 case 128:
 default:
  VAR_12->num_gpio = 24;
  break;
 }

 FUNC_6(VAR_8, VAR_12);

 VAR_14 = FUNC_9(VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_11(VAR_12, VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_8(VAR_12->i2c->irq, ((void*)0), VAR_7,
       VAR_6 | VAR_5,
       "tc3589x", VAR_12);
 if (VAR_14) {
  FUNC_2(VAR_12->dev, "failed to request IRQ: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_10(VAR_12);
 if (VAR_14) {
  FUNC_2(VAR_12->dev, "failed to add child devices\n");
  return VAR_14;
 }

 return 0;
}
