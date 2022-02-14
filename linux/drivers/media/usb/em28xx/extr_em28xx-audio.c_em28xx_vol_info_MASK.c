
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct em28xx {scalar_t__ disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct em28xx* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_info *VAR_3)
{
 struct em28xx *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->disconnected)
  return -VAR_0;

 VAR_3->type = VAR_1;
 VAR_3->count = 2;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = 0x1f;

 return 0;
}
