
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct em28xx_audio {int wq_trigger; int stream_started; } ;
struct em28xx {struct em28xx_audio adev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 struct em28xx* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct em28xx *VAR_1 = FUNC_4(VAR_0);
 struct em28xx_audio *VAR_2 = &VAR_1->adev;

 FUNC_2("Stop capture, if needed\n");

 if (FUNC_0(&VAR_2->stream_started) > 0) {
  FUNC_1(&VAR_2->stream_started, 0);
  FUNC_3(&VAR_2->wq_trigger);
 }

 return 0;
}
