
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {unsigned int cur_input; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct saa7146_dev *VAR_3 = ((struct saa7146_fh *)VAR_1)->dev;
 struct mxb *VAR_4 = (struct mxb *)VAR_3->ext_priv;
 *VAR_2 = VAR_4->cur_input;

 FUNC_0("VIDIOC_G_INPUT %d\n", *VAR_2);
 return 0;
}
