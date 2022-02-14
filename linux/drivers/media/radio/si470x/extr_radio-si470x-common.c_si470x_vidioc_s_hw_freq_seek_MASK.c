
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_hw_freq_seek {scalar_t__ tuner; } ;
struct si470x_device {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct si470x_device*,struct v4l2_hw_freq_seek const*) ;
 struct si470x_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
  const struct v4l2_hw_freq_seek *VAR_5)
{
 struct si470x_device *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->tuner != 0)
  return -VAR_0;

 if (VAR_3->f_flags & VAR_2)
  return -VAR_1;

 return FUNC_0(VAR_6, VAR_5);
}
