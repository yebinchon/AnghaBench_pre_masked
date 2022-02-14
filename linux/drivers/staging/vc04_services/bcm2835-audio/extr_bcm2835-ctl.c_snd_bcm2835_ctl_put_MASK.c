
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct bcm2835_chip {int volume; int mute; int dest; int audio_mutex; TYPE_3__* card; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct bcm2835_chip*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct bcm2835_chip* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4,
          struct snd_ctl_elem_value *VAR_5)
{
 struct bcm2835_chip *VAR_6 = FUNC_4(VAR_4);
 int VAR_7, *VAR_8;
 int VAR_9 = 0;

 if (VAR_4->private_value == VAR_3)
  VAR_8 = &VAR_6->volume;
 else if (VAR_4->private_value == VAR_2)
  VAR_8 = &VAR_6->mute;
 else if (VAR_4->private_value == VAR_1)
  VAR_8 = &VAR_6->dest;
 else
  return -VAR_0;

 VAR_7 = VAR_5->value.integer.value[0];
 FUNC_2(&VAR_6->audio_mutex);
 if (VAR_7 != *VAR_8) {
  *VAR_8 = VAR_7;
  VAR_9 = 1;
  if (FUNC_0(VAR_6))
   FUNC_1(VAR_6->card->dev, "Failed to set ALSA controls..\n");
 }
 FUNC_3(&VAR_6->audio_mutex);
 return VAR_9;
}
