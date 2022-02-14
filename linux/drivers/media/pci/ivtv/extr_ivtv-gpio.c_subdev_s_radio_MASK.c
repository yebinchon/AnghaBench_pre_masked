
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct ivtv {TYPE_2__* card; } ;
struct TYPE_3__ {int mask; int radio; } ;
struct TYPE_4__ {TYPE_1__ gpio_audio_input; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ivtv* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1)
{
 struct ivtv *VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3, VAR_4;

 VAR_3 = VAR_2->card->gpio_audio_input.mask;
 VAR_4 = VAR_2->card->gpio_audio_input.radio;
 if (VAR_3)
  FUNC_2((FUNC_0(VAR_0) & ~VAR_3) | (VAR_4 & VAR_3), VAR_0);
 return 0;
}
