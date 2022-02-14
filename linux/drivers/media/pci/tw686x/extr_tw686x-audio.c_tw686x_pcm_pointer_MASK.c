
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_dev {struct tw686x_audio_channel* audio_channels; } ;
struct tw686x_audio_channel {int ptr; } ;
struct snd_pcm_substream {size_t number; int runtime; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,int ) ;
 struct tw686x_dev* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct tw686x_dev *VAR_1 = FUNC_1(VAR_0);
 struct tw686x_audio_channel *VAR_2 = &VAR_1->audio_channels[VAR_0->number];

 return FUNC_0(VAR_0->runtime, VAR_2->ptr);
}
