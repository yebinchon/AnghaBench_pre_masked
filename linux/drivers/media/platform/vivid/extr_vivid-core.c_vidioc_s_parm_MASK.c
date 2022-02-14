
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_streamparm {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_streamparm *VAR_4)
{
 struct video_device *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->vfl_dir == VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}
