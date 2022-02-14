
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct snd_uac_chip* rbuf; struct snd_uac_chip* ureq; } ;
struct TYPE_3__ {struct snd_uac_chip* rbuf; struct snd_uac_chip* ureq; } ;
struct snd_uac_chip {TYPE_2__ c_prm; TYPE_1__ p_prm; struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct g_audio {struct snd_uac_chip* uac; } ;


 int FUNC_0 (struct snd_uac_chip*) ;
 int FUNC_1 (struct snd_card*) ;

void FUNC_2(struct g_audio *VAR_0)
{
 struct snd_uac_chip *VAR_1;
 struct snd_card *VAR_2;

 if (!VAR_0 || !VAR_0->uac)
  return;

 VAR_1 = VAR_0->uac;
 VAR_2 = VAR_1->card;
 if (VAR_2)
  FUNC_1(VAR_2);

 FUNC_0(VAR_1->p_prm.ureq);
 FUNC_0(VAR_1->c_prm.ureq);
 FUNC_0(VAR_1->p_prm.rbuf);
 FUNC_0(VAR_1->c_prm.rbuf);
 FUNC_0(VAR_1);
}
