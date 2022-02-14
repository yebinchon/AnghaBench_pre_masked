
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {scalar_t__ tuner; size_t index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct v4l2_frequency_band* VAR_2 ;

int FUNC_0(struct file *VAR_3, void *VAR_4, struct v4l2_frequency_band *VAR_5)
{
 if (VAR_5->tuner != 0)
  return -VAR_0;

 if (VAR_5->index >= VAR_1)
  return -VAR_0;

 *VAR_5 = VAR_2[VAR_5->index];
 return 0;
}
