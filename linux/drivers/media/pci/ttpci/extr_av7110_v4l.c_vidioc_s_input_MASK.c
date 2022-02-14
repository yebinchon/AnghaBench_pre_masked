
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct av7110 {unsigned int current_input; int analog_tuner_flags; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct saa7146_dev *VAR_4 = ((struct saa7146_fh *)VAR_2)->dev;
 struct av7110 *VAR_5 = (struct av7110 *)VAR_4->ext_priv;

 FUNC_1(2, "VIDIOC_S_INPUT: %d\n", VAR_3);

 if (!VAR_5->analog_tuner_flags)
  return VAR_3 ? -VAR_0 : 0;

 if (VAR_3 >= 4)
  return -VAR_0;

 VAR_5->current_input = VAR_3;
 return FUNC_0(VAR_2);
}
