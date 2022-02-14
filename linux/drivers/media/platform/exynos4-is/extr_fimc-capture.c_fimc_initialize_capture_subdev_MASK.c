
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ops; } ;
struct v4l2_subdev {int * internal_ops; TYPE_2__ entity; int name; int flags; } ;
struct TYPE_4__ {TYPE_3__* sd_pads; struct v4l2_subdev subdev; } ;
struct fimc_dev {int id; TYPE_1__ vid_cap; } ;
struct TYPE_6__ {void* flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (struct v4l2_subdev*,struct fimc_dev*) ;
 int FUNC_3 (struct v4l2_subdev*,int *) ;

int FUNC_4(struct fimc_dev *VAR_10)
{
 struct v4l2_subdev *VAR_11 = &VAR_10->vid_cap.subdev;
 int VAR_12;

 FUNC_3(VAR_11, &VAR_9);
 VAR_11->flags |= VAR_6;
 FUNC_1(VAR_11->name, sizeof(VAR_11->name), "FIMC.%d", VAR_10->id);

 VAR_10->vid_cap.sd_pads[VAR_1].flags = VAR_4;
 VAR_10->vid_cap.sd_pads[VAR_2].flags = VAR_4;
 VAR_10->vid_cap.sd_pads[VAR_3].flags = VAR_5;
 VAR_12 = FUNC_0(&VAR_11->entity, VAR_0,
    VAR_10->vid_cap.sd_pads);
 if (VAR_12)
  return VAR_12;

 VAR_11->entity.ops = &VAR_8;
 VAR_11->internal_ops = &VAR_7;
 FUNC_2(VAR_11, VAR_10);
 return 0;
}
