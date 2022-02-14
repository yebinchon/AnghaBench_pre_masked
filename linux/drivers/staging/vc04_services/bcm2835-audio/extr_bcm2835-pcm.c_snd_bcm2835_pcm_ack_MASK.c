
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct bcm2835_alsa_stream* private_data; } ;
struct snd_pcm_indirect {int dummy; } ;
struct bcm2835_alsa_stream {struct snd_pcm_indirect pcm_indirect; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,struct snd_pcm_indirect*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct bcm2835_alsa_stream *VAR_3 = VAR_2->private_data;
 struct snd_pcm_indirect *VAR_4 = &VAR_3->pcm_indirect;

 return FUNC_0(VAR_1, VAR_4,
        VAR_0);
}
