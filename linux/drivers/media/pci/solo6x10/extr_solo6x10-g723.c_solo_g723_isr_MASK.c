
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solo_snd_pcm {int on; TYPE_1__* snd_pcm; } ;
struct solo_dev {int on; TYPE_1__* snd_pcm; } ;
struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm_str {struct snd_pcm_substream* substream; } ;
struct TYPE_2__ {struct snd_pcm_str* streams; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 struct solo_snd_pcm* FUNC_1 (struct snd_pcm_substream*) ;

void FUNC_2(struct solo_dev *VAR_1)
{
 struct snd_pcm_str *VAR_2 =
  &VAR_1->snd_pcm->streams[VAR_0];
 struct snd_pcm_substream *VAR_3;
 struct solo_snd_pcm *VAR_4;

 for (VAR_3 = VAR_2->substream; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  if (FUNC_1(VAR_3) == ((void*)0))
   continue;


  if (FUNC_1(VAR_3) == VAR_1)
   continue;


  VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4->on)
   continue;

  FUNC_0(VAR_3);
 }
}
