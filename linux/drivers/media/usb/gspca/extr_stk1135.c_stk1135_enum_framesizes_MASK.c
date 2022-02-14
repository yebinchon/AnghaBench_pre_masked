
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_width; int min_height; int max_width; int max_height; int step_width; int step_height; } ;
struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; TYPE_1__ stepwise; int type; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_3,
   struct v4l2_frmsizeenum *VAR_4)
{
 if (VAR_4->index != 0 || VAR_4->pixel_format != VAR_2)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->stepwise.min_width = 32;
 VAR_4->stepwise.min_height = 32;
 VAR_4->stepwise.max_width = 1280;
 VAR_4->stepwise.max_height = 1024;
 VAR_4->stepwise.step_width = 2;
 VAR_4->stepwise.step_height = 2;

 return 0;
}
