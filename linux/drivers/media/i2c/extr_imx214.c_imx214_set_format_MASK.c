
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int xfer_func; int ycbcr_enc; int quantization; int field; int code; int height; int width; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct imx214_mode {int height; int width; } ;
struct imx214 {int mutex; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct v4l2_rect* FUNC_4 (struct imx214*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_5 (struct imx214*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct imx214* FUNC_8 (struct v4l2_subdev*) ;
 struct imx214_mode* FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_6,
        struct v4l2_subdev_pad_config *VAR_7,
        struct v4l2_subdev_format *VAR_8)
{
 struct imx214 *VAR_9 = FUNC_8(VAR_6);
 struct v4l2_mbus_framefmt *VAR_10;
 struct v4l2_rect *VAR_11;
 const struct imx214_mode *VAR_12;

 FUNC_6(&VAR_9->mutex);

 VAR_11 = FUNC_4(VAR_9, VAR_7, VAR_8->pad, VAR_8->which);

 VAR_12 = FUNC_9(VAR_4,
          FUNC_0(VAR_4), VAR_5, VAR_3,
          VAR_8->format.width,
          VAR_8->format.height);

 VAR_11->width = VAR_12->width;
 VAR_11->height = VAR_12->height;

 VAR_10 = FUNC_5(VAR_9, VAR_7, VAR_8->pad,
        VAR_8->which);
 VAR_10->width = VAR_11->width;
 VAR_10->height = VAR_11->height;
 VAR_10->code = VAR_0;
 VAR_10->field = VAR_2;
 VAR_10->colorspace = VAR_1;
 VAR_10->ycbcr_enc = FUNC_3(VAR_10->colorspace);
 VAR_10->quantization = FUNC_1(1,
    VAR_10->colorspace, VAR_10->ycbcr_enc);
 VAR_10->xfer_func = FUNC_2(VAR_10->colorspace);

 VAR_8->format = *VAR_10;

 FUNC_7(&VAR_9->mutex);

 return 0;
}
