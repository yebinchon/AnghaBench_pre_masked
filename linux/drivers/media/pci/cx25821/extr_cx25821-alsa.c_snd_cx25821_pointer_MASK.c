
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int periods; } ;
struct cx25821_audio_dev {int count; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int *) ;
 struct cx25821_audio_dev* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream
          *VAR_0)
{
 struct cx25821_audio_dev *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 u16 VAR_3;

 VAR_3 = FUNC_0(&VAR_1->count);

 return VAR_2->period_size * (VAR_3 & (VAR_2->periods - 1));
}
