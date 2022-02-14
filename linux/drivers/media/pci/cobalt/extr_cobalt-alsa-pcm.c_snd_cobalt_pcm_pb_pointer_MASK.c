
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_cobalt_card {size_t pb_pos; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int buffer_size; } ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 struct snd_cobalt_card* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static
snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_cobalt_card *VAR_1 = FUNC_1(VAR_0);
 size_t VAR_2;

 VAR_2 = VAR_1->pb_pos;

 return FUNC_0(VAR_0->runtime, VAR_2) %
        VAR_0->runtime->buffer_size;
}
