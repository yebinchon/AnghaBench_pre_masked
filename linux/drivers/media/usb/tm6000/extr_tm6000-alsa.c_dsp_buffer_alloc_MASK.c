
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_tm6000_card {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int dma_bytes; scalar_t__ dma_area; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_tm6000_card* FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_tm6000_card *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(2, "Allocating buffer\n");

 if (VAR_1->runtime->dma_area) {
  if (VAR_1->runtime->dma_bytes > VAR_2)
   return 0;

  FUNC_1(VAR_1);
 }

 VAR_1->runtime->dma_area = FUNC_3(VAR_2);
 if (!VAR_1->runtime->dma_area)
  return -VAR_0;

 VAR_1->runtime->dma_bytes = VAR_2;

 return 0;
}
