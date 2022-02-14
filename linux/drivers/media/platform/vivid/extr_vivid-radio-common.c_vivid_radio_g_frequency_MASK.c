
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; unsigned int frequency; } ;
struct file {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct file *VAR_1, const unsigned *VAR_2, struct v4l2_frequency *VAR_3)
{
 if (VAR_3->tuner != 0)
  return -VAR_0;
 VAR_3->frequency = *VAR_2;
 return 0;
}
