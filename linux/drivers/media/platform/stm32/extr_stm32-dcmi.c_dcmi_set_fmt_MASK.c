
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {char* code; int height; int width; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int height; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct dcmi_framesize {int height; int width; } ;
struct stm32_dcmi {int do_crop; struct dcmi_framesize sd_framesize; struct dcmi_format const* sd_format; struct v4l2_format fmt; int dev; } ;
struct dcmi_format {int mbus_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stm32_dcmi*,int *,struct v4l2_subdev_format*) ;
 int FUNC_1 (struct stm32_dcmi*,struct v4l2_format*,struct dcmi_format const**,struct dcmi_framesize*) ;
 int FUNC_2 (int ,char*,char*,int ,int ) ;
 int FUNC_3 (struct v4l2_mbus_framefmt*,struct v4l2_pix_format*,int ) ;

__attribute__((used)) static int FUNC_4(struct stm32_dcmi *VAR_2, struct v4l2_format *VAR_3)
{
 struct v4l2_subdev_format VAR_4 = {
  .which = VAR_1,
 };
 const struct dcmi_format *VAR_5;
 struct dcmi_framesize VAR_6;
 struct v4l2_mbus_framefmt *VAR_7 = &VAR_4.format;
 struct v4l2_pix_format *VAR_8 = &VAR_3->fmt.pix;
 int VAR_9;







 VAR_9 = FUNC_1(VAR_2, VAR_3, &VAR_5, &VAR_6);
 if (VAR_9)
  return VAR_9;


 if (VAR_8->pixelformat == VAR_0)
  VAR_2->do_crop = 0;


 FUNC_3(VAR_7, VAR_8,
         VAR_5->mbus_code);
 VAR_7->width = VAR_6.width;
 VAR_7->height = VAR_6.height;

 VAR_9 = FUNC_0(VAR_2, ((void*)0), &VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_2->dev, "Sensor format set to 0x%x %ux%u\n",
  VAR_7->code, VAR_7->width, VAR_7->height);
 FUNC_2(VAR_2->dev, "Buffer format set to %4.4s %ux%u\n",
  (char *)&VAR_8->pixelformat,
  VAR_8->width, VAR_8->height);

 VAR_2->fmt = *VAR_3;
 VAR_2->sd_format = VAR_5;
 VAR_2->sd_framesize = VAR_6;

 return 0;
}
