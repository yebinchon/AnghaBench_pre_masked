
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {int index; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {size_t cur_input; scalar_t__ cur_audinput; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int audioset; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct mxb*) ;
 int FUNC_2 (struct mxb*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, const struct v4l2_audio *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct mxb *VAR_6 = (struct mxb *)VAR_5->ext_priv;

 FUNC_0("VIDIOC_S_AUDIO %d\n", VAR_4->index);
 if (VAR_1[VAR_6->cur_input].audioset & (1 << VAR_4->index)) {
  if (VAR_6->cur_audinput != VAR_4->index) {
   VAR_6->cur_audinput = VAR_4->index;
   FUNC_2(VAR_6, VAR_4->index);
   if (VAR_6->cur_audinput == 0)
    FUNC_1(VAR_6);
  }
  return 0;
 }
 return -VAR_0;
}
