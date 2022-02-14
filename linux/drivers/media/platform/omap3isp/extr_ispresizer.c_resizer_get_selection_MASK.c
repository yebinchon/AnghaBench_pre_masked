
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* height; void* width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; TYPE_1__ r; int which; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct resizer_ratio {int dummy; } ;
struct isp_res_device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 TYPE_1__* FUNC_0 (struct isp_res_device*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_res_device*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 int FUNC_2 (struct isp_res_device*,TYPE_1__*,struct v4l2_mbus_framefmt*,struct resizer_ratio*) ;
 int FUNC_3 (struct v4l2_mbus_framefmt*,struct v4l2_mbus_framefmt*,TYPE_1__*) ;
 struct isp_res_device* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_selection *VAR_6)
{
 struct isp_res_device *VAR_7 = FUNC_4(VAR_4);
 struct v4l2_mbus_framefmt *VAR_8;
 struct v4l2_mbus_framefmt *VAR_9;
 struct resizer_ratio VAR_10;

 if (VAR_6->pad != VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_7, VAR_5, VAR_2,
        VAR_6->which);
 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_3,
          VAR_6->which);

 switch (VAR_6->target) {
 case 128:
  VAR_6->r.left = 0;
  VAR_6->r.top = 0;
  VAR_6->r.width = VAR_1;
  VAR_6->r.height = VAR_1;

  FUNC_3(VAR_9, VAR_8, &VAR_6->r);
  FUNC_2(VAR_7, &VAR_6->r, VAR_8, &VAR_10);
  break;

 case 129:
  VAR_6->r = *FUNC_0(VAR_7, VAR_5, VAR_6->which);
  FUNC_2(VAR_7, &VAR_6->r, VAR_8, &VAR_10);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
