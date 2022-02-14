
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int step_width; int step_height; int max_height; int min_height; int max_width; int min_width; } ;
struct v4l2_frmsizeenum {int pixel_format; TYPE_1__ stepwise; int type; scalar_t__ index; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6, void *VAR_7,
       struct v4l2_frmsizeenum *VAR_8)
{
 switch (VAR_8->pixel_format) {
 case 128:
  break;
 case 129:
  break;
 default:
  if (FUNC_0(VAR_8->pixel_format)->id == VAR_8->pixel_format)
   break;
  return -VAR_0;
 }

 if (VAR_8->index)
  return -VAR_0;

 VAR_8->type = VAR_5;

 VAR_8->stepwise.min_width = VAR_4;
 VAR_8->stepwise.max_width = VAR_2;
 VAR_8->stepwise.step_width = 8;
 VAR_8->stepwise.min_height = VAR_3;
 VAR_8->stepwise.max_height = VAR_1;
 VAR_8->stepwise.step_height = 8;

 return 0;
}
