
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_frame_size_enum {unsigned int index; int max_height; int max_width; int code; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {struct v4l2_subdev* source; } ;
struct stm32_dcmi {unsigned int num_of_sd_framesizes; int dev; TYPE_3__* sd_framesizes; TYPE_2__* sd_format; TYPE_1__ entity; } ;
struct dcmi_framesize {int dummy; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {int mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (int ,unsigned int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_frame_size_enum*) ;

__attribute__((used)) static int FUNC_4(struct stm32_dcmi *VAR_5)
{
 unsigned int VAR_6 = 0;
 struct v4l2_subdev *VAR_7 = VAR_5->entity.source;
 struct v4l2_subdev_frame_size_enum VAR_8 = {
  .which = VAR_2,
  .code = VAR_5->sd_format->mbus_code,
 };
 unsigned int VAR_9;
 unsigned int VAR_10;


 while (!FUNC_3(VAR_7, VAR_4, VAR_3,
     ((void*)0), &VAR_8))
  VAR_8.index++;

 VAR_6 = VAR_8.index;
 if (!VAR_6)
  return 0;

 VAR_5->num_of_sd_framesizes = VAR_6;
 VAR_5->sd_framesizes = FUNC_2(VAR_5->dev, VAR_6,
        sizeof(struct dcmi_framesize),
        VAR_1);
 if (!VAR_5->sd_framesizes) {
  FUNC_1(VAR_5->dev, "Could not allocate memory\n");
  return -VAR_0;
 }


 FUNC_0(VAR_5->dev, "Sensor supports %u frame sizes:\n", VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_5->num_of_sd_framesizes; VAR_10++) {
  VAR_8.index = VAR_10;
  VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_3,
           ((void*)0), &VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_5->sd_framesizes[VAR_8.index].width = VAR_8.max_width;
  VAR_5->sd_framesizes[VAR_8.index].height = VAR_8.max_height;
  FUNC_0(VAR_5->dev, "%ux%u\n", VAR_8.max_width, VAR_8.max_height);
 }

 return 0;
}
