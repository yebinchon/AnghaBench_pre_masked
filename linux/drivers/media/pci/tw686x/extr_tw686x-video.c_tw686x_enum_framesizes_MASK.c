
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_width; int min_width; int step_width; int max_height; int min_height; int step_height; } ;
struct v4l2_frmsizeenum {TYPE_1__ stepwise; int type; scalar_t__ index; } ;
struct tw686x_video_channel {int video_standard; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct tw686x_video_channel* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
      struct v4l2_frmsizeenum *VAR_5)
{
 struct tw686x_video_channel *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->index)
  return -VAR_0;
 VAR_5->type = VAR_2;
 VAR_5->stepwise.max_width = VAR_1;
 VAR_5->stepwise.min_width = VAR_5->stepwise.max_width / 2;
 VAR_5->stepwise.step_width = VAR_5->stepwise.min_width;
 VAR_5->stepwise.max_height = FUNC_0(VAR_6->video_standard);
 VAR_5->stepwise.min_height = VAR_5->stepwise.max_height / 2;
 VAR_5->stepwise.step_height = VAR_5->stepwise.min_height;
 return 0;
}
