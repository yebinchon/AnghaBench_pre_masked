
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,struct v4l2_frequency const*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     const struct v4l2_frequency *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_2;
 struct bttv *VAR_5 = VAR_4->btv;

 if (VAR_3->tuner)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_3);
 return 0;
}
