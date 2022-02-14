
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_camera {int dummy; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct via_camera*,int *,int *) ;
 struct via_camera* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
  struct v4l2_format *VAR_2)
{
 struct via_camera *VAR_3 = FUNC_1(VAR_0);
 struct v4l2_format VAR_4;

 return FUNC_0(VAR_3, &VAR_2->fmt.pix, &VAR_4.fmt.pix);
}
