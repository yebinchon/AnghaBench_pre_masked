
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; int type; } ;
struct snd_tea575x {int freq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_tea575x* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_frequency *VAR_4)
{
 struct snd_tea575x *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->tuner != 0)
  return -VAR_0;
 VAR_4->type = VAR_1;
 VAR_4->frequency = VAR_5->freq;
 return 0;
}
