
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct solo_dev {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct TYPE_4__ {scalar_t__ numid; } ;
struct snd_ctl_elem_value {TYPE_3__ value; TYPE_1__ id; } ;


 struct solo_dev* FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct solo_dev*,scalar_t__) ;
 int FUNC_2 (struct solo_dev*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_value *VAR_1)
{
 struct solo_dev *VAR_2 = FUNC_0(VAR_0);
 u8 VAR_3 = VAR_1->id.numid - 1;
 u8 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 == VAR_1->value.integer.value[0])
  return 0;

 FUNC_2(VAR_2, VAR_3, VAR_1->value.integer.value[0]);

 return 1;
}
