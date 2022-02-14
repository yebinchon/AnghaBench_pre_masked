
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ops; int function; } ;
struct v4l2_subdev {TYPE_2__ entity; int name; int flags; int * internal_ops; } ;
struct v4l2_device {int dummy; } ;
struct media_pad {int flags; } ;
struct device {int dummy; } ;
struct csiphy_device {int id; TYPE_1__* camss; struct media_pad* pads; struct v4l2_subdev subdev; } ;
struct TYPE_4__ {struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,struct media_pad*) ;
 int FUNC_5 (int ,int ,char*,char*,int ) ;
 int FUNC_6 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*,struct csiphy_device*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;

int FUNC_9(struct csiphy_device *VAR_11,
          struct v4l2_device *VAR_12)
{
 struct v4l2_subdev *VAR_13 = &VAR_11->subdev;
 struct media_pad *VAR_14 = VAR_11->pads;
 struct device *VAR_15 = VAR_11->camss->dev;
 int VAR_16;

 FUNC_8(VAR_13, &VAR_10);
 VAR_13->internal_ops = &VAR_9;
 VAR_13->flags |= VAR_7;
 FUNC_5(VAR_13->name, FUNC_0(VAR_13->name), "%s%d",
   VAR_3, VAR_11->id);
 FUNC_7(VAR_13, VAR_11);

 VAR_16 = FUNC_1(VAR_13, ((void*)0));
 if (VAR_16 < 0) {
  FUNC_2(VAR_15, "Failed to init format: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_14[VAR_5].flags = VAR_1;
 VAR_14[VAR_6].flags = VAR_2;

 VAR_13->entity.function = VAR_0;
 VAR_13->entity.ops = &VAR_8;
 VAR_16 = FUNC_4(&VAR_13->entity, VAR_4, VAR_14);
 if (VAR_16 < 0) {
  FUNC_2(VAR_15, "Failed to init media entity: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_6(VAR_12, VAR_13);
 if (VAR_16 < 0) {
  FUNC_2(VAR_15, "Failed to register subdev: %d\n", VAR_16);
  FUNC_3(&VAR_13->entity);
 }

 return VAR_16;
}
