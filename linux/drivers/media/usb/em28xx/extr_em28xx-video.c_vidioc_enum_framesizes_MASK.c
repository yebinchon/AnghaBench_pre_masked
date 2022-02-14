
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int min_width; int min_height; unsigned int max_width; unsigned int max_height; int step_width; int step_height; } ;
struct TYPE_5__ {unsigned int width; unsigned int height; } ;
struct v4l2_frmsizeenum {int index; TYPE_3__ stepwise; int type; TYPE_2__ discrete; int pixel_format; } ;
struct file {int dummy; } ;
struct em28xx_fmt {int dummy; } ;
struct TYPE_4__ {scalar_t__ is_em2800; } ;
struct em28xx {TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 struct em28xx_fmt* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct em28xx*) ;
 unsigned int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*,int ,int ,int*,int*) ;
 struct em28xx* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_4, void *VAR_5,
      struct v4l2_frmsizeenum *VAR_6)
{
 struct em28xx *VAR_7 = FUNC_5(VAR_4);
 struct em28xx_fmt *VAR_8;
 unsigned int VAR_9 = FUNC_3(VAR_7);
 unsigned int VAR_10 = FUNC_2(VAR_7);

 VAR_8 = FUNC_1(VAR_6->pixel_format);
 if (!VAR_8) {
  FUNC_0("Fourcc format (%08x) invalid.\n",
    VAR_6->pixel_format);
  return -VAR_0;
 }

 if (VAR_7->board.is_em2800) {
  if (VAR_6->index > 1)
   return -VAR_0;
  VAR_6->type = VAR_2;
  VAR_6->discrete.width = VAR_9 / (1 + VAR_6->index);
  VAR_6->discrete.height = VAR_10 / (1 + VAR_6->index);
  return 0;
 }

 if (VAR_6->index != 0)
  return -VAR_0;


 VAR_6->type = VAR_3;
 FUNC_4(VAR_7, VAR_1, VAR_1,
        &VAR_6->stepwise.min_width, &VAR_6->stepwise.min_height);
 if (VAR_6->stepwise.min_width < 48)
  VAR_6->stepwise.min_width = 48;
 if (VAR_6->stepwise.min_height < 38)
  VAR_6->stepwise.min_height = 38;
 VAR_6->stepwise.max_width = VAR_9;
 VAR_6->stepwise.max_height = VAR_10;
 VAR_6->stepwise.step_width = 1;
 VAR_6->stepwise.step_height = 1;
 return 0;
}
