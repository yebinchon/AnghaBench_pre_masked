
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; int id; } ;
struct snd_pcm_substream {int stream; } ;
struct gbaudio_stream_params {int state; } ;
struct gbaudio_codec_info {int lock; int dev; int module_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct gbaudio_codec_info* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct gbaudio_stream_params* FUNC_3 (struct gbaudio_codec_info*,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct snd_pcm_substream *VAR_1,
        struct snd_soc_dai *VAR_2)
{
 struct gbaudio_codec_info *VAR_3 = FUNC_1(VAR_2->dev);
 struct gbaudio_stream_params *VAR_4;

 FUNC_5(&VAR_3->lock);

 if (FUNC_4(&VAR_3->module_list))
  FUNC_2(VAR_3->dev, "No codec module available during shutdown\n");

 VAR_4 = FUNC_3(VAR_3, VAR_2->id, VAR_1->stream);
 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "Failed to fetch dai_stream pointer\n");
  FUNC_6(&VAR_3->lock);
  return;
 }
 VAR_4->state = VAR_0;
 FUNC_6(&VAR_3->lock);
 FUNC_7(VAR_2->dev);
}
