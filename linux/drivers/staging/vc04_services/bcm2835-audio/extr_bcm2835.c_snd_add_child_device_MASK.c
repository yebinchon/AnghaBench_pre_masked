
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_card {int longname; int shortname; int driver; struct bcm2835_chip* private_data; } ;
struct device {int dummy; } ;
struct bcm2835_chip {int vchi_ctx; int audio_mutex; struct device* dev; struct snd_card* card; } ;
struct TYPE_2__ {int name; } ;
struct bcm2835_audio_driver {int (* newpcm ) (struct bcm2835_chip*,int ,int ,int ) ;int (* newctl ) (struct bcm2835_chip*) ;int route; int shortname; int longname; TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,struct bcm2835_chip*) ;
 int FUNC_3 (struct device*,int ,struct snd_card*) ;
 int FUNC_4 (struct device*,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_card*) ;
 int FUNC_7 (struct device*,int,int *,int ,int,struct snd_card**) ;
 int FUNC_8 (struct snd_card*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct bcm2835_chip*,int ,int ,int ) ;
 int FUNC_11 (struct bcm2835_chip*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_4,
    struct bcm2835_audio_driver *VAR_5,
    u32 VAR_6)
{
 struct bcm2835_chip *VAR_7;
 struct snd_card *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_4, -1, ((void*)0), VAR_1, sizeof(*VAR_7), &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_4, "Failed to create card");
  return VAR_9;
 }

 VAR_7 = VAR_8->private_data;
 VAR_7->card = VAR_8;
 VAR_7->dev = VAR_4;
 FUNC_5(&VAR_7->audio_mutex);

 VAR_7->vchi_ctx = FUNC_4(VAR_4,
         VAR_3, ((void*)0), ((void*)0));
 if (!VAR_7->vchi_ctx) {
  VAR_9 = -VAR_0;
  goto error;
 }

 FUNC_9(VAR_8->driver, VAR_5->driver.name);
 FUNC_9(VAR_8->shortname, VAR_5->shortname);
 FUNC_9(VAR_8->longname, VAR_5->longname);

 VAR_9 = VAR_5->newpcm(VAR_7, VAR_5->shortname,
  VAR_5->route,
  VAR_6);
 if (VAR_9) {
  FUNC_0(VAR_4, "Failed to create pcm, error %d\n", VAR_9);
  goto error;
 }

 VAR_9 = VAR_5->newctl(VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_4, "Failed to create controls, error %d\n", VAR_9);
  goto error;
 }

 VAR_9 = FUNC_8(VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_4, "Failed to register card, error %d\n", VAR_9);
  goto error;
 }

 FUNC_2(VAR_4, VAR_7);

 VAR_9 = FUNC_3(VAR_4, VAR_2, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_4, "Failed to add devm action, err %d\n", VAR_9);
  goto error;
 }

 FUNC_1(VAR_4, "card created with %d channels\n", VAR_6);
 return 0;

 error:
 FUNC_6(VAR_8);
 return VAR_9;
}
