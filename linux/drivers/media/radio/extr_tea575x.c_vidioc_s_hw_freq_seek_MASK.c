
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_hw_freq_seek {int dummy; } ;
struct snd_tea575x {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,struct snd_tea575x*,struct v4l2_hw_freq_seek const*) ;
 struct snd_tea575x* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
     const struct v4l2_hw_freq_seek *VAR_2)
{
 struct snd_tea575x *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_3, VAR_2);
}
