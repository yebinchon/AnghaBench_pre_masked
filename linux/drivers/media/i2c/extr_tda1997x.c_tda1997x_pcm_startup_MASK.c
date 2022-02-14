
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda1997x_state {int audio_samplerate; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 struct tda1997x_state* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct tda1997x_state *VAR_3 = FUNC_3(VAR_2);
 struct snd_soc_component *VAR_4 = VAR_2->component;
 struct snd_pcm_runtime *VAR_5 = VAR_1->runtime;
 int VAR_6, VAR_7;

 VAR_6 = VAR_3->audio_samplerate;
 VAR_7 = FUNC_2(VAR_5, VAR_0,
        VAR_6, VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->dev, "failed to constrain samplerate to %dHz\n",
   VAR_6);
  return VAR_7;
 }
 FUNC_1(VAR_4->dev, "set samplerate constraint to %dHz\n", VAR_6);

 return 0;
}
