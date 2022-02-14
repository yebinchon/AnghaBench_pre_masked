
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_dev {struct snd_card* snd_card; struct tw686x_audio_channel* audio_channels; struct pci_dev* pci_dev; } ;
struct tw686x_audio_channel {int ch; struct tw686x_dev* dev; int lock; } ;
struct snd_card {int longname; int shortname; int driver; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tw686x_dev*) ;
 char* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct tw686x_dev*,int ,int ) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,struct snd_card**) ;
 int FUNC_6 (struct snd_card*) ;
 int FUNC_7 (struct snd_card*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct tw686x_dev*,struct tw686x_audio_channel*) ;
 int FUNC_11 (struct tw686x_dev*,struct tw686x_audio_channel*) ;
 int FUNC_12 (struct tw686x_dev*) ;

int FUNC_13(struct tw686x_dev *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pci_dev;
 struct snd_card *VAR_6;
 int VAR_7, VAR_8;


 FUNC_3(VAR_4, VAR_0, FUNC_0(0));

 VAR_7 = FUNC_5(&VAR_5->dev, VAR_1,
      VAR_2,
      VAR_3, 0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->snd_card = VAR_6;
 FUNC_9(VAR_6->driver, "tw686x", sizeof(VAR_6->driver));
 FUNC_9(VAR_6->shortname, "tw686x", sizeof(VAR_6->shortname));
 FUNC_9(VAR_6->longname, FUNC_2(VAR_5), sizeof(VAR_6->longname));
 FUNC_7(VAR_6, &VAR_5->dev);

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_4); VAR_8++) {
  struct tw686x_audio_channel *VAR_9;

  VAR_9 = &VAR_4->audio_channels[VAR_8];
  FUNC_8(&VAR_9->lock);
  VAR_9->dev = VAR_4;
  VAR_9->ch = VAR_8;

  VAR_7 = FUNC_10(VAR_4, VAR_9);
  if (VAR_7 < 0)
   goto err_cleanup;
 }

 VAR_7 = FUNC_12(VAR_4);
 if (VAR_7 < 0)
  goto err_cleanup;

 VAR_7 = FUNC_6(VAR_6);
 if (!VAR_7)
  return 0;

err_cleanup:
 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_4); VAR_8++) {
  if (!VAR_4->audio_channels[VAR_8].dev)
   continue;
  FUNC_11(VAR_4, &VAR_4->audio_channels[VAR_8]);
 }
 FUNC_4(VAR_6);
 VAR_4->snd_card = ((void*)0);
 return VAR_7;
}
