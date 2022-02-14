
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; int id; } ;
struct snd_pcm_substream {int stream; } ;
struct gbaudio_stream_params {int state; } ;
struct gbaudio_codec_info {int lock; int dev; int module_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct gbaudio_codec_info* FUNC_1 (int ) ;
 struct gbaudio_stream_params* FUNC_2 (struct gbaudio_codec_info*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct gbaudio_codec_info *VAR_5 = FUNC_1(VAR_4->dev);
 struct gbaudio_stream_params *VAR_6;

 FUNC_4(&VAR_5->lock);

 if (FUNC_3(&VAR_5->module_list)) {
  FUNC_0(VAR_5->dev, "No codec module available\n");
  FUNC_5(&VAR_5->lock);
  return -VAR_1;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_4->id, VAR_3->stream);
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "Failed to fetch dai_stream pointer\n");
  FUNC_5(&VAR_5->lock);
  return -VAR_0;
 }
 VAR_6->state = VAR_2;
 FUNC_5(&VAR_5->lock);

 FUNC_6(VAR_4->dev);

 return 0;
}
