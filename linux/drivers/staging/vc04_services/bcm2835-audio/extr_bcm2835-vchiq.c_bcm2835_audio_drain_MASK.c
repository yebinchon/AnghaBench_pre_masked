
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int draining; } ;
struct vc_audio_msg {TYPE_1__ stop; int type; } ;
struct bcm2835_alsa_stream {int instance; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vc_audio_msg*,int) ;

int FUNC_1(struct bcm2835_alsa_stream *VAR_1)
{
 struct vc_audio_msg VAR_2 = {
  .type = VAR_0,
  .stop.draining = 1,
 };

 return FUNC_0(VAR_1->instance, &VAR_2, 0);
}
