
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct bcm2835_chip {int audio_mutex; int dest; int mute; int volume; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct bcm2835_chip* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct bcm2835_chip *VAR_5 = FUNC_2(VAR_3);

 FUNC_0(&VAR_5->audio_mutex);

 if (VAR_3->private_value == VAR_2)
  VAR_4->value.integer.value[0] = VAR_5->volume;
 else if (VAR_3->private_value == VAR_1)
  VAR_4->value.integer.value[0] = VAR_5->mute;
 else if (VAR_3->private_value == VAR_0)
  VAR_4->value.integer.value[0] = VAR_5->dest;

 FUNC_1(&VAR_5->audio_mutex);
 return 0;
}
