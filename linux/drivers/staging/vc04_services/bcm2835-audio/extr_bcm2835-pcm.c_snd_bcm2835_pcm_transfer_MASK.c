
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; struct bcm2835_alsa_stream* private_data; } ;
struct snd_pcm_indirect {scalar_t__ sw_data; } ;
struct bcm2835_alsa_stream {int dummy; } ;


 int FUNC_0 (struct bcm2835_alsa_stream*,size_t,void*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
 struct snd_pcm_indirect *VAR_1, size_t VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_0->runtime;
 struct bcm2835_alsa_stream *VAR_4 = VAR_3->private_data;
 void *VAR_5 = (void *) (VAR_0->runtime->dma_area + VAR_1->sw_data);

 FUNC_0(VAR_4, VAR_2, VAR_5);
}
