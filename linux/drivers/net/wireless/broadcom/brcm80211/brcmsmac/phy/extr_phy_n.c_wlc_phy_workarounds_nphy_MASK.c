
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_8(struct brcms_phy *VAR_3)
{
 if (FUNC_0(VAR_3->radio_chanspec))
  FUNC_3(VAR_3, VAR_0, 0);
 else
  FUNC_3(VAR_3, VAR_0, 1);

 if (VAR_3->phyhang_avoid)
  FUNC_4(VAR_3, 1);

 FUNC_2(VAR_3, 0xb1, VAR_1 | VAR_2);

 if (FUNC_1(VAR_3->pubpi.phy_rev, 7))
  FUNC_7(VAR_3);
 else if (FUNC_1(VAR_3->pubpi.phy_rev, 3))
  FUNC_6(VAR_3);
 else
  FUNC_5(VAR_3);

 if (VAR_3->phyhang_avoid)
  FUNC_4(VAR_3, 0);
}
