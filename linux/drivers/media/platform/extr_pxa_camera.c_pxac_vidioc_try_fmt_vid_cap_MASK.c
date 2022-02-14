
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int field; int bytesperline; int sizeimage; int height; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct pxa_camera_format_xlate {int host_fmt; int code; } ;
struct pxa_camera_dev {int user_formats; } ;
struct file {int dummy; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (struct pxa_camera_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int ) ;
 struct pxa_camera_format_xlate* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct pxa_camera_dev*,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int VAR_4 ;
 int FUNC_7 (struct v4l2_mbus_framefmt*,struct v4l2_pix_format*,int ) ;
 int FUNC_8 (struct v4l2_pix_format*,struct v4l2_mbus_framefmt*) ;
 int FUNC_9 (int *,int,int,int,int *,int,int,int ,int) ;
 struct pxa_camera_dev* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_5, void *VAR_6,
          struct v4l2_format *VAR_7)
{
 struct pxa_camera_dev *VAR_8 = FUNC_10(VAR_5);
 const struct pxa_camera_format_xlate *VAR_9;
 struct v4l2_pix_format *VAR_10 = &VAR_7->fmt.pix;
 struct v4l2_subdev_pad_config VAR_11;
 struct v4l2_subdev_format VAR_12 = {
  .which = VAR_2,
 };
 struct v4l2_mbus_framefmt *VAR_13 = &VAR_12.format;
 __u32 VAR_14 = VAR_10->pixelformat;
 int VAR_15;

 VAR_9 = FUNC_5(VAR_8->user_formats, VAR_14);
 if (!VAR_9) {
  FUNC_1(FUNC_2(VAR_8), "Format %x not found\n", VAR_14);
  return -VAR_0;
 }







 FUNC_9(&VAR_10->width, 48, 2048, 1,
         &VAR_10->height, 32, 2048, 0,
         VAR_14 == VAR_1 ? 4 : 0);

 FUNC_7(VAR_13, VAR_10, VAR_9->code);
 VAR_15 = FUNC_6(VAR_8, VAR_3, VAR_4, &VAR_11, &VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 FUNC_8(VAR_10, VAR_13);


 switch (VAR_13->field) {
 case 129:
 case 128:
  VAR_10->field = 128;
  break;
 default:

  FUNC_0(FUNC_2(VAR_8), "Field type %d unsupported.\n",
   VAR_13->field);
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_10->width, VAR_9->host_fmt);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_10->bytesperline = VAR_15;
 VAR_15 = FUNC_4(VAR_9->host_fmt, VAR_10->bytesperline,
      VAR_10->height);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_10->sizeimage = VAR_15;
 return 0;
}
