
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cobalt_card {int sc; } ;
struct cobalt_stream {struct snd_cobalt_card* alsa; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct cobalt_stream *VAR_0)
{
 struct snd_cobalt_card *VAR_1 = VAR_0->alsa;

 if (VAR_1)
  FUNC_0(VAR_1->sc);
 VAR_0->alsa = ((void*)0);
}
