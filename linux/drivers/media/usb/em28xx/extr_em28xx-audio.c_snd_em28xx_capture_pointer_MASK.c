
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int slock; int hwptr_done_capture; } ;
struct em28xx {TYPE_1__ adev; scalar_t__ disconnected; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 struct em28xx* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream
          *VAR_1)
{
 unsigned long VAR_2;
 struct em28xx *VAR_3;
 snd_pcm_uframes_t VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3->disconnected)
  return VAR_0;

 FUNC_1(&VAR_3->adev.slock, VAR_2);
 VAR_4 = VAR_3->adev.hwptr_done_capture;
 FUNC_2(&VAR_3->adev.slock, VAR_2);

 return VAR_4;
}
