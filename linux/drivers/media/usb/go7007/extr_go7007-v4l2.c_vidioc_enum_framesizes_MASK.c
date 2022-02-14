
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct v4l2_frmsizeenum {int index; TYPE_1__ discrete; int type; int pixel_format; } ;
struct go7007 {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct go7007*,int*,int*) ;
 int FUNC_1 (int ) ;
 struct go7007* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_frmsizeenum *VAR_4)
{
 struct go7007 *VAR_5 = FUNC_2(VAR_2);
 int VAR_6, VAR_7;

 if (VAR_4->index > 2)
  return -VAR_0;

 if (!FUNC_1(VAR_4->pixel_format))
  return -VAR_0;

 FUNC_0(VAR_5, &VAR_6, &VAR_7);
 VAR_4->type = VAR_1;
 VAR_4->discrete.width = (VAR_6 >> VAR_4->index) & ~0xf;
 VAR_4->discrete.height = (VAR_7 >> VAR_4->index) & ~0xf;
 return 0;
}
