
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cobalt_card {scalar_t__ pb_pos; int pb_count; int pb_size; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_cobalt_card* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_cobalt_card *VAR_1 = FUNC_2(VAR_0);

 VAR_1->pb_size = FUNC_0(VAR_0);
 VAR_1->pb_count = FUNC_1(VAR_0);
 VAR_1->pb_pos = 0;

 return 0;
}
