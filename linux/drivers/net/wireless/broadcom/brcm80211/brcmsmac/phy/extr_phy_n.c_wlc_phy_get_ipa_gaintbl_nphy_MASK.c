
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int radiorev; int phy_rev; } ;
struct brcms_phy {TYPE_2__ pubpi; TYPE_1__* sh; int radio_chanspec; } ;
struct TYPE_3__ {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static u32 *FUNC_3(struct brcms_phy *VAR_11)
{
 u32 *VAR_12 = ((void*)0);

 if (FUNC_0(VAR_11->radio_chanspec)) {
  if (FUNC_1(VAR_11->pubpi.phy_rev, 7)) {
   if ((VAR_11->pubpi.radiorev == 4)
       || (VAR_11->pubpi.radiorev == 6))
    VAR_12 =
     VAR_3;
   else if (VAR_11->pubpi.radiorev == 3)
    VAR_12 =
     VAR_2;
   else if (VAR_11->pubpi.radiorev == 5)
    VAR_12 =
     VAR_4;
   else if ((VAR_11->pubpi.radiorev == 7)
     || (VAR_11->pubpi.radiorev == 8))
    VAR_12 =
     VAR_5;
  } else if (FUNC_2(VAR_11->pubpi.phy_rev, 6)) {
   VAR_12 = VAR_10;
   if (VAR_11->sh->chip == VAR_0)
    VAR_12 = VAR_9;
  } else if (FUNC_2(VAR_11->pubpi.phy_rev, 5)) {
   VAR_12 = VAR_9;
  } else {
   VAR_12 = VAR_1;
  }
 } else {

  if (FUNC_1(VAR_11->pubpi.phy_rev, 7)) {
   if ((VAR_11->pubpi.radiorev == 3) ||
       (VAR_11->pubpi.radiorev == 4) ||
       (VAR_11->pubpi.radiorev == 6))
    VAR_12 = VAR_7;
   else if ((VAR_11->pubpi.radiorev == 7)
     || (VAR_11->pubpi.radiorev == 8))
    VAR_12 =
     VAR_8;
  } else {
   VAR_12 = VAR_6;
  }
 }

 return VAR_12;
}
