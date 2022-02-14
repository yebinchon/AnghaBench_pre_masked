
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {int snd_trigger; int snd_stream; } ;
struct snd_pcm_substream {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct usbtv* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct usbtv *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_0(&VAR_1->snd_stream)) {
  FUNC_1(&VAR_1->snd_stream, 0);
  FUNC_2(&VAR_1->snd_trigger);
 }

 return 0;
}
