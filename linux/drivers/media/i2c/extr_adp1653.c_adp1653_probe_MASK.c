
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {scalar_t__ platform_data; int of_node; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct TYPE_6__ {int function; } ;
struct TYPE_5__ {TYPE_2__ entity; int flags; int * internal_ops; } ;
struct adp1653_flash {int ctrls; TYPE_1__ subdev; int power_lock; scalar_t__ platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adp1653_flash*) ;
 int VAR_5 ;
 int FUNC_1 (struct i2c_client*,struct adp1653_flash*,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct adp1653_flash* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct adp1653_flash *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 if (VAR_7->dev.of_node) {
  VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_7->dev.of_node);
  if (VAR_10)
   return VAR_10;
 } else {
  if (!VAR_7->dev.platform_data) {
   FUNC_2(&VAR_7->dev,
    "Neither DT not platform data provided\n");
   return -VAR_0;
  }
  VAR_9->platform_data = VAR_7->dev.platform_data;
 }

 FUNC_5(&VAR_9->power_lock);

 FUNC_7(&VAR_9->subdev, VAR_7, &VAR_6);
 VAR_9->subdev.internal_ops = &VAR_5;
 VAR_9->subdev.flags |= VAR_4;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  goto free_and_quit;

 VAR_10 = FUNC_4(&VAR_9->subdev.entity, 0, ((void*)0));
 if (VAR_10 < 0)
  goto free_and_quit;

 VAR_9->subdev.entity.function = VAR_3;

 return 0;

free_and_quit:
 FUNC_2(&VAR_7->dev, "adp1653: failed to register device\n");
 FUNC_6(&VAR_9->ctrls);
 return VAR_10;
}
