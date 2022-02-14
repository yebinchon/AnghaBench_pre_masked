
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * ops; int function; } ;
struct v4l2_subdev {int flags; TYPE_5__ entity; TYPE_2__* ctrl_handler; int name; int * internal_ops; } ;
struct v4l2_device {int dummy; } ;
struct media_pad {int flags; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int error; } ;
struct csid_device {TYPE_2__ ctrls; struct v4l2_subdev subdev; int testgen_mode; int id; TYPE_1__* camss; struct media_pad* pads; } ;
struct TYPE_7__ {struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,struct media_pad*) ;
 int FUNC_5 (int ,int ,char*,char*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_10 (struct v4l2_subdev*,struct csid_device*) ;
 int FUNC_11 (struct v4l2_subdev*,int *) ;

int FUNC_12(struct csid_device *VAR_15,
        struct v4l2_device *VAR_16)
{
 struct v4l2_subdev *VAR_17 = &VAR_15->subdev;
 struct media_pad *VAR_18 = VAR_15->pads;
 struct device *VAR_19 = VAR_15->camss->dev;
 int VAR_20;

 FUNC_11(VAR_17, &VAR_14);
 VAR_17->internal_ops = &VAR_13;
 VAR_17->flags |= VAR_8 |
       VAR_9;
 FUNC_5(VAR_17->name, FUNC_0(VAR_17->name), "%s%d",
   VAR_3, VAR_15->id);
 FUNC_10(VAR_17, VAR_15);

 VAR_20 = FUNC_7(&VAR_15->ctrls, 1);
 if (VAR_20 < 0) {
  FUNC_2(VAR_19, "Failed to init ctrl handler: %d\n", VAR_20);
  return VAR_20;
 }

 VAR_15->testgen_mode = FUNC_8(&VAR_15->ctrls,
    &VAR_10, VAR_7,
    FUNC_0(VAR_12) - 1, 0, 0,
    VAR_12);

 if (VAR_15->ctrls.error) {
  FUNC_2(VAR_19, "Failed to init ctrl: %d\n", VAR_15->ctrls.error);
  VAR_20 = VAR_15->ctrls.error;
  goto free_ctrl;
 }

 VAR_15->subdev.ctrl_handler = &VAR_15->ctrls;

 VAR_20 = FUNC_1(VAR_17, ((void*)0));
 if (VAR_20 < 0) {
  FUNC_2(VAR_19, "Failed to init format: %d\n", VAR_20);
  goto free_ctrl;
 }

 VAR_18[VAR_5].flags = VAR_1;
 VAR_18[VAR_6].flags = VAR_2;

 VAR_17->entity.function = VAR_0;
 VAR_17->entity.ops = &VAR_11;
 VAR_20 = FUNC_4(&VAR_17->entity, VAR_4, VAR_18);
 if (VAR_20 < 0) {
  FUNC_2(VAR_19, "Failed to init media entity: %d\n", VAR_20);
  goto free_ctrl;
 }

 VAR_20 = FUNC_9(VAR_16, VAR_17);
 if (VAR_20 < 0) {
  FUNC_2(VAR_19, "Failed to register subdev: %d\n", VAR_20);
  goto media_cleanup;
 }

 return 0;

media_cleanup:
 FUNC_3(&VAR_17->entity);
free_ctrl:
 FUNC_6(&VAR_15->ctrls);

 return VAR_20;
}
