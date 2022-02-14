
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int signal; int type; int name; int capability; int rxsubchans; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int (* audio_mode_gpio ) (struct bttv*,struct v4l2_tuner*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bttv*,int ,int ,struct v4l2_tuner*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct bttv*,struct v4l2_tuner*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8, void *VAR_9,
    struct v4l2_tuner *VAR_10)
{
 struct bttv_fh *VAR_11 = VAR_9;
 struct bttv *VAR_12 = VAR_11->btv;

 if (0 != VAR_10->index)
  return -VAR_2;

 VAR_10->rxsubchans = VAR_5;
 VAR_10->capability = VAR_4;
 FUNC_1(VAR_12, VAR_7, VAR_6, VAR_10);
 FUNC_2(VAR_10->name, "Television", sizeof(VAR_10->name));
 VAR_10->type = VAR_3;
 if (FUNC_0(VAR_0)&VAR_1)
  VAR_10->signal = 0xffff;

 if (VAR_12->audio_mode_gpio)
  VAR_12->audio_mode_gpio(VAR_12, VAR_10, 0);

 return 0;
}
