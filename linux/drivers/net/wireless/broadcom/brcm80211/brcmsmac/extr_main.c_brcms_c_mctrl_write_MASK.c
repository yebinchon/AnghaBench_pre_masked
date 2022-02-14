
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {int d11core; scalar_t__ mute_override; scalar_t__ wake_override; int maccontrol; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_hardware *VAR_3)
{
 u32 VAR_4 = VAR_3->maccontrol;


 if (VAR_3->wake_override)
  VAR_4 |= VAR_2;


 if (VAR_3->mute_override) {
  VAR_4 &= ~(VAR_0);
  VAR_4 |= VAR_1;
 }

 FUNC_1(VAR_3->d11core, FUNC_0(VAR_4),
       VAR_4);
}
