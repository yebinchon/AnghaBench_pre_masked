
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int tv_freq; } ;
struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_frequency *VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->tuner != 0)
  return -VAR_0;
 VAR_3->frequency = VAR_4->tv_freq;
 return 0;
}
