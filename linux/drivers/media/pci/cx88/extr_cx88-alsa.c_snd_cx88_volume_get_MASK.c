
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct cx88_audio_dev* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct cx88_audio_dev *VAR_4 = FUNC_1(VAR_2);
 struct cx88_core *VAR_5 = VAR_4->core;
 int VAR_6 = 0x3f - (FUNC_0(VAR_1) & 0x3f),
     VAR_7 = FUNC_0(VAR_0);

 VAR_3->value.integer.value[(VAR_7 & 0x40) ? 0 : 1] = VAR_6;
 VAR_6 -= (VAR_7 & 0x3f);
 VAR_3->value.integer.value[(VAR_7 & 0x40) ? 1 : 0] = VAR_6 < 0 ? 0 : VAR_6;

 return 0;
}
