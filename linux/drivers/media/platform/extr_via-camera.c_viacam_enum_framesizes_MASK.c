
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int step_width; int step_height; int max_height; int max_width; int min_height; int min_width; } ;
struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; TYPE_1__ stepwise; int type; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ pixelformat; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_8, void *VAR_9,
  struct v4l2_frmsizeenum *VAR_10)
{
 unsigned int VAR_11;

 if (VAR_10->index != 0)
  return -VAR_0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  if (VAR_10->pixel_format == VAR_7[VAR_11].pixelformat)
   break;
 if (VAR_11 >= VAR_1)
  return -VAR_0;
 VAR_10->type = VAR_4;
 VAR_10->stepwise.min_width = VAR_3;
 VAR_10->stepwise.min_height = VAR_2;
 VAR_10->stepwise.max_width = VAR_6;
 VAR_10->stepwise.max_height = VAR_5;
 VAR_10->stepwise.step_width = VAR_10->stepwise.step_height = 1;
 return 0;
}
