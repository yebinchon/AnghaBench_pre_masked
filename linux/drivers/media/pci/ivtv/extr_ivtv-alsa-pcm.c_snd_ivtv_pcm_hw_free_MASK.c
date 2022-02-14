
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ivtv_card {int slock; } ;
struct TYPE_2__ {unsigned char* dma_area; } ;


 int FUNC_0 (char*) ;
 struct snd_ivtv_card* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_ivtv_card *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;
 unsigned char *VAR_3 = ((void*)0);

 FUNC_2(&VAR_1->slock, VAR_2);
 if (VAR_0->runtime->dma_area) {
  FUNC_0("freeing pcm capture region\n");
  VAR_3 = VAR_0->runtime->dma_area;
  VAR_0->runtime->dma_area = ((void*)0);
 }
 FUNC_3(&VAR_1->slock, VAR_2);
 FUNC_4(VAR_3);

 return 0;
}
