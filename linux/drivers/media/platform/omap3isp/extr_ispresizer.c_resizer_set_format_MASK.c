
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct v4l2_subdev_format {int which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_2__ {int active; int request; } ;
struct isp_res_device {int ratio; TYPE_1__ crop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_rect* FUNC_0 (struct isp_res_device*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_res_device*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_2 (struct isp_res_device*,int *,struct v4l2_mbus_framefmt*,int *) ;
 int FUNC_3 (struct isp_res_device*,struct v4l2_subdev_pad_config*,int ,struct v4l2_mbus_framefmt*,int ) ;
 struct isp_res_device* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4, struct v4l2_subdev_pad_config *VAR_5,
         struct v4l2_subdev_format *VAR_6)
{
 struct isp_res_device *VAR_7 = FUNC_4(VAR_4);
 struct v4l2_mbus_framefmt *VAR_8;
 struct v4l2_rect *VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6->pad, VAR_6->which);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_7, VAR_5, VAR_6->pad, &VAR_6->format, VAR_6->which);
 *VAR_8 = VAR_6->format;

 if (VAR_6->pad == VAR_1) {

  VAR_9 = FUNC_0(VAR_7, VAR_5, VAR_6->which);
  VAR_9->left = 0;
  VAR_9->top = 0;
  VAR_9->width = VAR_6->format.width;
  VAR_9->height = VAR_6->format.height;


  VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_2,
           VAR_6->which);
  *VAR_8 = VAR_6->format;
  FUNC_3(VAR_7, VAR_5, VAR_2, VAR_8,
       VAR_6->which);
 }

 if (VAR_6->which == VAR_3) {




  VAR_7->crop.active = VAR_7->crop.request;
  FUNC_2(VAR_7, &VAR_7->crop.active, VAR_8,
           &VAR_7->ratio);
 }

 return 0;
}
