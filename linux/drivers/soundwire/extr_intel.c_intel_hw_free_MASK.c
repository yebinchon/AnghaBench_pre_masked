
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct sdw_cdns_dma_data {int port; TYPE_1__* stream; } ;
struct sdw_cdns {int bus; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct sdw_cdns_dma_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 struct sdw_cdns_dma_data* FUNC_4 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct sdw_cdns* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int
FUNC_6(struct snd_pcm_substream *VAR_1, struct snd_soc_dai *VAR_2)
{
 struct sdw_cdns *VAR_3 = FUNC_5(VAR_2);
 struct sdw_cdns_dma_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(&VAR_3->bus, VAR_4->stream);
 if (VAR_5 < 0)
  FUNC_0(VAR_2->dev, "remove master from stream %s failed: %d\n",
   VAR_4->stream->name, VAR_5);

 FUNC_1(VAR_4);
 FUNC_2(VAR_4->port);
 return VAR_5;
}
