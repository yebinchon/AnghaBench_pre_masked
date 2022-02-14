
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int (* audio_mode_gpio ) (struct bttv*,struct v4l2_tuner*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_tuner const*) ;
 int VAR_1 ;
 int FUNC_1 (struct bttv*,struct v4l2_tuner*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     const struct v4l2_tuner *VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;

 if (VAR_5->index)
  return -VAR_0;

 FUNC_0(VAR_7, VAR_2, VAR_1, VAR_5);

 if (VAR_7->audio_mode_gpio) {
  struct v4l2_tuner VAR_8 = *VAR_5;

  VAR_7->audio_mode_gpio(VAR_7, &VAR_8, 1);
 }
 return 0;
}
