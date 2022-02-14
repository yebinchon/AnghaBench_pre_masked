
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {size_t index; scalar_t__ tuner; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct v4l2_frequency_band*) ;
 int VAR_0 ;
 struct v4l2_frequency_band* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency_band *VAR_4)
{
 if (VAR_4->tuner)
  return -VAR_0;
 if (VAR_4->index >= FUNC_0(VAR_1))
  return -VAR_0;
 *VAR_4 = VAR_1[VAR_4->index];
 return 0;
}
