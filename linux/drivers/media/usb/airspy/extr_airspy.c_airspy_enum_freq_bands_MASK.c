
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

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
  struct v4l2_frequency_band *VAR_5)
{
 int VAR_6;

 if (VAR_5->tuner == 0) {
  if (VAR_5->index >= FUNC_0(VAR_1)) {
   VAR_6 = -VAR_0;
  } else {
   *VAR_5 = VAR_1[VAR_5->index];
   VAR_6 = 0;
  }
 } else if (VAR_5->tuner == 1) {
  if (VAR_5->index >= FUNC_0(VAR_2)) {
   VAR_6 = -VAR_0;
  } else {
   *VAR_5 = VAR_2[VAR_5->index];
   VAR_6 = 0;
  }
 } else {
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
