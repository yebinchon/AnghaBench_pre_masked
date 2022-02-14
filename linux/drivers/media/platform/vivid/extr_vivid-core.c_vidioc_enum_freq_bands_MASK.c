
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_frequency_band {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct video_device* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_frequency_band*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_frequency_band*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_frequency_band *VAR_5)
{
 struct video_device *VAR_6 = FUNC_0(VAR_3);

 if (VAR_6->vfl_type == VAR_1)
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6->vfl_type == VAR_2)
  return FUNC_2(VAR_3, VAR_4, VAR_5);
 return -VAR_0;
}
