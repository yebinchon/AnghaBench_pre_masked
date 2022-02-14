
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int type; int name; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int tea; scalar_t__ has_tea575x; int (* audio_mode_gpio ) (struct bttv*,struct v4l2_tuner*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_tuner*) ;
 int VAR_2 ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (int *,struct v4l2_tuner*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct bttv*,struct v4l2_tuner*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, struct v4l2_tuner *VAR_6)
{
 struct bttv_fh *VAR_7 = VAR_5;
 struct bttv *VAR_8 = VAR_7->btv;

 if (0 != VAR_6->index)
  return -VAR_0;
 FUNC_3(VAR_6->name, "Radio", sizeof(VAR_6->name));
 VAR_6->type = VAR_1;
 FUNC_1(VAR_8);

 FUNC_0(VAR_8, VAR_3, VAR_2, VAR_6);

 if (VAR_8->audio_mode_gpio)
  VAR_8->audio_mode_gpio(VAR_8, VAR_6, 0);

 if (VAR_8->has_tea575x)
  return FUNC_2(&VAR_8->tea, VAR_6);

 return 0;
}
