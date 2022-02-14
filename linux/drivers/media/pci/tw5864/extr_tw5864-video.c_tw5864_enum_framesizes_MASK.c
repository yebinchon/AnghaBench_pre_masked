
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; TYPE_1__ discrete; int type; } ;
struct tw5864_input {scalar_t__ std; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tw5864_input* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
      struct v4l2_frmsizeenum *VAR_6)
{
 struct tw5864_input *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6->index > 0)
  return -VAR_0;
 if (VAR_6->pixel_format != VAR_3)
  return -VAR_0;

 VAR_6->type = VAR_2;
 VAR_6->discrete.width = 704;
 VAR_6->discrete.height = VAR_7->std == VAR_1 ? 480 : 576;

 return 0;
}
