
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {int dummy; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {size_t cur_audinput; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 struct v4l2_audio* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{
 struct saa7146_dev *VAR_4 = ((struct saa7146_fh *)VAR_2)->dev;
 struct mxb *VAR_5 = (struct mxb *)VAR_4->ext_priv;

 FUNC_0("VIDIOC_G_AUDIO\n");
 *VAR_3 = VAR_0[VAR_5->cur_audinput];
 return 0;
}
