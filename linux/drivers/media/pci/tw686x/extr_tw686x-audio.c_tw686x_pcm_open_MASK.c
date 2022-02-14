
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_dev {struct tw686x_audio_channel* audio_channels; } ;
struct tw686x_audio_channel {struct snd_pcm_substream* ss; } ;
struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 struct tw686x_dev* FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2)
{
 struct tw686x_dev *VAR_3 = FUNC_1(VAR_2);
 struct tw686x_audio_channel *VAR_4 = &VAR_3->audio_channels[VAR_2->number];
 struct snd_pcm_runtime *VAR_5 = VAR_2->runtime;
 int VAR_6;

 VAR_4->ss = VAR_2;
 VAR_5->hw = VAR_1;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
