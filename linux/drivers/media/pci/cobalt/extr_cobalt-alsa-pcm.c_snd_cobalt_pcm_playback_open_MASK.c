
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct cobalt_stream* private_data; int hw; } ;
struct snd_cobalt_card {int alsa_playback_cnt; struct snd_pcm_substream* playback_pcm_substream; struct cobalt_stream* s; } ;
struct TYPE_2__ {int name; } ;
struct cobalt_stream {TYPE_1__ vdev; int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 struct snd_cobalt_card* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,int ,struct cobalt_stream*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct snd_cobalt_card *VAR_4 = FUNC_1(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct cobalt_stream *VAR_6 = VAR_4->s;

 VAR_5->hw = VAR_2;
 FUNC_0(VAR_5, VAR_0);
 VAR_4->playback_pcm_substream = VAR_3;
 VAR_5->private_data = VAR_6;
 VAR_4->alsa_playback_cnt++;
 if (VAR_4->alsa_playback_cnt == 1) {
  int VAR_7;

  VAR_7 = FUNC_2(&VAR_6->q, VAR_1, VAR_6, VAR_6->vdev.name);
  if (VAR_7) {
   VAR_4->alsa_playback_cnt--;
   return VAR_7;
  }
 }

 return 0;
}
