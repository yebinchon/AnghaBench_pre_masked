
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct channel* private_data; } ;
struct snd_pcm_runtime {int hw; } ;
struct most_channel_config {scalar_t__ direction; } ;
struct channel {int pcm_hardware; int playback_task; int id; int iface; struct snd_pcm_substream* substream; struct most_channel_config* cfg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct channel*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_4)
{
 struct channel *VAR_5 = VAR_4->private_data;
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct most_channel_config *VAR_7 = VAR_5->cfg;

 VAR_5->substream = VAR_4;

 if (VAR_7->direction == VAR_1) {
  VAR_5->playback_task = FUNC_2(VAR_3, VAR_5,
           "most_audio_playback");
  if (FUNC_0(VAR_5->playback_task)) {
   FUNC_5("Couldn't start thread\n");
   return FUNC_1(VAR_5->playback_task);
  }
 }

 if (FUNC_4(VAR_5->iface, VAR_5->id, &VAR_2)) {
  FUNC_5("most_start_channel() failed!\n");
  if (VAR_7->direction == VAR_1)
   FUNC_3(VAR_5->playback_task);
  return -VAR_0;
 }

 VAR_6->hw = VAR_5->pcm_hardware;
 return 0;
}
