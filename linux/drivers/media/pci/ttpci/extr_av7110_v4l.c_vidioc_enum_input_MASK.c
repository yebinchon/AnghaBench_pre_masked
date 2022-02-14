
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {scalar_t__ analog_tuner_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int * VAR_1 ;
 int FUNC_1 (struct v4l2_input*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_input *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct av7110 *VAR_6 = (struct av7110 *)VAR_5->ext_priv;

 FUNC_0(2, "VIDIOC_ENUMINPUT: %d\n", VAR_4->index);

 if (VAR_6->analog_tuner_flags) {
  if (VAR_4->index >= 4)
   return -VAR_0;
 } else {
  if (VAR_4->index != 0)
   return -VAR_0;
 }

 FUNC_1(VAR_4, &VAR_1[VAR_4->index], sizeof(struct v4l2_input));

 return 0;
}
