
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct vsp1_uif {TYPE_2__ entity; } ;
struct TYPE_5__ {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; TYPE_1__ r; int which; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_uif* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_3 (TYPE_2__*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_4 (TYPE_2__*,struct v4l2_subdev_pad_config*,scalar_t__) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,struct v4l2_subdev_pad_config*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2,
        struct v4l2_subdev_pad_config *VAR_3,
        struct v4l2_subdev_selection *VAR_4)
{
 struct vsp1_uif *VAR_5 = FUNC_2(VAR_2);
 struct v4l2_subdev_pad_config *VAR_6;
 struct v4l2_mbus_framefmt *VAR_7;
 int VAR_8 = 0;

 if (VAR_4->pad != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_5->entity.lock);

 VAR_6 = FUNC_3(&VAR_5->entity, VAR_3, VAR_4->which);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto done;
 }

 switch (VAR_4->target) {
 case 129:
 case 128:
  VAR_7 = FUNC_4(&VAR_5->entity, VAR_6,
          VAR_1);
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = VAR_7->width;
  VAR_4->r.height = VAR_7->height;
  break;

 case 130:
  VAR_4->r = *FUNC_5(&VAR_5->entity, VAR_6,
       VAR_4->pad, VAR_4->target);
  break;

 default:
  VAR_8 = -VAR_0;
  break;
 }

done:
 FUNC_1(&VAR_5->entity.lock);
 return VAR_8;
}
