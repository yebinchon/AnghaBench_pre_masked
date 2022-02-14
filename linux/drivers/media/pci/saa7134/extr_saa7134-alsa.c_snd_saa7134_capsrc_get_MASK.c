
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_7__ {int capture_source_addr; int mixer_lock; int * capture_source; } ;
typedef TYPE_3__ snd_card_saa7134_t ;


 TYPE_3__* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol * VAR_0,
      struct snd_ctl_elem_value * VAR_1)
{
 snd_card_saa7134_t *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_0->private_value;

 FUNC_1(&VAR_2->mixer_lock);
 if (VAR_2->capture_source_addr == VAR_3) {
  VAR_1->value.integer.value[0] = VAR_2->capture_source[0];
  VAR_1->value.integer.value[1] = VAR_2->capture_source[1];
 } else {
  VAR_1->value.integer.value[0] = 0;
  VAR_1->value.integer.value[1] = 0;
 }
 FUNC_2(&VAR_2->mixer_lock);

 return 0;
}
