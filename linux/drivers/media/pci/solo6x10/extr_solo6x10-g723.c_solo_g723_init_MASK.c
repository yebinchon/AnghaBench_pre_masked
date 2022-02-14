
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct solo_dev {TYPE_2__* pdev; int nr_chans; struct snd_card* snd_card; TYPE_1__* vfd; int snd_users; } ;
struct snd_kcontrol_new {int count; } ;
struct snd_device_ops {int dummy; } ;
struct snd_card {char* driver; char* shortname; char* mixername; int longname; } ;
struct TYPE_4__ {int irq; int dev; } ;
struct TYPE_3__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (int *,int ,char*,int ,int ,struct snd_card**) ;
 int FUNC_5 (struct snd_card*) ;
 int FUNC_6 (struct snd_card*,int ) ;
 int FUNC_7 (struct snd_kcontrol_new*,struct solo_dev*) ;
 int FUNC_8 (struct snd_card*,int ,struct solo_dev*,struct snd_device_ops*) ;
 struct snd_kcontrol_new VAR_4 ;
 int FUNC_9 (struct solo_dev*) ;
 int FUNC_10 (struct solo_dev*) ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*,char*,int) ;

int FUNC_13(struct solo_dev *VAR_5)
{
 static struct snd_device_ops VAR_6 = { };
 struct snd_card *VAR_7;
 struct snd_kcontrol_new VAR_8;
 char VAR_9[32];
 int VAR_10;

 FUNC_0(&VAR_5->snd_users, 0);


 FUNC_11(VAR_9, "Softlogic%d", VAR_5->vfd->num);

 VAR_10 = FUNC_4(&VAR_5->pdev->dev,
      VAR_0, VAR_9, VAR_3, 0,
      &VAR_5->snd_card);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7 = VAR_5->snd_card;

 FUNC_12(VAR_7->driver, VAR_2, sizeof(VAR_7->driver));
 FUNC_12(VAR_7->shortname, "SOLO-6x10 Audio", sizeof(VAR_7->shortname));
 FUNC_11(VAR_7->longname, "%s on %s IRQ %d", VAR_7->shortname,
  FUNC_2(VAR_5->pdev), VAR_5->pdev->irq);

 VAR_10 = FUNC_8(VAR_7, VAR_1, VAR_5, &VAR_6);
 if (VAR_10 < 0)
  goto snd_error;


 FUNC_12(VAR_7->mixername, "SOLO-6x10", sizeof(VAR_7->mixername));
 VAR_8 = VAR_4;
 VAR_8.count = VAR_5->nr_chans;

 VAR_10 = FUNC_6(VAR_7, FUNC_7(&VAR_8, VAR_5));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_10(VAR_5);
 if (VAR_10 < 0)
  goto snd_error;

 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10 < 0)
  goto snd_error;

 FUNC_9(VAR_5);

 FUNC_1(&VAR_5->pdev->dev, "Alsa sound card as %s\n", VAR_9);

 return 0;

snd_error:
 FUNC_3(VAR_7);
 return VAR_10;
}
