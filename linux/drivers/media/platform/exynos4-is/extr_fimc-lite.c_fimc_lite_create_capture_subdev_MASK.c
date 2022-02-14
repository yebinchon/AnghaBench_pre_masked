
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ops; int function; } ;
struct v4l2_subdev {int owner; TYPE_1__ entity; int * internal_ops; struct v4l2_ctrl_handler* ctrl_handler; int name; int flags; } ;
struct v4l2_ctrl_handler {int error; } ;
struct fimc_lite {int index; int test_pattern; TYPE_2__* subdev_pads; struct v4l2_subdev subdev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_5__ {void* flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int *) ;
 int FUNC_5 (struct v4l2_subdev*,struct fimc_lite*) ;
 int FUNC_6 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_7(struct fimc_lite *VAR_13)
{
 struct v4l2_ctrl_handler *VAR_14 = &VAR_13->ctrl_handler;
 struct v4l2_subdev *VAR_15 = &VAR_13->subdev;
 int VAR_16;

 FUNC_6(VAR_15, &VAR_12);
 VAR_15->flags |= VAR_8;
 FUNC_2(VAR_15->name, sizeof(VAR_15->name), "FIMC-LITE.%d", VAR_13->index);

 VAR_13->subdev_pads[VAR_1].flags = VAR_5;
 VAR_13->subdev_pads[VAR_2].flags = VAR_6;
 VAR_13->subdev_pads[VAR_3].flags = VAR_6;
 VAR_16 = FUNC_1(&VAR_15->entity, VAR_0,
    VAR_13->subdev_pads);
 if (VAR_16)
  return VAR_16;

 FUNC_3(VAR_14, 1);
 VAR_13->test_pattern = FUNC_4(VAR_14, &VAR_9,
        ((void*)0));
 if (VAR_14->error) {
  FUNC_0(&VAR_15->entity);
  return VAR_14->error;
 }

 VAR_15->ctrl_handler = VAR_14;
 VAR_15->internal_ops = &VAR_10;
 VAR_15->entity.function = VAR_4;
 VAR_15->entity.ops = &VAR_11;
 VAR_15->owner = VAR_7;
 FUNC_5(VAR_15, VAR_13);

 return 0;
}
