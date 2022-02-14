
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ source_pad; int lock; } ;
struct vsp1_brx {TYPE_1__ entity; } ;
struct TYPE_4__ {void* height; void* width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; TYPE_2__ r; int which; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;


 TYPE_2__* FUNC_0 (struct vsp1_brx*,struct v4l2_subdev_pad_config*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vsp1_brx* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_4 (TYPE_1__*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
        struct v4l2_subdev_pad_config *VAR_3,
        struct v4l2_subdev_selection *VAR_4)
{
 struct vsp1_brx *VAR_5 = FUNC_3(VAR_2);
 struct v4l2_subdev_pad_config *VAR_6;

 if (VAR_4->pad == VAR_5->entity.source_pad)
  return -VAR_1;

 switch (VAR_4->target) {
 case 128:
  VAR_4->r.left = 0;
  VAR_4->r.top = 0;
  VAR_4->r.width = VAR_0;
  VAR_4->r.height = VAR_0;
  return 0;

 case 129:
  VAR_6 = FUNC_4(&VAR_5->entity, VAR_3,
          VAR_4->which);
  if (!VAR_6)
   return -VAR_1;

  FUNC_1(&VAR_5->entity.lock);
  VAR_4->r = *FUNC_0(VAR_5, VAR_6, VAR_4->pad);
  FUNC_2(&VAR_5->entity.lock);
  return 0;

 default:
  return -VAR_1;
 }
}
