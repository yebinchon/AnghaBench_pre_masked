
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; int radio_chanspec; } ;
struct TYPE_4__ {int ptcentreTs20; int ptcentreFactor; } ;
struct TYPE_3__ {int boardflags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (struct brcms_phy*,int ) ;
 int FUNC_7 (struct brcms_phy*) ;
 scalar_t__ FUNC_8 (struct brcms_phy*) ;
 int FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy_pub*,int ) ;
 int FUNC_11 (struct brcms_phy*,int,int) ;

void FUNC_12(struct brcms_phy *VAR_2, u16 VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3);

 FUNC_10((struct brcms_phy_pub *)VAR_2, VAR_3);

 FUNC_6(VAR_2, VAR_2->radio_chanspec);

 FUNC_2(VAR_2, 0x44a, 0x44);
 FUNC_11(VAR_2, 0x44a, 0x80);

 FUNC_5(VAR_2, VAR_4);
 FUNC_3(1000);

 FUNC_7(VAR_2);

 FUNC_11(VAR_2, 0x657, VAR_1[VAR_4 - 1].ptcentreTs20);
 FUNC_11(VAR_2, 0x658, VAR_1[VAR_4 - 1].ptcentreFactor);

 if (FUNC_0(VAR_2->radio_chanspec) == 14) {
  FUNC_1(VAR_2, 0x448, (0x3 << 8), (2) << 8);

  FUNC_4(VAR_2, 0, 3);
 } else {
  FUNC_1(VAR_2, 0x448, (0x3 << 8), (1) << 8);

  FUNC_4(VAR_2, 0, 2);
 }

 if (VAR_2->sh->boardflags & VAR_0)
  FUNC_4(VAR_2, 1, 0);
 else
  FUNC_4(VAR_2, 1, 3);

 FUNC_1(VAR_2, 0x4eb, (0x7 << 3), (1) << 3);
 if (FUNC_8(VAR_2))
  FUNC_9(VAR_2);
}
