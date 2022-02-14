
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
struct cx88_core {scalar_t__ sd_wm8775; } ;
struct cx88_audio_dev {int reg_lock; struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct cx88_audio_dev* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cx88_core*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct cx88_audio_dev *VAR_5 = FUNC_2(VAR_3);
 struct cx88_core *VAR_6 = VAR_5->core;
 u32 VAR_7 = VAR_3->private_value;
 int VAR_8 = 0;
 u32 VAR_9;

 FUNC_3(&VAR_5->reg_lock);
 VAR_9 = FUNC_0(VAR_0);
 if (VAR_4->value.integer.value[0] != !(VAR_9 & VAR_7)) {
  VAR_9 ^= VAR_7;
  FUNC_1(VAR_1, VAR_0, VAR_9);

  if (VAR_6->sd_wm8775 && ((1 << 6) == VAR_7))
   FUNC_5(VAR_6,
          VAR_2, 0 != (VAR_9 & VAR_7));
  VAR_8 = 1;
 }
 FUNC_4(&VAR_5->reg_lock);
 return VAR_8;
}
