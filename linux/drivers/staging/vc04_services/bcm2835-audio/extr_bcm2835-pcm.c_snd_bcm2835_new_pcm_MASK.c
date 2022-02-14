
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm {int nonatomic; int name; struct bcm2835_chip* private_data; } ;
struct bcm2835_chip {int dest; struct snd_pcm* pcm; struct snd_pcm* pcm_spdif; TYPE_1__* card; int mute; scalar_t__ volume; } ;
typedef enum snd_bcm2835_route { ____Placeholder_snd_bcm2835_route } snd_bcm2835_route ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,char const*,int,int ,int ,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int FUNC_3 (int ,char const*) ;

int FUNC_4(struct bcm2835_chip *VAR_5, const char *VAR_6,
   int VAR_7, enum snd_bcm2835_route VAR_8,
   u32 VAR_9, bool VAR_10)
{
 struct snd_pcm *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_5->card, VAR_6, VAR_7, VAR_9, 0, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11->private_data = VAR_5;
 VAR_11->nonatomic = 1;
 FUNC_3(VAR_11->name, VAR_6);
 if (!VAR_10) {
  VAR_5->dest = VAR_8;
  VAR_5->volume = 0;
  VAR_5->mute = VAR_0;
 }

 FUNC_2(VAR_11, VAR_2,
   VAR_10 ? &VAR_4 :
   &VAR_3);

 FUNC_0(VAR_11, VAR_1,
  VAR_5->card->dev, 128 * 1024, 128 * 1024);

 if (VAR_10)
  VAR_5->pcm_spdif = VAR_11;
 else
  VAR_5->pcm = VAR_11;
 return 0;
}
