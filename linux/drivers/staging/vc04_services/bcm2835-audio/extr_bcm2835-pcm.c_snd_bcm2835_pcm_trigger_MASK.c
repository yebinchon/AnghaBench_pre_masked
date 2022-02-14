
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct bcm2835_alsa_stream* private_data; } ;
struct bcm2835_alsa_stream {int draining; } ;


 int VAR_0 ;



 int FUNC_0 (struct bcm2835_alsa_stream*) ;
 int FUNC_1 (struct bcm2835_alsa_stream*) ;
 int FUNC_2 (struct bcm2835_alsa_stream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct bcm2835_alsa_stream *VAR_4 = VAR_3->private_data;

 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_4);
 case 130:
  VAR_4->draining = 1;
  return FUNC_0(VAR_4);
 case 128:
  return FUNC_2(VAR_4);
 default:
  return -VAR_0;
 }
}
