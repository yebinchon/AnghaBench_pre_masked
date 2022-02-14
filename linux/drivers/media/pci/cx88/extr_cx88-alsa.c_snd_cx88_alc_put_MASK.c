
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx88_core {int dummy; } ;
struct cx88_audio_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 struct cx88_audio_dev* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct cx88_core*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct cx88_audio_dev *VAR_3 = FUNC_0(VAR_1);
 struct cx88_core *VAR_4 = VAR_3->core;

 FUNC_1(VAR_4, VAR_0,
        VAR_2->value.integer.value[0] != 0);
 return 0;
}
