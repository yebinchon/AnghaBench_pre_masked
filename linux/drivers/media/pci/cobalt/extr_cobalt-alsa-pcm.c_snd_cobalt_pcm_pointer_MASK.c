
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cobalt_card {int hwptr_done_capture; } ;
typedef int snd_pcm_uframes_t ;


 struct snd_cobalt_card* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static
snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 snd_pcm_uframes_t VAR_1;
 struct snd_cobalt_card *VAR_2 = FUNC_0(VAR_0);

 VAR_1 = VAR_2->hwptr_done_capture;

 return VAR_1;
}
