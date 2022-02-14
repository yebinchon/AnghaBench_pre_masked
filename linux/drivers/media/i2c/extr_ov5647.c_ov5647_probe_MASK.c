
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int function; } ;
struct v4l2_subdev {TYPE_1__ entity; int flags; int * internal_ops; } ;
struct TYPE_5__ {int flags; } ;
struct ov5647 {int lock; TYPE_2__ pad; struct v4l2_subdev sd; int xclk; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,int *) ;
 struct ov5647* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct v4l2_subdev*) ;
 int FUNC_13 (struct device_node*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (struct v4l2_subdev*) ;
 int FUNC_15 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct ov5647 *VAR_11;
 int VAR_12;
 struct v4l2_subdev *VAR_13;
 struct device_node *VAR_14 = VAR_9->dev.of_node;
 u32 VAR_15;

 VAR_11 = FUNC_7(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 if (FUNC_0(VAR_0) && VAR_14) {
  VAR_12 = FUNC_13(VAR_14);
  if (VAR_12) {
   FUNC_5(VAR_10, "DT parsing error: %d\n", VAR_12);
   return VAR_12;
  }
 }


 VAR_11->xclk = FUNC_6(VAR_10, ((void*)0));
 if (FUNC_1(VAR_11->xclk)) {
  FUNC_5(VAR_10, "could not get xclk");
  return FUNC_2(VAR_11->xclk);
 }

 VAR_15 = FUNC_3(VAR_11->xclk);
 if (VAR_15 != 25000000) {
  FUNC_5(VAR_10, "Unsupported clock frequency: %u\n", VAR_15);
  return -VAR_1;
 }

 FUNC_11(&VAR_11->lock);

 VAR_13 = &VAR_11->sd;
 FUNC_15(VAR_13, VAR_9, &VAR_8);
 VAR_11->sd.internal_ops = &VAR_7;
 VAR_11->sd.flags |= VAR_6;

 VAR_11->pad.flags = VAR_5;
 VAR_13->entity.function = VAR_4;
 VAR_12 = FUNC_9(&VAR_13->entity, 1, &VAR_11->pad);
 if (VAR_12 < 0)
  goto mutex_remove;

 VAR_12 = FUNC_12(VAR_13);
 if (VAR_12 < 0)
  goto error;

 VAR_12 = FUNC_14(VAR_13);
 if (VAR_12 < 0)
  goto error;

 FUNC_4(VAR_10, "OmniVision OV5647 camera driver probed\n");
 return 0;
error:
 FUNC_8(&VAR_13->entity);
mutex_remove:
 FUNC_10(&VAR_11->lock);
 return VAR_12;
}
