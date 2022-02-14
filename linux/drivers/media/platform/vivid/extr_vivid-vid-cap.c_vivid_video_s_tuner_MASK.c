
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {scalar_t__ tv_audmode; } ;
struct v4l2_tuner {scalar_t__ index; scalar_t__ audmode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_2, void *VAR_3, const struct v4l2_tuner *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->index != 0)
  return -VAR_0;
 if (VAR_4->audmode > VAR_1)
  return -VAR_0;
 VAR_5->tv_audmode = VAR_4->audmode;
 return 0;
}
