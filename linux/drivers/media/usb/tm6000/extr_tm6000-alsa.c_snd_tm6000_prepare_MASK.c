
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tm6000_card {scalar_t__ period_pos; scalar_t__ buf_pos; } ;
struct snd_pcm_substream {int dummy; } ;


 struct snd_tm6000_card* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_tm6000_card *VAR_1 = FUNC_0(VAR_0);

 VAR_1->buf_pos = 0;
 VAR_1->period_pos = 0;

 return 0;
}
