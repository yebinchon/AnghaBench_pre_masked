
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {scalar_t__ snd_period_pos; scalar_t__ snd_buffer_pos; } ;
struct snd_pcm_substream {int dummy; } ;


 struct usbtv* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct usbtv *VAR_1 = FUNC_0(VAR_0);

 VAR_1->snd_buffer_pos = 0;
 VAR_1->snd_period_pos = 0;

 return 0;
}
