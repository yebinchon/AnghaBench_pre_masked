
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int ctl_freq; } ;


 int VAR_0 ;

int FUNC_0(struct file *VAR_1, void *VAR_2,
         struct v4l2_frequency *VAR_3)
{
 struct cx231xx_fh *VAR_4 = VAR_2;
 struct cx231xx *VAR_5 = VAR_4->dev;

 if (VAR_3->tuner)
  return -VAR_0;

 VAR_3->frequency = VAR_5->ctl_freq;

 return 0;
}
