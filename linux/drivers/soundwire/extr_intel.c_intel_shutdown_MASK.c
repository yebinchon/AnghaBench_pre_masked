
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct sdw_cdns_dma_data {int dummy; } ;


 int FUNC_0 (struct sdw_cdns_dma_data*) ;
 struct sdw_cdns_dma_data* FUNC_1 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_soc_dai*,struct snd_pcm_substream*,int *) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_0,
      struct snd_soc_dai *VAR_1)
{
 struct sdw_cdns_dma_data *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return;

 FUNC_2(VAR_1, VAR_0, ((void*)0));
 FUNC_0(VAR_2);
}
