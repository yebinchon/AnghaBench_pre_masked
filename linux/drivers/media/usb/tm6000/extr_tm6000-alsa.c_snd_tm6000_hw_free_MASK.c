
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {int wq_trigger; int stream_started; } ;
struct snd_tm6000_card {struct tm6000_core* core; } ;
struct snd_pcm_substream {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 struct snd_tm6000_card* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_tm6000_card *VAR_1 = FUNC_4(VAR_0);
 struct tm6000_core *VAR_2 = VAR_1->core;

 if (FUNC_0(&VAR_2->stream_started) > 0) {
  FUNC_1(&VAR_2->stream_started, 0);
  FUNC_3(&VAR_2->wq_trigger);
 }

 FUNC_2(VAR_0);
 return 0;
}
