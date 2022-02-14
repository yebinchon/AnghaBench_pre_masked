
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {size_t tv_audio_input; } ;
struct v4l2_audio {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct vivid_dev* FUNC_0 (struct file*) ;
 struct v4l2_audio* VAR_1 ;
 int FUNC_1 (struct vivid_dev*) ;

int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_audio *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_5))
  return -VAR_0;
 *VAR_4 = VAR_1[VAR_5->tv_audio_input];
 return 0;
}
