
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int volume; int dest; } ;
struct vc_audio_msg {TYPE_1__ control; int type; } ;
struct bcm2835_chip {int volume; int mute; int dest; } ;
struct bcm2835_alsa_stream {int instance; struct bcm2835_chip* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct vc_audio_msg*,int) ;

int FUNC_2(struct bcm2835_alsa_stream *VAR_2)
{
 struct bcm2835_chip *VAR_3 = VAR_2->chip;
 struct vc_audio_msg VAR_4 = {};

 VAR_4.type = VAR_1;
 VAR_4.control.dest = VAR_3->dest;
 if (!VAR_3->mute)
  VAR_4.control.volume = VAR_0;
 else
  VAR_4.control.volume = FUNC_0(VAR_3->volume);

 return FUNC_1(VAR_2->instance, &VAR_4, 1);
}
