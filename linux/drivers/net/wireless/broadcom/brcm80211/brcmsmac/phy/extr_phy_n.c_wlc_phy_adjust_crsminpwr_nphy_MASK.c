
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int nphy_crsminpwr_adjusted; int* nphy_crsminpwr; int radio_chanspec; TYPE_1__ pubpi; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_5(struct brcms_phy *VAR_0, u8 VAR_1)
{
 u16 VAR_2;

 if (FUNC_2(VAR_0->pubpi.phy_rev, 3)) {
  if ((FUNC_0(VAR_0->radio_chanspec) == 11) &&
      FUNC_1(VAR_0->radio_chanspec)) {
   if (!VAR_0->nphy_crsminpwr_adjusted) {
    VAR_2 = FUNC_3(VAR_0, 0x27d);
    VAR_0->nphy_crsminpwr[0] = VAR_2 & 0xff;
    VAR_2 &= 0xff00;
    VAR_2 |= (u16) VAR_1;
    FUNC_4(VAR_0, 0x27d, VAR_2);

    VAR_2 = FUNC_3(VAR_0, 0x280);
    VAR_0->nphy_crsminpwr[1] = VAR_2 & 0xff;
    VAR_2 &= 0xff00;
    VAR_2 |= (u16) VAR_1;
    FUNC_4(VAR_0, 0x280, VAR_2);

    VAR_2 = FUNC_3(VAR_0, 0x283);
    VAR_0->nphy_crsminpwr[2] = VAR_2 & 0xff;
    VAR_2 &= 0xff00;
    VAR_2 |= (u16) VAR_1;
    FUNC_4(VAR_0, 0x283, VAR_2);

    VAR_0->nphy_crsminpwr_adjusted = 1;
   }
  } else {
   if (VAR_0->nphy_crsminpwr_adjusted) {
    VAR_2 = FUNC_3(VAR_0, 0x27d);
    VAR_2 &= 0xff00;
    VAR_2 |= VAR_0->nphy_crsminpwr[0];
    FUNC_4(VAR_0, 0x27d, VAR_2);

    VAR_2 = FUNC_3(VAR_0, 0x280);
    VAR_2 &= 0xff00;
    VAR_2 |= VAR_0->nphy_crsminpwr[1];
    FUNC_4(VAR_0, 0x280, VAR_2);

    VAR_2 = FUNC_3(VAR_0, 0x283);
    VAR_2 &= 0xff00;
    VAR_2 |= VAR_0->nphy_crsminpwr[2];
    FUNC_4(VAR_0, 0x283, VAR_2);

    VAR_0->nphy_crsminpwr_adjusted = 0;
   }
  }
 }
}
