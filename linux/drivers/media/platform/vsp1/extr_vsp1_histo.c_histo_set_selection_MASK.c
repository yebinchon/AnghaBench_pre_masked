
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct vsp1_histogram {TYPE_1__ entity; } ;
struct v4l2_subdev_selection {scalar_t__ pad; scalar_t__ target; int which; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_selection*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_selection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vsp1_histogram* FUNC_4 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_5 (TYPE_1__*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_4,
          struct v4l2_subdev_pad_config *VAR_5,
          struct v4l2_subdev_selection *VAR_6)
{
 struct vsp1_histogram *VAR_7 = FUNC_4(VAR_4);
 struct v4l2_subdev_pad_config *VAR_8;
 int VAR_9;

 if (VAR_6->pad != VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_7->entity.lock);

 VAR_8 = FUNC_5(&VAR_7->entity, VAR_5, VAR_6->which);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto done;
 }

 if (VAR_6->target == VAR_3)
  VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_6);
 else if (VAR_6->target == VAR_2)
  VAR_9 = FUNC_0(VAR_4, VAR_8, VAR_6);
 else
  VAR_9 = -VAR_0;

done:
 FUNC_3(&VAR_7->entity.lock);
 return VAR_9;
}
