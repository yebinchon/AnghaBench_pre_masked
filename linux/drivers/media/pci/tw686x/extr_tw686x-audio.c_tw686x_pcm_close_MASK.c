
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_dev {struct tw686x_audio_channel* audio_channels; } ;
struct tw686x_audio_channel {int * ss; } ;
struct snd_pcm_substream {size_t number; } ;


 struct tw686x_dev* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct tw686x_dev *VAR_1 = FUNC_0(VAR_0);
 struct tw686x_audio_channel *VAR_2 = &VAR_1->audio_channels[VAR_0->number];

 VAR_2->ss = ((void*)0);
 return 0;
}
