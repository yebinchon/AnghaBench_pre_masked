
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {int tuner; size_t index; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct v4l2_frequency_band*) ;
 int VAR_0 ;
 struct v4l2_frequency_band* VAR_1 ;
 struct v4l2_frequency_band* VAR_2 ;

int FUNC_1(struct file *VAR_3, void *VAR_4,
  struct v4l2_frequency_band *VAR_5)
{
 switch (VAR_5->tuner) {
 case 0:
  if (VAR_5->index >= FUNC_0(VAR_1))
   return -VAR_0;
  *VAR_5 = VAR_1[VAR_5->index];
  return 0;
 case 1:
  if (VAR_5->index >= FUNC_0(VAR_2))
   return -VAR_0;
  *VAR_5 = VAR_2[VAR_5->index];
  return 0;
 default:
  return -VAR_0;
 }
}
