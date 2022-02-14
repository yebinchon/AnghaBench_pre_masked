
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {unsigned int width; unsigned int height; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_subdev_selection {struct v4l2_rect r; int target; int which; } ;
struct v4l2_pix_format {unsigned int width; unsigned int height; } ;
struct TYPE_2__ {int source; } ;
struct stm32_dcmi {unsigned int num_of_sd_framesizes; struct dcmi_framesize* sd_framesizes; TYPE_1__ entity; } ;
struct dcmi_framesize {unsigned int width; unsigned int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stm32_dcmi*,struct v4l2_pix_format*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_selection*) ;

__attribute__((used)) static int FUNC_2(struct stm32_dcmi *VAR_5,
      struct v4l2_rect *VAR_6)
{
 struct v4l2_subdev_selection VAR_7 = {
  .which = VAR_2,
  .target = VAR_1,
 };
 unsigned int VAR_8, VAR_9, VAR_10;
 struct v4l2_pix_format VAR_11;
 unsigned int VAR_12;
 int VAR_13;




 VAR_13 = FUNC_1(VAR_5->entity.source, VAR_4, VAR_3,
          ((void*)0), &VAR_7);
 if (!VAR_13)
  *VAR_6 = VAR_7.r;
 if (VAR_13 != -VAR_0)
  return VAR_13;






 VAR_8 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_5->num_of_sd_framesizes; VAR_12++) {
  struct dcmi_framesize *VAR_14 = &VAR_5->sd_framesizes[VAR_12];
  unsigned int VAR_15 = VAR_14->width * VAR_14->height;

  if (VAR_15 > VAR_10) {
   VAR_10 = VAR_15;
   VAR_8 = VAR_14->width;
   VAR_9 = VAR_14->height;
  }
 }
 if (VAR_10 > 0) {
  VAR_6->top = 0;
  VAR_6->left = 0;
  VAR_6->width = VAR_8;
  VAR_6->height = VAR_9;
  return 0;
 }





 VAR_13 = FUNC_0(VAR_5, &VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_6->top = 0;
 VAR_6->left = 0;
 VAR_6->width = VAR_11.width;
 VAR_6->height = VAR_11.height;

 return 0;
}
