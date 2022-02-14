
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {int width; int height; } ;
struct stm32_dcmi {unsigned int num_of_sd_framesizes; struct dcmi_framesize* sd_framesizes; } ;
struct dcmi_framesize {int width; int height; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct stm32_dcmi *VAR_1,
        struct v4l2_pix_format *VAR_2,
        struct dcmi_framesize *VAR_3)
{
 struct dcmi_framesize *VAR_4 = ((void*)0);
 unsigned int VAR_5;
 unsigned int VAR_6 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_of_sd_framesizes; VAR_5++) {
  struct dcmi_framesize *VAR_7 = &VAR_1->sd_framesizes[VAR_5];
  int VAR_8 = (VAR_7->width - VAR_2->width);
  int VAR_9 = (VAR_7->height - VAR_2->height);
  int VAR_10 = VAR_8 + VAR_9;

  if (VAR_8 >= 0 && VAR_9 >= 0 && VAR_10 < VAR_6) {
   VAR_6 = VAR_10;
   VAR_4 = VAR_7;
  }
 }
 if (!VAR_4)
  VAR_4 = &VAR_1->sd_framesizes[0];

 *VAR_3 = *VAR_4;
}
