
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx88_core {int dummy; } ;
struct cx88_audio_dev {struct cx88_core* core; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 struct cx88_audio_dev* FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct cx88_core*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct cx88_audio_dev *VAR_3 = FUNC_0(VAR_1);
 struct cx88_core *VAR_4 = VAR_3->core;
 s32 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_2->value.integer.value[0] = VAR_5 ? 1 : 0;
 return 0;
}
