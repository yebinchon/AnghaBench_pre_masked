
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; TYPE_3__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ bt; } ;
struct adv76xx_state {TYPE_2__ timings; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct adv76xx_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_selection *VAR_5)
{
 struct adv76xx_state *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->which != VAR_2)
  return -VAR_0;

 if (VAR_5->target > VAR_1)
  return -VAR_0;

 VAR_5->r.left = 0;
 VAR_5->r.top = 0;
 VAR_5->r.width = VAR_6->timings.bt.width;
 VAR_5->r.height = VAR_6->timings.bt.height;

 return 0;
}
