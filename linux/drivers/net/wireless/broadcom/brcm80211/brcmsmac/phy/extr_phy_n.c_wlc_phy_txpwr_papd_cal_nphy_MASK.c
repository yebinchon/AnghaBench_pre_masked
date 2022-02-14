
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_phy {scalar_t__* nphy_papd_tx_gain_at_last_cal; scalar_t__ nphy_force_papd_cal; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 scalar_t__ FUNC_3 (struct brcms_phy*,int) ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;

void FUNC_5(struct brcms_phy *VAR_0)
{
 if (FUNC_0(VAR_0)
     && (VAR_0->nphy_force_papd_cal
  || (FUNC_4(VAR_0)
      &&
      (((u32)
        FUNC_1(FUNC_3(VAR_0, 0) -
     VAR_0->nphy_papd_tx_gain_at_last_cal[0]) >= 4)
       || ((u32)
    FUNC_1(FUNC_3(VAR_0, 1) -
        VAR_0->nphy_papd_tx_gain_at_last_cal[1]) >= 4)))))
  FUNC_2(VAR_0, 1);
}
