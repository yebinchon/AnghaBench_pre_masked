
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int slock; int hwptr_done_capture; } ;
struct cx231xx {TYPE_1__ adev; } ;
typedef int snd_pcm_uframes_t ;


 struct cx231xx* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream
           *VAR_0)
{
 struct cx231xx *VAR_1;
 unsigned long VAR_2;
 snd_pcm_uframes_t VAR_3;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->adev.slock, VAR_2);
 VAR_3 = VAR_1->adev.hwptr_done_capture;
 FUNC_2(&VAR_1->adev.slock, VAR_2);

 return VAR_3;
}
