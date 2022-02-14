
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct ivtv {TYPE_2__* card; } ;
struct TYPE_3__ {int mask; int tuner; int linein; int radio; } ;
struct TYPE_4__ {TYPE_1__ gpio_audio_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ivtv* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
      u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ivtv *VAR_6 = FUNC_1(VAR_2);
 u16 VAR_7, VAR_8;

 if (VAR_3 > 2)
  return -VAR_0;
 VAR_7 = VAR_6->card->gpio_audio_input.mask;
 switch (VAR_3) {
 case 0:
  VAR_8 = VAR_6->card->gpio_audio_input.tuner;
  break;
 case 1:
  VAR_8 = VAR_6->card->gpio_audio_input.linein;
  break;
 case 2:
 default:
  VAR_8 = VAR_6->card->gpio_audio_input.radio;
  break;
 }
 if (VAR_7)
  FUNC_2((FUNC_0(VAR_1) & ~VAR_7) | (VAR_8 & VAR_7), VAR_1);
 return 0;
}
