
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* height; void* width; } ;
struct v4l2_frmsizeenum {unsigned int index; scalar_t__ pixel_format; TYPE_1__ discrete; int type; } ;
struct pwc_device {unsigned long image_mask; int type; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void*** VAR_6 ;
 struct pwc_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
      struct v4l2_frmsizeenum *VAR_9)
{
 struct pwc_device *VAR_10 = FUNC_2(VAR_7);
 unsigned int VAR_11 = 0, VAR_12 = VAR_9->index;

 if (VAR_9->pixel_format == VAR_5 ||
     (VAR_9->pixel_format == VAR_3 &&
   FUNC_0(VAR_10->type)) ||
     (VAR_9->pixel_format == VAR_4 &&
   FUNC_1(VAR_10->type))) {
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   if (!(VAR_10->image_mask & (1UL << VAR_11)))
    continue;
   if (!VAR_12--) {
    VAR_9->type = VAR_2;
    VAR_9->discrete.width = VAR_6[VAR_11][0];
    VAR_9->discrete.height = VAR_6[VAR_11][1];
    return 0;
   }
  }
 }
 return -VAR_0;
}
