
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* height; void* width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; int which; TYPE_1__ r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct isp_prev_device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;


 TYPE_1__* FUNC_0 (struct isp_prev_device*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_prev_device*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 int FUNC_2 (struct isp_prev_device*,struct v4l2_mbus_framefmt*,TYPE_1__*) ;
 struct isp_prev_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_selection *VAR_5)
{
 struct isp_prev_device *VAR_6 = FUNC_3(VAR_3);
 struct v4l2_mbus_framefmt *VAR_7;

 if (VAR_5->pad != VAR_2)
  return -VAR_0;

 switch (VAR_5->target) {
 case 128:
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_1;
  VAR_5->r.height = VAR_1;

  VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_2,
           VAR_5->which);
  FUNC_2(VAR_6, VAR_7, &VAR_5->r);
  break;

 case 129:
  VAR_5->r = *FUNC_0(VAR_6, VAR_4, VAR_5->which);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
