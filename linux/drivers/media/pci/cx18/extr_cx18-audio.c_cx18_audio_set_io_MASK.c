
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cx18_card_audio_input {int audio_input; scalar_t__ muxer_input; } ;
struct cx18 {size_t audio_input; TYPE_1__* card; int sd_extmux; int i_flags; } ;
struct TYPE_2__ {int hw_audio_ctrl; struct cx18_card_audio_input* audio_inputs; struct cx18_card_audio_input radio_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cx18*,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (struct cx18*,int,int ,int,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ) ;

int FUNC_5(struct cx18 *VAR_8)
{
 const struct cx18_card_audio_input *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;


 if (FUNC_3(VAR_5, &VAR_8->i_flags))
  VAR_9 = &VAR_8->card->radio_input;
 else
  VAR_9 = &VAR_8->card->audio_inputs[VAR_8->audio_input];


 FUNC_4(VAR_8->sd_extmux, VAR_6, VAR_7,
    (u32) VAR_9->muxer_input, 0, 0);

 VAR_12 = FUNC_0(VAR_8, VAR_8->card->hw_audio_ctrl,
          VAR_6, VAR_7, VAR_9->audio_input, 0, 0);
 if (VAR_12)
  return VAR_12;


 VAR_10 = FUNC_1(VAR_8, VAR_4);
 VAR_11 = VAR_10 & ~VAR_3;
 switch (VAR_9->audio_input) {
 case 129:
  VAR_11 |= VAR_1;
  break;
 case 128:
  VAR_11 |= VAR_2;
  break;
 default:
  VAR_11 |= VAR_0;
  break;
 }
 if (VAR_11 == VAR_10) {

  VAR_10 &= ~VAR_3;
  switch (VAR_9->audio_input) {
  case 129:
   VAR_10 |= VAR_0;
   break;
  case 128:
   VAR_10 |= VAR_0;
   break;
  default:
   VAR_10 |= VAR_1;
   break;
  }
  FUNC_2(VAR_8, VAR_10 | 0xb00, VAR_4,
          VAR_10, VAR_3);
 }
 FUNC_2(VAR_8, VAR_11 | 0xb00, VAR_4,
         VAR_11, VAR_3);
 return 0;
}
