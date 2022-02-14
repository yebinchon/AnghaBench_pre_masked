
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int radiorev; int phy_rev; } ;
struct brcms_phy {int* nphy_txcal_pwr_idx; int nphy_txcal_bbmult; int radio_chanspec; TYPE_2__ pubpi; TYPE_1__* sh; scalar_t__ use_int_tx_iqlo_cal_nphy; } ;
struct TYPE_3__ {int hw_phytxchain; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*,int,int,int,int,int *) ;
 int FUNC_8 (struct brcms_phy*,int,int,int) ;

__attribute__((used)) static void FUNC_9(struct brcms_phy *VAR_0)
{
 bool VAR_1 = 0;
 u8 VAR_2 = 0;
 u8 VAR_3 = 10;

 if (VAR_0->use_int_tx_iqlo_cal_nphy) {
  if (FUNC_1(VAR_0->pubpi.phy_rev, 7)) {
   if ((VAR_0->pubpi.radiorev == 3) ||
       (VAR_0->pubpi.radiorev == 4) ||
       (VAR_0->pubpi.radiorev == 6)) {

    VAR_0->nphy_txcal_pwr_idx[0] =
     VAR_3;
    VAR_0->nphy_txcal_pwr_idx[1] =
     VAR_3;
    FUNC_8(
     VAR_0, 3,
     VAR_3,
     0);
   } else {

    VAR_0->nphy_txcal_pwr_idx[0] =
     VAR_2;
    VAR_0->nphy_txcal_pwr_idx[1] =
     VAR_2;
    FUNC_8(
     VAR_0, 3,
     VAR_2,
     0);
   }
   VAR_1 = 1;

  } else if (FUNC_3(VAR_0->pubpi.phy_rev, 5)) {
   FUNC_5(VAR_0, 11, 0);
   if (VAR_0->sh->hw_phytxchain != 3) {
    VAR_0->nphy_txcal_pwr_idx[1] =
     VAR_0->nphy_txcal_pwr_idx[0];
    FUNC_8(VAR_0, 3,
        VAR_0->
        nphy_txcal_pwr_idx[0],
        1);
    VAR_1 = 1;
   }

  } else if (FUNC_2(VAR_0->pubpi.phy_rev, 5)) {
   if (FUNC_4(VAR_0)) {
    if (FUNC_0(VAR_0->radio_chanspec)) {
     FUNC_5(VAR_0, 12,
            0);
    } else {
     VAR_0->nphy_txcal_pwr_idx[0] = 80;
     VAR_0->nphy_txcal_pwr_idx[1] = 80;
     FUNC_8(VAR_0, 3, 80,
         0);
     VAR_1 = 1;
    }
   } else {
    FUNC_6(VAR_0);
    VAR_1 = 1;
   }

  } else if (FUNC_2(VAR_0->pubpi.phy_rev, 6)) {
   if (FUNC_4(VAR_0)) {
    if (FUNC_0(VAR_0->radio_chanspec))
     FUNC_5(VAR_0, 12,
            0);
    else
     FUNC_5(VAR_0, 14,
            0);
   } else {
    FUNC_6(VAR_0);
    VAR_1 = 1;
   }
  }

 } else {
  FUNC_5(VAR_0, 10, 0);
 }

 if (VAR_1)
  FUNC_7(VAR_0, 15, 1, 87, 16,
     &VAR_0->nphy_txcal_bbmult);
}
