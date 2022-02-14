
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct v4l2_frmivalenum {int index; int width; int height; TYPE_2__ discrete; int type; int pixel_format; } ;
struct go7007 {int sensor_framerate; TYPE_1__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int sensor_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct go7007*,int*,int*) ;
 int FUNC_1 (int ) ;
 struct go7007* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
          struct v4l2_frmivalenum *VAR_5)
{
 struct go7007 *VAR_6 = FUNC_2(VAR_3);
 int VAR_7, VAR_8;
 int VAR_9;

 if (VAR_5->index > 4)
  return -VAR_0;

 if (!FUNC_1(VAR_5->pixel_format))
  return -VAR_0;

 if (!(VAR_6->board_info->sensor_flags & VAR_1)) {
  FUNC_0(VAR_6, &VAR_7, &VAR_8);
  for (VAR_9 = 0; VAR_9 <= 2; VAR_9++)
   if (VAR_5->width == ((VAR_7 >> VAR_9) & ~0xf) &&
       VAR_5->height == ((VAR_8 >> VAR_9) & ~0xf))
    break;
  if (VAR_9 > 2)
   return -VAR_0;
 }
 VAR_5->type = VAR_2;
 VAR_5->discrete.numerator = 1001 * (VAR_5->index + 1);
 VAR_5->discrete.denominator = VAR_6->sensor_framerate;
 return 0;
}
