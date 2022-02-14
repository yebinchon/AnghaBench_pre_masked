
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct bcm2835_alsa_stream* private_data; } ;
struct bcm2835_chip {int opened; int audio_mutex; } ;
struct bcm2835_alsa_stream {size_t idx; TYPE_1__* chip; scalar_t__ buffer_size; scalar_t__ period_size; } ;
struct TYPE_2__ {int ** alsa_stream; } ;


 int FUNC_0 (struct bcm2835_alsa_stream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bcm2835_chip* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct bcm2835_alsa_stream *VAR_1;
 struct snd_pcm_runtime *VAR_2;
 struct bcm2835_chip *VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 FUNC_1(&VAR_3->audio_mutex);
 VAR_2 = VAR_0->runtime;
 VAR_1 = VAR_2->private_data;

 VAR_1->period_size = 0;
 VAR_1->buffer_size = 0;

 FUNC_0(VAR_1);
 VAR_1->chip->alsa_stream[VAR_1->idx] = ((void*)0);





 VAR_3->opened &= ~(1 << VAR_0->number);

 FUNC_2(&VAR_3->audio_mutex);

 return 0;
}
