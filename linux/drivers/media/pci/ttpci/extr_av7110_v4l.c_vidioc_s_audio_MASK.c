
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ index; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {int current_input; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, const struct v4l2_audio *VAR_3)
{
 struct saa7146_dev *VAR_4 = ((struct saa7146_fh *)VAR_2)->dev;
 struct av7110 *VAR_5 = (struct av7110 *)VAR_4->ext_priv;

 FUNC_0(2, "VIDIOC_S_AUDIO: %d\n", VAR_3->index);
 if (VAR_5->current_input >= 2)
  return -VAR_0;
 return VAR_3->index ? -VAR_0 : 0;
}
