
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cx18_card {int slock; int hwptr_done_capture; } ;
typedef int snd_pcm_uframes_t ;


 struct snd_cx18_card* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static
snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 unsigned long VAR_1;
 snd_pcm_uframes_t VAR_2;
 struct snd_cx18_card *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->slock, VAR_1);
 VAR_2 = VAR_3->hwptr_done_capture;
 FUNC_2(&VAR_3->slock, VAR_1);

 return VAR_2;
}
