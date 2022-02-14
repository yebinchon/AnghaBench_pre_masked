
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_tm6000_card {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {scalar_t__ dma_bytes; int * dma_area; } ;


 int FUNC_0 (int,char*) ;
 struct snd_tm6000_card* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_tm6000_card *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(2, "Freeing buffer\n");

 FUNC_2(VAR_0->runtime->dma_area);
 VAR_0->runtime->dma_area = ((void*)0);
 VAR_0->runtime->dma_bytes = 0;
}
