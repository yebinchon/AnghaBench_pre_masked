
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int channels; unsigned int samplerate; unsigned int bps; } ;
struct vc_audio_msg {TYPE_1__ config; int type; } ;
struct bcm2835_alsa_stream {int instance; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vc_audio_msg*,int) ;
 int FUNC_1 (struct bcm2835_alsa_stream*) ;

int FUNC_2(struct bcm2835_alsa_stream *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct vc_audio_msg VAR_5 = {
   .type = VAR_0,
   .config.channels = VAR_2,
   .config.samplerate = VAR_3,
   .config.bps = VAR_4,
 };
 int VAR_6;


 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_1->instance, &VAR_5, 1);
}
