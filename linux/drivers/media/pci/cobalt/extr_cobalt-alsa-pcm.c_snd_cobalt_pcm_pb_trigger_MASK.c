
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cobalt_card {int alsa_pb_channel; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct snd_cobalt_card* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2,
         int VAR_3)
{
 struct snd_cobalt_card *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 129:
  if (VAR_4->alsa_pb_channel)
   return -VAR_0;
  VAR_4->alsa_pb_channel = 1;
  return 0;
 case 128:
  VAR_4->alsa_pb_channel = 0;
  return 0;
 default:
  return -VAR_1;
 }
}
