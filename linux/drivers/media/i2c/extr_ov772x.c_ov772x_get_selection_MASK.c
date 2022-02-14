
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {scalar_t__ which; int target; TYPE_3__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct ov772x_priv {TYPE_2__* win; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ rect; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 struct ov772x_priv* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
    struct v4l2_subdev_pad_config *VAR_3,
    struct v4l2_subdev_selection *VAR_4)
{
 struct ov772x_priv *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->which != VAR_1)
  return -VAR_0;

 VAR_4->r.left = 0;
 VAR_4->r.top = 0;
 switch (VAR_4->target) {
 case 128:
 case 129:
  VAR_4->r.width = VAR_5->win->rect.width;
  VAR_4->r.height = VAR_5->win->rect.height;
  return 0;
 default:
  return -VAR_0;
 }
}
