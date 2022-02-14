
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {int f_flags; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {struct snd_pcm_substream* capture_pcm_substream; } ;
struct em28xx {int lock; scalar_t__ disconnected; TYPE_1__ adev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int,int,int,int) ;
 int FUNC_1 (struct em28xx*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct em28xx* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 struct em28xx *VAR_5 = FUNC_5(VAR_3);
 struct snd_pcm_substream *VAR_6 = VAR_5->adev.capture_pcm_substream;
 int VAR_7 = 0;
 int VAR_8;

 if (VAR_5->disconnected)
  return -VAR_1;

 if (VAR_6)
  VAR_7 = !!(VAR_6->f_flags & VAR_2);
 if (VAR_7) {
  if (!FUNC_3(&VAR_5->lock))
   return -VAR_0;
 } else {
  FUNC_2(&VAR_5->lock);
 }
 VAR_8 = FUNC_1(VAR_5, VAR_3->private_value);
 FUNC_4(&VAR_5->lock);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_0("%sleft vol %d, right vol %d (0x%04x) from ac97 volume control 0x%04x\n",
  (VAR_8 & 0x8000) ? "muted " : "",
  0x1f - ((VAR_8 >> 8) & 0x1f), 0x1f - (VAR_8 & 0x1f),
  VAR_8, (int)VAR_3->private_value);

 VAR_4->value.integer.value[0] = 0x1f - (VAR_8 & 0x1f);
 VAR_4->value.integer.value[1] = 0x1f - ((VAR_8 >> 8) & 0x1f);

 return 0;
}
