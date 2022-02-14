
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int radiorev; } ;
struct brcms_phy {TYPE_1__ pubpi; int radio_chanspec; } ;
typedef size_t s32 ;
typedef size_t s16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static s32 FUNC_1(struct brcms_phy *VAR_5, s16 VAR_6, s16 VAR_7)
{
 s32 VAR_8 = 0;

 if (FUNC_0(VAR_5->radio_chanspec)) {
  if ((VAR_5->pubpi.radiorev == 3) ||
      (VAR_5->pubpi.radiorev == 4) ||
      (VAR_5->pubpi.radiorev == 6))
   VAR_8 = (s16)
           VAR_0
           [VAR_7];
  else if (VAR_5->pubpi.radiorev == 5)
   VAR_8 = (s16)
           VAR_1
           [VAR_7];
  else if ((VAR_5->pubpi.radiorev == 7)
    || (VAR_5->pubpi.radiorev ==
        8))
   VAR_8 = (s16)
           VAR_2
           [VAR_7];
 } else {
  if ((VAR_5->pubpi.radiorev == 3) ||
      (VAR_5->pubpi.radiorev == 4) ||
      (VAR_5->pubpi.radiorev == 6))
   VAR_8 = (s16)
           VAR_3
           [VAR_6];
  else if ((VAR_5->pubpi.radiorev == 7)
    || (VAR_5->pubpi.radiorev ==
        8))
   VAR_8 = (s16)
           VAR_4
           [VAR_6];
 }
 return VAR_8;
}
