
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_pix_format {int pixelformat; } ;
struct TYPE_2__ {int source; } ;
struct stm32_dcmi {int num_of_sd_formats; TYPE_1__ entity; struct dcmi_format** sd_formats; } ;
struct dcmi_format {int mbus_code; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dcmi_format* FUNC_0 (struct stm32_dcmi*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_2 (int ,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_3(struct stm32_dcmi *VAR_4,
      struct v4l2_pix_format *VAR_5)
{
 const struct dcmi_format *VAR_6;
 struct v4l2_subdev_format VAR_7 = {
  .which = VAR_1,
 };
 struct v4l2_subdev_pad_config VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_4, VAR_5->pixelformat);
 if (!VAR_6) {
  if (!VAR_4->num_of_sd_formats)
   return -VAR_0;

  VAR_6 = VAR_4->sd_formats[VAR_4->num_of_sd_formats - 1];
  VAR_5->pixelformat = VAR_6->fourcc;
 }

 FUNC_1(&VAR_7.format, VAR_5, VAR_6->mbus_code);
 VAR_9 = FUNC_2(VAR_4->entity.source, VAR_2, VAR_3,
          &VAR_8, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
