
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int lock; } ;
struct vsp1_rwpf {TYPE_2__ entity; } ;
struct TYPE_4__ {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; TYPE_1__ r; int which; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_rwpf* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_3 (TYPE_2__*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_4 (TYPE_2__*,struct v4l2_subdev_pad_config*,scalar_t__) ;
 TYPE_1__* FUNC_5 (struct vsp1_rwpf*,struct v4l2_subdev_pad_config*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3,
       struct v4l2_subdev_pad_config *VAR_4,
       struct v4l2_subdev_selection *VAR_5)
{
 struct vsp1_rwpf *VAR_6 = FUNC_2(VAR_3);
 struct v4l2_subdev_pad_config *VAR_7;
 struct v4l2_mbus_framefmt *VAR_8;
 int VAR_9 = 0;





 if (VAR_6->entity.type == VAR_2 || VAR_5->pad != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_6->entity.lock);

 VAR_7 = FUNC_3(&VAR_6->entity, VAR_4, VAR_5->which);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto done;
 }

 switch (VAR_5->target) {
 case 129:
  VAR_5->r = *FUNC_5(VAR_6, VAR_7);
  break;

 case 128:
  VAR_8 = FUNC_4(&VAR_6->entity, VAR_7,
          VAR_1);
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_8->width;
  VAR_5->r.height = VAR_8->height;
  break;

 default:
  VAR_9 = -VAR_0;
  break;
 }

done:
 FUNC_1(&VAR_6->entity.lock);
 return VAR_9;
}
