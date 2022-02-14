
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cobalt_card {scalar_t__ alsa_playback_cnt; struct cobalt_stream* s; } ;
struct cobalt_stream {int q; } ;


 struct snd_cobalt_card* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_cobalt_card *VAR_1 = FUNC_0(VAR_0);
 struct cobalt_stream *VAR_2 = VAR_1->s;

 VAR_1->alsa_playback_cnt--;
 if (VAR_1->alsa_playback_cnt == 0)
  FUNC_1(&VAR_2->q);
 return 0;
}
