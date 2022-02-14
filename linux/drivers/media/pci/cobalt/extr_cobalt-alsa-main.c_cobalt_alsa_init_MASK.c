
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cobalt_card {int dummy; } ;
struct snd_card {int dummy; } ;
struct cobalt_stream {struct snd_cobalt_card* alsa; struct cobalt* cobalt; } ;
struct cobalt {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct snd_cobalt_card*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (int *,int ,int ,int ,int ,struct snd_card**) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (struct cobalt_stream*,struct snd_card*,struct snd_cobalt_card**) ;
 int FUNC_6 (struct snd_cobalt_card*) ;
 int FUNC_7 (struct snd_cobalt_card*) ;

int FUNC_8(struct cobalt_stream *VAR_3)
{
 struct cobalt *VAR_4 = VAR_3->cobalt;
 struct snd_card *VAR_5 = ((void*)0);
 struct snd_cobalt_card *VAR_6;
 int VAR_7;







 VAR_7 = FUNC_3(&VAR_4->pci_dev->dev, VAR_0,
      VAR_1, VAR_2, 0, &VAR_5);
 if (VAR_7) {
  FUNC_0("snd_card_new() failed with err %d\n", VAR_7);
  goto err_exit;
 }


 VAR_7 = FUNC_5(VAR_3, VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_0("snd_cobalt_card_create() failed with err %d\n",
      VAR_7);
  goto err_exit_free;
 }


 FUNC_6(VAR_6);

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7) {
  FUNC_0("snd_cobalt_pcm_create() failed with err %d\n",
      VAR_7);
  goto err_exit_free;
 }




 VAR_3->alsa = VAR_6;


 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  VAR_3->alsa = ((void*)0);
  FUNC_0("snd_card_register() failed with err %d\n", VAR_7);
  goto err_exit_free;
 }

 return 0;

err_exit_free:
 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_5);
 FUNC_1(VAR_6);
err_exit:
 return VAR_7;
}
