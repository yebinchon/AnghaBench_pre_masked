
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct ivtv {TYPE_2__* card; } ;
struct TYPE_3__ {int mask; int mute; } ;
struct TYPE_4__ {TYPE_1__ gpio_audio_mute; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 struct ivtv* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_2 (struct v4l2_ctrl*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_2)
{
 struct v4l2_subdev *VAR_3 = FUNC_2(VAR_2);
 struct ivtv *VAR_4 = FUNC_1(VAR_3);
 u16 VAR_5, VAR_6;

 switch (VAR_2->id) {
 case 128:
  VAR_5 = VAR_4->card->gpio_audio_mute.mask;
  VAR_6 = VAR_2->val ? VAR_4->card->gpio_audio_mute.mute : 0;
  if (VAR_5)
   FUNC_3((FUNC_0(VAR_1) & ~VAR_5) |
     (VAR_6 & VAR_5), VAR_1);
  return 0;
 }
 return -VAR_0;
}
