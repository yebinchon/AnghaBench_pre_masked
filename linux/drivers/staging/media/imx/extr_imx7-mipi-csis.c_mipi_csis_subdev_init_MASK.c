
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_ops {int dummy; } ;
struct TYPE_4__ {int * ops; int function; } ;
struct v4l2_subdev {int * dev; int * internal_ops; TYPE_1__ entity; int * ctrl_handler; int flags; int name; int owner; } ;
struct v4l2_async_subdev {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {int field; int height; int width; int code; } ;
struct csi_state {int index; TYPE_2__ format_mbus; TYPE_3__* csis_fmt; } ;
struct TYPE_6__ {int code; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct csi_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,int,char*,char*,int) ;
 int FUNC_3 (struct v4l2_subdev*,int,unsigned int*,int,int ) ;
 int FUNC_4 (struct v4l2_subdev*,int *) ;
 int FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_ops const*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_11,
     struct platform_device *VAR_12,
     const struct v4l2_subdev_ops *VAR_13)
{
 struct csi_state *VAR_14 = FUNC_1(VAR_11);
 unsigned int VAR_15 = 0;
 int VAR_16;

 FUNC_5(VAR_11, VAR_13);
 VAR_11->owner = VAR_4;
 FUNC_2(VAR_11->name, sizeof(VAR_11->name), "%s.%d",
   VAR_0, VAR_14->index);

 VAR_11->flags |= VAR_6;
 VAR_11->ctrl_handler = ((void*)0);

 VAR_11->entity.function = VAR_1;
 VAR_11->entity.ops = &VAR_7;
 VAR_11->internal_ops = &VAR_9;

 VAR_11->dev = &VAR_12->dev;

 VAR_14->csis_fmt = &VAR_8[0];
 VAR_14->format_mbus.code = VAR_8[0].code;
 VAR_14->format_mbus.width = VAR_3;
 VAR_14->format_mbus.height = VAR_2;
 VAR_14->format_mbus.field = VAR_5;

 FUNC_4(VAR_11, &VAR_12->dev);

 VAR_16 = FUNC_3(VAR_11,
      sizeof(struct v4l2_async_subdev),
      &VAR_15, 1,
      VAR_10);
 if (VAR_16 < 0)
  FUNC_0(&VAR_12->dev, "async fwnode register failed: %d\n", VAR_16);

 return VAR_16;
}
