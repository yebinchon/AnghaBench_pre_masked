
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; int stepwise; int type; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ fourcc; int stepwise; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5,
      struct v4l2_frmsizeenum *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6->index != 0)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  if (VAR_6->pixel_format != VAR_3[VAR_7].fourcc)
   continue;

  VAR_6->type = VAR_2;
  VAR_6->stepwise = VAR_3[VAR_7].stepwise;
  return 0;
 }

 return -VAR_0;
}
