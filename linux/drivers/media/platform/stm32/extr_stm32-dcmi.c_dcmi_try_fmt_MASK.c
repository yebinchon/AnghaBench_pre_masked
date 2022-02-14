
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_rect {int width; int height; void* left; void* top; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int width; int height; int bytesperline; int sizeimage; int field; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_4__ {int source; } ;
struct stm32_dcmi {int num_of_sd_formats; struct v4l2_rect crop; TYPE_2__ entity; scalar_t__ num_of_sd_framesizes; int do_crop; struct dcmi_format** sd_formats; } ;
struct dcmi_framesize {int width; int height; } ;
struct dcmi_format {scalar_t__ fourcc; int bpp; int mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct stm32_dcmi*,struct v4l2_pix_format*,struct dcmi_framesize*) ;
 void* FUNC_1 (int,int ,int ) ;
 void* FUNC_2 (int ,void*,int ,int) ;
 struct dcmi_format* FUNC_3 (struct stm32_dcmi*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_5 (struct v4l2_pix_format*,int *) ;
 int FUNC_6 (struct v4l2_rect*,struct v4l2_rect*) ;
 int FUNC_7 (int ,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_8(struct stm32_dcmi *VAR_11, struct v4l2_format *VAR_12,
   const struct dcmi_format **VAR_13,
   struct dcmi_framesize *VAR_14)
{
 const struct dcmi_format *VAR_15;
 struct dcmi_framesize VAR_16;
 struct v4l2_pix_format *VAR_17 = &VAR_12->fmt.pix;
 struct v4l2_subdev_pad_config VAR_18;
 struct v4l2_subdev_format VAR_19 = {
  .which = VAR_7,
 };
 bool VAR_20;
 int VAR_21;

 VAR_15 = FUNC_3(VAR_11, VAR_17->pixelformat);
 if (!VAR_15) {
  if (!VAR_11->num_of_sd_formats)
   return -VAR_0;

  VAR_15 = VAR_11->sd_formats[VAR_11->num_of_sd_formats - 1];
  VAR_17->pixelformat = VAR_15->fourcc;
 }


 VAR_17->width = FUNC_1(VAR_17->width, VAR_4, VAR_2);
 VAR_17->height = FUNC_1(VAR_17->height, VAR_3, VAR_1);


 VAR_20 = VAR_11->do_crop && (VAR_17->pixelformat != VAR_6);

 if (VAR_20 && VAR_11->num_of_sd_framesizes) {
  struct dcmi_framesize VAR_22;




  FUNC_0(VAR_11, VAR_17, &VAR_22);
  VAR_17->width = VAR_22.width;
  VAR_17->height = VAR_22.height;
 }

 FUNC_4(&VAR_19.format, VAR_17, VAR_15->mbus_code);
 VAR_21 = FUNC_7(VAR_11->entity.source, VAR_8, VAR_10,
          &VAR_18, &VAR_19);
 if (VAR_21 < 0)
  return VAR_21;


 FUNC_5(VAR_17, &VAR_19.format);


 VAR_16.width = VAR_17->width;
 VAR_16.height = VAR_17->height;

 if (VAR_20) {
  struct v4l2_rect VAR_23 = VAR_11->crop;
  struct v4l2_rect VAR_24;





  VAR_24.top = 0;
  VAR_24.left = 0;
  VAR_24.width = VAR_17->width;
  VAR_24.height = VAR_17->height;
  FUNC_6(&VAR_23, &VAR_24);
  VAR_23.top = FUNC_2(VAR_9, VAR_23.top, 0, VAR_17->height - VAR_23.height);
  VAR_23.left = FUNC_2(VAR_9, VAR_23.left, 0, VAR_17->width - VAR_23.width);
  VAR_11->crop = VAR_23;


  VAR_17->width = VAR_11->crop.width;
  VAR_17->height = VAR_11->crop.height;
 }

 VAR_17->field = VAR_5;
 VAR_17->bytesperline = VAR_17->width * VAR_15->bpp;
 VAR_17->sizeimage = VAR_17->bytesperline * VAR_17->height;

 if (VAR_13)
  *VAR_13 = VAR_15;
 if (VAR_14)
  *VAR_14 = VAR_16;

 return 0;
}
