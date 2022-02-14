
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_fract {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct video_device* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,void*,int,struct v4l2_fract*) ;
 int FUNC_2 (struct file*,void*,int,struct v4l2_fract*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
    int VAR_3, struct v4l2_fract *VAR_4)
{
 struct video_device *VAR_5 = FUNC_0(VAR_1);

 if (VAR_5->vfl_dir == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
