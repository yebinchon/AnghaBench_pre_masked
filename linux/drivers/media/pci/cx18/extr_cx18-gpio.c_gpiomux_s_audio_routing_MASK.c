
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18 {TYPE_2__* card; } ;
struct TYPE_3__ {int tuner; int linein; int radio; int mask; } ;
struct TYPE_4__ {TYPE_1__ gpio_audio_input; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,int ,int) ;
 struct cx18* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
       u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct cx18 *VAR_5 = FUNC_1(VAR_1);
 u32 VAR_6;

 switch (VAR_2) {
 case 0:
  VAR_6 = VAR_5->card->gpio_audio_input.tuner;
  break;
 case 1:
  VAR_6 = VAR_5->card->gpio_audio_input.linein;
  break;
 case 2:
  VAR_6 = VAR_5->card->gpio_audio_input.radio;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(VAR_5, VAR_5->card->gpio_audio_input.mask, VAR_6);
 return 0;
}
