
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; TYPE_1__* private_data; } ;
struct TYPE_3__ {int card; } ;
typedef TYPE_1__ snd_card_saa7134_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ,int,struct snd_pcm**) ;
 int FUNC_1 (struct snd_pcm*,int ,int *) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(snd_card_saa7134_t *VAR_2, int VAR_3)
{
 struct snd_pcm *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_0(VAR_2->card, "SAA7134 PCM", VAR_3, 0, 1, &VAR_4)) < 0)
  return VAR_5;
 FUNC_1(VAR_4, VAR_0, &VAR_1);
 VAR_4->private_data = VAR_2;
 VAR_4->info_flags = 0;
 FUNC_2(VAR_4->name, "SAA7134 PCM", sizeof(VAR_4->name));
 return 0;
}
