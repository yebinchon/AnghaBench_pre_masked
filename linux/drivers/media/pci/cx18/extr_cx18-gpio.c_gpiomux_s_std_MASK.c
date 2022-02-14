
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18 {size_t audio_input; TYPE_3__* card; } ;
struct TYPE_5__ {int mask; int tuner; int linein; } ;
struct TYPE_6__ {TYPE_2__ gpio_audio_input; TYPE_1__* audio_inputs; } ;
struct TYPE_4__ {int muxer_input; } ;


 int FUNC_0 (struct cx18*,int ,int ) ;
 struct cx18* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct cx18 *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;

 switch (VAR_2->card->audio_inputs[VAR_2->audio_input].muxer_input) {
 case 1:
  VAR_3 = VAR_2->card->gpio_audio_input.linein;
  break;
 case 0:
  VAR_3 = VAR_2->card->gpio_audio_input.tuner;
  break;
 default:





  VAR_3 = VAR_2->card->gpio_audio_input.tuner;
  break;
 }
 FUNC_0(VAR_2, VAR_2->card->gpio_audio_input.mask, VAR_3);
 return 0;
}
