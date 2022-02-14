
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
struct isp_ccdc_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;


 TYPE_1__* FUNC_0 (struct isp_ccdc_device*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_ccdc_device*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_2 (struct isp_ccdc_device*,struct v4l2_mbus_framefmt*,TYPE_1__*) ;
 struct isp_ccdc_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4, struct v4l2_subdev_pad_config *VAR_5,
         struct v4l2_subdev_selection *VAR_6)
{
 struct isp_ccdc_device *VAR_7 = FUNC_3(VAR_4);
 struct v4l2_mbus_framefmt *VAR_8;

 if (VAR_6->pad != VAR_1)
  return -VAR_2;

 switch (VAR_6->target) {
 case 128:
  VAR_6->r.left = 0;
  VAR_6->r.top = 0;
  VAR_6->r.width = VAR_3;
  VAR_6->r.height = VAR_3;

  VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_0, VAR_6->which);
  FUNC_2(VAR_7, VAR_8, &VAR_6->r);
  break;

 case 129:
  VAR_6->r = *FUNC_0(VAR_7, VAR_5, VAR_6->which);
  break;

 default:
  return -VAR_2;
 }

 return 0;
}
