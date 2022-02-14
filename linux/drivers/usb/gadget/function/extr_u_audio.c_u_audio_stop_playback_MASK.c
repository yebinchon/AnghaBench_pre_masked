
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uac_chip {int p_prm; } ;
struct g_audio {int in_ep; struct snd_uac_chip* uac; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct g_audio *VAR_0)
{
 struct snd_uac_chip *VAR_1 = VAR_0->uac;

 FUNC_0(&VAR_1->p_prm, VAR_0->in_ep);
}
