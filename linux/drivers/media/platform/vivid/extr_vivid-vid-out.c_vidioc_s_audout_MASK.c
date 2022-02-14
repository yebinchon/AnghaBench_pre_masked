
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {scalar_t__ tv_audio_output; } ;
struct v4l2_audioout {scalar_t__ index; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int VAR_1 ;
 int FUNC_2 (struct vivid_dev*) ;

int FUNC_3(struct file *VAR_2, void *VAR_3, const struct v4l2_audioout *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);

 if (!FUNC_2(VAR_5))
  return -VAR_0;
 if (VAR_4->index >= FUNC_0(VAR_1))
  return -VAR_0;
 VAR_5->tv_audio_output = VAR_4->index;
 return 0;
}
