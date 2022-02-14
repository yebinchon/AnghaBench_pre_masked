
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvidia_par {int fpSyncs; int PRAMDAC; int PMC; int PCRTC0; int FlatPanel; } ;
struct TYPE_2__ {scalar_t__ power; scalar_t__ fb_blank; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 struct nvidia_par* FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct nvidia_par*,int) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_1)
{
 struct nvidia_par *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;

 if (!VAR_2->FlatPanel)
  return 0;

 if (VAR_1->props.power != VAR_0 ||
     VAR_1->props.fb_blank != VAR_0)
  VAR_6 = 0;
 else
  VAR_6 = VAR_1->props.brightness;

 VAR_4 = FUNC_0(VAR_2->PMC, 0x10F0) & 0x0000FFFF;
 VAR_3 = FUNC_0(VAR_2->PCRTC0, 0x081C) & 0xFFFFFFFC;
 VAR_5 = FUNC_0(VAR_2->PRAMDAC, 0x0848) & 0xCFFFFFCC;

 if (VAR_6 > 0) {
  VAR_3 |= 0x1;
  VAR_4 |= (1 << 31);
  VAR_4 |= FUNC_3(VAR_2, VAR_6) << 16;
  VAR_5 |= VAR_2->fpSyncs;
 } else
  VAR_5 |= 0x20000022;

 FUNC_1(VAR_2->PCRTC0, 0x081C, VAR_3);
 FUNC_1(VAR_2->PMC, 0x10F0, VAR_4);
 FUNC_1(VAR_2->PRAMDAC, 0x848, VAR_5);

 return 0;
}
