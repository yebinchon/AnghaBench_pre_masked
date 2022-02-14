
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct dsbr100_device {int curfreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsbr100_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency *VAR_4)
{
 struct dsbr100_device *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->tuner)
  return -VAR_0;
 VAR_4->type = VAR_1;
 VAR_4->frequency = VAR_5->curfreq;
 return 0;
}
