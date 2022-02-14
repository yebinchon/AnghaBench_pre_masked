
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx88_core {int dummy; } ;
struct cx88_audio_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct cx88_audio_dev* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct cx88_audio_dev *VAR_3 = FUNC_1(VAR_1);
 struct cx88_core *VAR_4 = VAR_3->core;
 u32 VAR_5 = VAR_1->private_value;

 VAR_2->value.integer.value[0] = !(FUNC_0(VAR_0) & VAR_5);
 return 0;
}
