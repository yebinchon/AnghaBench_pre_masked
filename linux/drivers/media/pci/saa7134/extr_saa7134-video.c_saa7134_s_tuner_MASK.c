
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct TYPE_2__ {int mode; } ;
struct saa7134_dev {TYPE_1__ thread; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (int) ;
 struct saa7134_dev* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_2, void *VAR_3,
     const struct v4l2_tuner *VAR_4)
{
 struct saa7134_dev *VAR_5 = FUNC_2(VAR_2);
 int VAR_6, VAR_7;

 if (0 != VAR_4->index)
  return -VAR_0;

 VAR_7 = VAR_5->thread.mode;
 if (VAR_1 == VAR_7) {
  VAR_6 = FUNC_0(VAR_5);
  VAR_7 = FUNC_1(VAR_6);
 }
 if (VAR_7 != VAR_4->audmode)
  VAR_5->thread.mode = VAR_4->audmode;

 return 0;
}
