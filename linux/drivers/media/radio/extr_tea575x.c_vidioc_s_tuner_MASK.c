
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_tuner {scalar_t__ audmode; scalar_t__ index; } ;
struct snd_tea575x {scalar_t__ val; scalar_t__ band; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_tea575x*) ;
 struct snd_tea575x* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     const struct v4l2_tuner *VAR_6)
{
 struct snd_tea575x *VAR_7 = FUNC_1(VAR_4);
 u32 VAR_8 = VAR_7->val;

 if (VAR_6->index)
  return -VAR_1;
 VAR_7->val &= ~VAR_2;
 if (VAR_6->audmode == VAR_3)
  VAR_7->val |= VAR_2;

 if (VAR_7->band != VAR_0 && VAR_7->val != VAR_8)
  FUNC_0(VAR_7);

 return 0;
}
