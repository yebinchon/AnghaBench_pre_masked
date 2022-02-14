
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_pix_format {int pixelformat; int bytesperline; int width; int sizeimage; int height; int colorspace; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct mcam_format_struct {int pixelformat; int bpp; int mbus_code; } ;
struct mcam_camera {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct mcam_format_struct* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct mcam_camera*,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_3 (struct v4l2_pix_format*,int *) ;
 struct mcam_camera* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
  struct v4l2_format *VAR_6)
{
 struct mcam_camera *VAR_7 = FUNC_4(VAR_4);
 struct mcam_format_struct *VAR_8;
 struct v4l2_pix_format *VAR_9 = &VAR_6->fmt.pix;
 struct v4l2_subdev_pad_config VAR_10;
 struct v4l2_subdev_format VAR_11 = {
  .which = VAR_1,
 };
 int VAR_12;

 VAR_8 = FUNC_0(VAR_9->pixelformat);
 VAR_9->pixelformat = VAR_8->pixelformat;
 FUNC_2(&VAR_11.format, VAR_9, VAR_8->mbus_code);
 VAR_12 = FUNC_1(VAR_7, VAR_2, VAR_3, &VAR_10, &VAR_11);
 FUNC_3(VAR_9, &VAR_11.format);
 VAR_9->bytesperline = VAR_9->width * VAR_8->bpp;
 switch (VAR_8->pixelformat) {
 case 129:
 case 128:
  VAR_9->sizeimage = VAR_9->height * VAR_9->bytesperline * 3 / 2;
  break;
 default:
  VAR_9->sizeimage = VAR_9->height * VAR_9->bytesperline;
  break;
 }
 VAR_9->colorspace = VAR_0;
 return VAR_12;
}
