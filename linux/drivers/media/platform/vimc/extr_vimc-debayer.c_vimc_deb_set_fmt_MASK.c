
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct v4l2_mbus_framefmt {int ycbcr_enc; int xfer_func; int quantization; int colorspace; int code; int height; int width; } ;
struct vimc_deb_device {TYPE_1__ sd; int dev; int src_code; struct v4l2_mbus_framefmt sink_fmt; scalar_t__ src_frame; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct vimc_deb_device* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;
 int FUNC_4 (struct v4l2_mbus_framefmt*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
       struct v4l2_subdev_pad_config *VAR_3,
       struct v4l2_subdev_format *VAR_4)
{
 struct vimc_deb_device *VAR_5 = FUNC_2(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6;

 if (VAR_4->which == VAR_1) {

  if (VAR_5->src_frame)
   return -VAR_0;

  VAR_6 = &VAR_5->sink_fmt;
 } else {
  VAR_6 = FUNC_3(VAR_2, VAR_3, 0);
 }





 if (FUNC_0(VAR_4->pad)) {
  VAR_4->format = *VAR_6;

  VAR_4->format.code = VAR_5->src_code;
 } else {

  FUNC_4(&VAR_4->format);

  FUNC_1(VAR_5->dev, "%s: sink format update: "
   "old:%dx%d (0x%x, %d, %d, %d, %d) "
   "new:%dx%d (0x%x, %d, %d, %d, %d)\n", VAR_5->sd.name,

   VAR_6->width, VAR_6->height, VAR_6->code,
   VAR_6->colorspace, VAR_6->quantization,
   VAR_6->xfer_func, VAR_6->ycbcr_enc,

   VAR_4->format.width, VAR_4->format.height, VAR_4->format.code,
   VAR_4->format.colorspace, VAR_4->format.quantization,
   VAR_4->format.xfer_func, VAR_4->format.ycbcr_enc);

  *VAR_6 = VAR_4->format;
 }

 return 0;
}
