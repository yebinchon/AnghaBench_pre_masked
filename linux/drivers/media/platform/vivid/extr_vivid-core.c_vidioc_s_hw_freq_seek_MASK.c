
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_hw_freq_seek {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_hw_freq_seek const*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, const struct v4l2_hw_freq_seek *VAR_4)
{
 struct video_device *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->vfl_type == VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}
