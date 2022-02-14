
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_hw_freq_seek {int dummy; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int tea; scalar_t__ has_tea575x; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *,struct v4l2_hw_freq_seek const*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     const struct v4l2_hw_freq_seek *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_2;
 struct bttv *VAR_5 = VAR_4->btv;

 if (VAR_5->has_tea575x)
  return FUNC_0(VAR_1, &VAR_5->tea, VAR_3);

 return -VAR_0;
}
