
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct sdw_cdns_dma_data* capture_dma_data; struct sdw_cdns_dma_data* playback_dma_data; } ;
struct sdw_cdns_dma_data {void* stream; int link_id; int * bus; int stream_type; } ;
struct sdw_cdns {int instance; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sdw_cdns_dma_data* FUNC_0 (int,int ) ;
 struct sdw_cdns* FUNC_1 (struct snd_soc_dai*) ;

int FUNC_2(struct snd_soc_dai *VAR_5,
   void *VAR_6, bool VAR_7, int VAR_8)
{
 struct sdw_cdns *VAR_9 = FUNC_1(VAR_5);
 struct sdw_cdns_dma_data *VAR_10;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 if (VAR_7)
  VAR_10->stream_type = VAR_2;
 else
  VAR_10->stream_type = VAR_3;

 VAR_10->bus = &VAR_9->bus;
 VAR_10->link_id = VAR_9->instance;

 VAR_10->stream = VAR_6;

 if (VAR_8 == VAR_4)
  VAR_5->playback_dma_data = VAR_10;
 else
  VAR_5->capture_dma_data = VAR_10;

 return 0;
}
