
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_selection {scalar_t__ target; scalar_t__ pad; int flags; int which; int r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct isp_ccdc_device {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (struct isp_ccdc_device*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_ccdc_device*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 int FUNC_2 (struct isp_ccdc_device*,struct v4l2_mbus_framefmt*,int *) ;
 int FUNC_3 (struct isp_ccdc_device*,struct v4l2_subdev_pad_config*,scalar_t__,struct v4l2_mbus_framefmt*,int ) ;
 struct isp_ccdc_device* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_7, struct v4l2_subdev_pad_config *VAR_8,
         struct v4l2_subdev_selection *VAR_9)
{
 struct isp_ccdc_device *VAR_10 = FUNC_4(VAR_7);
 struct v4l2_mbus_framefmt *VAR_11;

 if (VAR_9->target != VAR_6 ||
     VAR_9->pad != VAR_1)
  return -VAR_3;


 if (VAR_10->state != VAR_4)
  return -VAR_2;





 if (VAR_9->flags & VAR_5) {
  VAR_9->r = *FUNC_0(VAR_10, VAR_8, VAR_9->which);
  return 0;
 }

 VAR_11 = FUNC_1(VAR_10, VAR_8, VAR_0, VAR_9->which);
 FUNC_2(VAR_10, VAR_11, &VAR_9->r);
 *FUNC_0(VAR_10, VAR_8, VAR_9->which) = VAR_9->r;


 VAR_11 = FUNC_1(VAR_10, VAR_8, VAR_1, VAR_9->which);
 FUNC_3(VAR_10, VAR_8, VAR_1, VAR_11, VAR_9->which);

 return 0;
}
