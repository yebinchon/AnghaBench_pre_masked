
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {scalar_t__ which; int target; TYPE_1__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_4,
  struct v4l2_subdev_pad_config *VAR_5,
  struct v4l2_subdev_selection *VAR_6)
{
 if (VAR_6->which != VAR_2)
  return -VAR_0;

 VAR_6->r.left = 0;
 VAR_6->r.top = 0;
 switch (VAR_6->target) {
 case 128:
 case 129:
  VAR_6->r.width = VAR_3;
  VAR_6->r.height = VAR_1;
  return 0;
 default:
  return -VAR_0;
 }
}
