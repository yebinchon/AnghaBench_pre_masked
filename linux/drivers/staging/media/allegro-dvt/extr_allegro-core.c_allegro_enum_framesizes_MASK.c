
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int step_width; int step_height; int max_height; int min_height; int max_width; int min_width; } ;
struct v4l2_frmsizeenum {int pixel_format; TYPE_1__ stepwise; int type; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



__attribute__((used)) static int FUNC_0(struct file *VAR_6, void *VAR_7,
       struct v4l2_frmsizeenum *VAR_8)
{
 switch (VAR_8->pixel_format) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_4;
 }

 if (VAR_8->index)
  return -VAR_4;

 VAR_8->type = VAR_5;
 VAR_8->stepwise.min_width = VAR_3;
 VAR_8->stepwise.max_width = VAR_2;
 VAR_8->stepwise.step_width = 1;
 VAR_8->stepwise.min_height = VAR_1;
 VAR_8->stepwise.max_height = VAR_0;
 VAR_8->stepwise.step_height = 1;

 return 0;
}
