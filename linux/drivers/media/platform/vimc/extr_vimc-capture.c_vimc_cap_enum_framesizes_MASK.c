
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vimc_pix_map {int dummy; } ;
struct TYPE_2__ {int step_width; int step_height; int max_height; int min_height; int max_width; int min_width; } ;
struct v4l2_frmsizeenum {TYPE_1__ stepwise; int type; int pixel_format; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vimc_pix_map* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6, void *VAR_7,
        struct v4l2_frmsizeenum *VAR_8)
{
 const struct vimc_pix_map *VAR_9;

 if (VAR_8->index)
  return -VAR_0;


 VAR_9 = FUNC_0(VAR_8->pixel_format);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->type = VAR_1;
 VAR_8->stepwise.min_width = VAR_5;
 VAR_8->stepwise.max_width = VAR_3;
 VAR_8->stepwise.min_height = VAR_4;
 VAR_8->stepwise.max_height = VAR_2;
 VAR_8->stepwise.step_width = 1;
 VAR_8->stepwise.step_height = 1;

 return 0;
}
