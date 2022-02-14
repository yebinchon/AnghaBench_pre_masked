
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_7__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct saa7134_dev {TYPE_3__* pci; } ;
struct TYPE_9__ {int** mixer_volume; int mixer_lock; struct saa7134_dev* dev; } ;
typedef TYPE_4__ snd_card_saa7134_t ;
struct TYPE_8__ {int device; } ;
 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 TYPE_4__* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol * VAR_1,
      struct snd_ctl_elem_value * VAR_2)
{
 snd_card_saa7134_t *VAR_3 = FUNC_1(VAR_1);
 struct saa7134_dev *VAR_4 = VAR_3->dev;

 int VAR_5, VAR_6 = VAR_1->private_value;
 int VAR_7, VAR_8;

 VAR_7 = VAR_2->value.integer.value[0];
 if (VAR_7 < 0)
  VAR_7 = 0;
 if (VAR_7 > 20)
  VAR_7 = 20;
 VAR_8 = VAR_2->value.integer.value[1];
 if (VAR_8 < 0)
  VAR_8 = 0;
 if (VAR_8 > 20)
  VAR_8 = 20;
 FUNC_2(&VAR_3->mixer_lock);
 VAR_5 = 0;
 if (VAR_3->mixer_volume[VAR_6][0] != VAR_7) {
  VAR_5 = 1;
  VAR_8 = VAR_7;
 }
 if (VAR_3->mixer_volume[VAR_6][1] != VAR_8) {
  VAR_5 = 1;
  VAR_7 = VAR_8;
 }
 if (VAR_5) {
  switch (VAR_4->pci->device) {
   case 129:
    switch (VAR_6) {
     case 131:
      VAR_7 = 20;
      break;
     case 133:
      FUNC_0(VAR_0, 0x10,
          (VAR_7 > 10) ? 0x00 : 0x10);
      break;
     case 132:
      FUNC_0(VAR_0, 0x20,
          (VAR_7 > 10) ? 0x00 : 0x20);
      break;
    }
    break;
   case 130:
   case 128:
    switch (VAR_6) {
     case 131:
      VAR_7 = 20;
      break;
     case 133:
      FUNC_0(0x0594, 0x10,
          (VAR_7 > 10) ? 0x00 : 0x10);
      break;
     case 132:
      FUNC_0(0x0594, 0x20,
          (VAR_7 > 10) ? 0x00 : 0x20);
      break;
    }
    break;
  }
  VAR_3->mixer_volume[VAR_6][0] = VAR_7;
  VAR_3->mixer_volume[VAR_6][1] = VAR_8;
 }
 FUNC_3(&VAR_3->mixer_lock);
 return VAR_5;
}
