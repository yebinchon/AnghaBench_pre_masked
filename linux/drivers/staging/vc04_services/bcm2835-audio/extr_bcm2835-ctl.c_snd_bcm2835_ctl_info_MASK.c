
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_8,
    struct snd_ctl_elem_info *VAR_9)
{
 if (VAR_8->private_value == VAR_5) {
  VAR_9->type = VAR_7;
  VAR_9->count = 1;
  VAR_9->value.integer.min = VAR_2;
  VAR_9->value.integer.max = VAR_1;
 } else if (VAR_8->private_value == VAR_4) {
  VAR_9->type = VAR_6;
  VAR_9->count = 1;
  VAR_9->value.integer.min = 0;
  VAR_9->value.integer.max = 1;
 } else if (VAR_8->private_value == VAR_3) {
  VAR_9->type = VAR_7;
  VAR_9->count = 1;
  VAR_9->value.integer.min = 0;
  VAR_9->value.integer.max = VAR_0 - 1;
 }
 return 0;
}
