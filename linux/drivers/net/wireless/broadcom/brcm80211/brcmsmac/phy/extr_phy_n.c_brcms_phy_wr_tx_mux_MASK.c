
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ radioid; int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_8, u8 VAR_9)
{
 if (FUNC_2(VAR_8)) {
  if (FUNC_1(VAR_8->pubpi.phy_rev, 7))
   FUNC_3(VAR_8,
     ((VAR_9 == VAR_1) ?
      VAR_6 :
      VAR_7),
     (FUNC_0(VAR_8->radio_chanspec) ?
     0xc : 0xe));
  else
   FUNC_3(VAR_8,
     VAR_4 |
     ((VAR_9 == VAR_1) ?
      VAR_2 : VAR_3),
     (FUNC_0(VAR_8->radio_chanspec) ?
     0xc : 0xe));
 } else {
  if (FUNC_1(VAR_8->pubpi.phy_rev, 7)) {
   FUNC_3(VAR_8,
     ((VAR_9 == VAR_1) ?
      VAR_6 :
      VAR_7),
     0x11);

   if (VAR_8->pubpi.radioid == VAR_0)
    FUNC_3(VAR_8,
      VAR_5, 0x1);

  } else {
   FUNC_3(VAR_8,
     VAR_4 |
     ((VAR_9 == VAR_1) ?
      VAR_2 : VAR_3),
     0x11);
  }
 }
}
