
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int step_height; int step_width; int max_height; int max_width; int min_height; int min_width; } ;
struct v4l2_frmsizeenum {scalar_t__ index; TYPE_1__ stepwise; int pixel_format; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
      struct v4l2_frmsizeenum *VAR_8)
{
 if (VAR_8->index != 0)
  return -VAR_0;

 if (!FUNC_0(VAR_8->pixel_format))
  return -VAR_0;

 VAR_8->type = VAR_5;
 VAR_8->stepwise.min_width = VAR_4;
 VAR_8->stepwise.min_height = VAR_3;
 VAR_8->stepwise.max_width = VAR_2;
 VAR_8->stepwise.max_height = VAR_1;

 FUNC_1(VAR_8->pixel_format,
        &VAR_8->stepwise.step_width,
        &VAR_8->stepwise.step_height);
 return 0;
}
