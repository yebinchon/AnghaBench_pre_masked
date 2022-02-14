
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct v4l2_frmsizeenum {scalar_t__ index; int pixel_format; TYPE_1__ discrete; int type; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int h; int w; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;





 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3,
  void *VAR_4, struct v4l2_frmsizeenum *VAR_5)
{
 if (VAR_5->index >= FUNC_0(VAR_2))
  return -VAR_0;
 switch (VAR_5->pixel_format) {
 case 132:
 case 131:
 case 129:
 case 128:
 case 130:
  VAR_5->type = VAR_1;
  VAR_5->discrete.width = VAR_2[VAR_5->index].w;
  VAR_5->discrete.height = VAR_2[VAR_5->index].h;
  return 0;
 default: return -VAR_0;
 }
}
