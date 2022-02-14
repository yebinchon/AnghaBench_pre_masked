
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbtv {struct snd_card* snd; TYPE_4__* dev; TYPE_3__* udev; int snd_stream; int snd_trigger; } ;
struct snd_pcm {struct usbtv* private_data; scalar_t__ info_flags; int name; } ;
struct snd_card {int longname; int shortname; int driver; } ;
struct TYPE_8__ {TYPE_1__* driver; } ;
struct TYPE_7__ {int devnum; TYPE_2__* bus; int dev; } ;
struct TYPE_6__ {int busnum; } ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (int *,int ,char*,int ,int ,struct snd_card**) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (struct snd_card*,TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_pcm*,int ,int ,int ,int ) ;
 int FUNC_8 (struct snd_card*,char*,int ,int ,int,struct snd_pcm**) ;
 int FUNC_9 (struct snd_pcm*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int,char*,int,int) ;
 int FUNC_11 (int ,char*,int) ;

int FUNC_12(struct usbtv *VAR_8)
{
 int VAR_9;
 struct snd_card *VAR_10;
 struct snd_pcm *VAR_11;

 FUNC_0(&VAR_8->snd_trigger, VAR_7);
 FUNC_1(&VAR_8->snd_stream, 0);

 VAR_9 = FUNC_3(&VAR_8->udev->dev, VAR_1, "usbtv",
  VAR_4, 0, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_11(VAR_10->driver, VAR_8->dev->driver->name, sizeof(VAR_10->driver));
 FUNC_11(VAR_10->shortname, "usbtv", sizeof(VAR_10->shortname));
 FUNC_10(VAR_10->longname, sizeof(VAR_10->longname),
  "USBTV Audio at bus %d device %d", VAR_8->udev->bus->busnum,
  VAR_8->udev->devnum);

 FUNC_5(VAR_10, VAR_8->dev);

 VAR_8->snd = VAR_10;

 VAR_9 = FUNC_8(VAR_10, "USBTV Audio", 0, 0, 1, &VAR_11);
 if (VAR_9 < 0)
  goto err;

 FUNC_11(VAR_11->name, "USBTV Audio Input", sizeof(VAR_11->name));
 VAR_11->info_flags = 0;
 VAR_11->private_data = VAR_8;

 FUNC_9(VAR_11, VAR_3, &VAR_6);
 FUNC_7(VAR_11, VAR_2,
  FUNC_6(VAR_0), VAR_5,
  VAR_5);

 VAR_9 = FUNC_4(VAR_10);
 if (VAR_9)
  goto err;

 return 0;

err:
 VAR_8->snd = ((void*)0);
 FUNC_2(VAR_10);

 return VAR_9;
}
