
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int * dma_area; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 if (VAR_0->runtime->dma_area) {
  FUNC_0("freeing pcm capture region\n");
  FUNC_1(VAR_0->runtime->dma_area);
  VAR_0->runtime->dma_area = ((void*)0);
 }

 return 0;
}
