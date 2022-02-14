
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct cx88_core {scalar_t__ sd_wm8775; } ;
struct cx88_audio_dev {int reg_lock; struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct cx88_audio_dev* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct cx88_audio_dev *VAR_5 = FUNC_4(VAR_3);
 struct cx88_core *VAR_6 = VAR_5->core;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;
 u32 VAR_12;

 if (VAR_6->sd_wm8775)
  FUNC_3(VAR_3, VAR_4);

 VAR_7 = VAR_4->value.integer.value[0] & 0x3f;
 VAR_8 = VAR_4->value.integer.value[1] & 0x3f;
 VAR_10 = VAR_8 - VAR_7;
 if (VAR_10 < 0) {
  VAR_9 = 0x3f - VAR_7;
  VAR_10 = (-VAR_10) | 0x40;
 } else {
  VAR_9 = 0x3f - VAR_8;
 }

 FUNC_5(&VAR_5->reg_lock);
 VAR_12 = FUNC_0(VAR_1);
 if (VAR_9 != (VAR_12 & 0x3f)) {
  FUNC_1(VAR_2, VAR_1, (VAR_12 & ~0x3f) | VAR_9);
  VAR_11 = 1;
 }
 if ((FUNC_0(VAR_0) & 0x7f) != VAR_10) {
  FUNC_2(VAR_0, VAR_10);
  VAR_11 = 1;
 }
 FUNC_6(&VAR_5->reg_lock);

 return VAR_11;
}
