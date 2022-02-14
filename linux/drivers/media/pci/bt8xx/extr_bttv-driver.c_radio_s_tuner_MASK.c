
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_tuner const*) ;
 int FUNC_1 (struct bttv*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     const struct v4l2_tuner *VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;

 if (0 != VAR_5->index)
  return -VAR_0;

 FUNC_1(VAR_7);
 FUNC_0(VAR_7, VAR_2, VAR_1, VAR_5);
 return 0;
}
