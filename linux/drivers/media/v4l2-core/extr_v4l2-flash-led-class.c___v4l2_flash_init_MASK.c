
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int function; } ;
struct v4l2_subdev {TYPE_1__ entity; int ctrl_handler; struct fwnode_handle* fwnode; int name; int flags; int * internal_ops; struct device* dev; } ;
struct v4l2_flash_ops {int dummy; } ;
struct v4l2_flash_config {int dev_name; } ;
struct v4l2_flash {struct v4l2_flash_ops const* ops; struct led_classdev* iled_cdev; struct led_classdev_flash* fled_cdev; struct v4l2_subdev sd; } ;
struct led_classdev_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_flash* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fwnode_handle* FUNC_1 (struct device*) ;
 struct v4l2_flash* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct fwnode_handle*) ;
 int FUNC_4 (struct fwnode_handle*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct v4l2_flash*,struct v4l2_flash_config*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static struct v4l2_flash *FUNC_12(
 struct device *VAR_7, struct fwnode_handle *VAR_8,
 struct led_classdev_flash *VAR_9, struct led_classdev *VAR_10,
 const struct v4l2_flash_ops *VAR_11, struct v4l2_flash_config *VAR_12)
{
 struct v4l2_flash *VAR_13;
 struct v4l2_subdev *VAR_14;
 int VAR_15;

 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_13 = FUNC_2(VAR_7, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_1);

 VAR_14 = &VAR_13->sd;
 VAR_13->fled_cdev = VAR_9;
 VAR_13->iled_cdev = VAR_10;
 VAR_13->ops = VAR_11;
 VAR_14->dev = VAR_7;
 VAR_14->fwnode = VAR_8 ? VAR_8 : FUNC_1(VAR_7);
 FUNC_11(VAR_14, &VAR_6);
 VAR_14->internal_ops = &VAR_5;
 VAR_14->flags |= VAR_4;
 FUNC_7(VAR_14->name, VAR_12->dev_name, sizeof(VAR_14->name));

 VAR_15 = FUNC_6(&VAR_14->entity, 0, ((void*)0));
 if (VAR_15 < 0)
  return FUNC_0(VAR_15);

 VAR_14->entity.function = VAR_3;

 VAR_15 = FUNC_10(VAR_13, VAR_12);
 if (VAR_15 < 0)
  goto err_init_controls;

 FUNC_3(VAR_14->fwnode);

 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15 < 0)
  goto err_async_register_sd;

 return VAR_13;

err_async_register_sd:
 FUNC_4(VAR_14->fwnode);
 FUNC_9(VAR_14->ctrl_handler);
err_init_controls:
 FUNC_5(&VAR_14->entity);

 return FUNC_0(VAR_15);
}
