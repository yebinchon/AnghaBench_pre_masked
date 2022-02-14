
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx88_core {int dummy; } ;
struct cx88_audio_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cx88_audio_dev* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct cx88_core*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_kcontrol *VAR_2,
           struct snd_ctl_elem_value *VAR_3)
{
 struct cx88_audio_dev *VAR_4 = FUNC_0(VAR_2);
 struct cx88_core *VAR_5 = VAR_4->core;
 u16 VAR_6 = VAR_3->value.integer.value[0];
 u16 VAR_7 = VAR_3->value.integer.value[1];
 int VAR_8, VAR_9;


 if (VAR_6 >= VAR_7) {
  VAR_8 = VAR_6 << 10;
  VAR_9 = VAR_6 ? (0x8000 * VAR_7) / VAR_6 : 0x8000;
 } else {
  VAR_8 = VAR_7 << 10;
  VAR_9 = VAR_7 ? 0xffff - (0x8000 * VAR_6) / VAR_7 : 0x8000;
 }
 FUNC_1(VAR_5, VAR_1, VAR_8);
 FUNC_1(VAR_5, VAR_0, VAR_9);
}
