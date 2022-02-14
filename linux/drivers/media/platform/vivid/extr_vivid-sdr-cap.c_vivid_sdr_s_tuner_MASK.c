
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int index; } ;
struct file {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct file *VAR_1, void *VAR_2, const struct v4l2_tuner *VAR_3)
{
 if (VAR_3->index > 1)
  return -VAR_0;
 return 0;
}
