
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct bcm2835_chip {unsigned int spdif_status; int audio_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct bcm2835_chip* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct bcm2835_chip *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3 = 0;
 int VAR_4, VAR_5;

 FUNC_0(&VAR_2->audio_mutex);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_3 |= (unsigned int)VAR_1->value.iec958.status[VAR_4] << (VAR_4 * 8);

 VAR_5 = VAR_3 != VAR_2->spdif_status;
 VAR_2->spdif_status = VAR_3;

 FUNC_1(&VAR_2->audio_mutex);
 return VAR_5;
}
