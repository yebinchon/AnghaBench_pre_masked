
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
struct ispif_device {int line_num; TYPE_1__* line; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct v4l2_subdev subdev; struct media_pad* pads; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct v4l2_subdev*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,struct media_pad*) ;
 int FUNC_5 (int ,int ,char*,char*,int) ;
 struct device* FUNC_6 (struct ispif_device*) ;
 int FUNC_7 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct v4l2_subdev*,TYPE_1__*) ;
 int FUNC_10 (struct v4l2_subdev*,int *) ;

int FUNC_11(struct ispif_device *VAR_11,
    struct v4l2_device *VAR_12)
{
 struct device *VAR_13 = FUNC_6(VAR_11);
 int VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_11->line_num; VAR_15++) {
  struct v4l2_subdev *VAR_16 = &VAR_11->line[VAR_15].subdev;
  struct media_pad *VAR_17 = VAR_11->line[VAR_15].pads;

  FUNC_10(VAR_16, &VAR_10);
  VAR_16->internal_ops = &VAR_9;
  VAR_16->flags |= VAR_7;
  FUNC_5(VAR_16->name, FUNC_0(VAR_16->name), "%s%d",
    VAR_3, VAR_15);
  FUNC_9(VAR_16, &VAR_11->line[VAR_15]);

  VAR_14 = FUNC_2(VAR_16, ((void*)0));
  if (VAR_14 < 0) {
   FUNC_1(VAR_13, "Failed to init format: %d\n", VAR_14);
   goto error;
  }

  VAR_17[VAR_5].flags = VAR_1;
  VAR_17[VAR_6].flags = VAR_2;

  VAR_16->entity.function = VAR_0;
  VAR_16->entity.ops = &VAR_8;
  VAR_14 = FUNC_4(&VAR_16->entity, VAR_4,
          VAR_17);
  if (VAR_14 < 0) {
   FUNC_1(VAR_13, "Failed to init media entity: %d\n", VAR_14);
   goto error;
  }

  VAR_14 = FUNC_7(VAR_12, VAR_16);
  if (VAR_14 < 0) {
   FUNC_1(VAR_13, "Failed to register subdev: %d\n", VAR_14);
   FUNC_3(&VAR_16->entity);
   goto error;
  }
 }

 return 0;

error:
 for (VAR_15--; VAR_15 >= 0; VAR_15--) {
  struct v4l2_subdev *VAR_18 = &VAR_11->line[VAR_15].subdev;

  FUNC_8(VAR_18);
  FUNC_3(&VAR_18->entity);
 }

 return VAR_14;
}
