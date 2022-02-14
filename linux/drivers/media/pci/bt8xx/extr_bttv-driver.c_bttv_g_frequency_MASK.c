
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ type; int frequency; scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int tv_freq; int radio_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bttv*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_frequency *VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_3;
 struct bttv *VAR_6 = VAR_5->btv;

 if (VAR_4->tuner)
  return -VAR_0;

 if (VAR_4->type == VAR_1)
  FUNC_0(VAR_6);
 VAR_4->frequency = VAR_4->type == VAR_1 ?
    VAR_6->radio_freq : VAR_6->tv_freq;

 return 0;
}
