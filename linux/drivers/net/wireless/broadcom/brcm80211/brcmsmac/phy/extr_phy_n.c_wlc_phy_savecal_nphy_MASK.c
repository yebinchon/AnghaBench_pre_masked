
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_3__ {int phy_rev; } ;
struct TYPE_4__ {void* txcal_coeffs_5G; void** txcal_radio_regs_5G; int rxcal_coeffs_5G; void* txcal_coeffs_2G; void** txcal_radio_regs_2G; int rxcal_coeffs_2G; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; TYPE_1__ pubpi; TYPE_2__ calibration_cache; int radio_chanspec; int nphy_iqcal_chanspec_5G; int nphy_iqcal_chanspec_2G; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_2 (struct brcms_phy*,int ,int ,int,int ) ;
 int VAR_16 ;
 void* FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int *) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (struct brcms_phy*,int ,int,int,int,void*) ;

__attribute__((used)) static void FUNC_7(struct brcms_phy *VAR_17)
{
 void *VAR_18;
 int VAR_19;
 u16 *VAR_20 = ((void*)0);

 if (VAR_17->phyhang_avoid)
  FUNC_5(VAR_17, 1);

 if (FUNC_0(VAR_17->radio_chanspec)) {

  FUNC_4(VAR_17, 0,
       &VAR_17->calibration_cache.
       rxcal_coeffs_2G);

  if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {
   VAR_20 =
    VAR_17->calibration_cache.txcal_radio_regs_2G;
  } else if (FUNC_1(VAR_17->pubpi.phy_rev, 3)) {

   VAR_17->calibration_cache.txcal_radio_regs_2G[0] =
    FUNC_3(VAR_17,
            VAR_13 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_2G[1] =
    FUNC_3(VAR_17,
            VAR_14 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_2G[2] =
    FUNC_3(VAR_17,
            VAR_13 |
            VAR_10);
   VAR_17->calibration_cache.txcal_radio_regs_2G[3] =
    FUNC_3(VAR_17,
            VAR_14 |
            VAR_10);

   VAR_17->calibration_cache.txcal_radio_regs_2G[4] =
    FUNC_3(VAR_17,
            VAR_11 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_2G[5] =
    FUNC_3(VAR_17,
            VAR_12 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_2G[6] =
    FUNC_3(VAR_17,
            VAR_11 |
            VAR_10);
   VAR_17->calibration_cache.txcal_radio_regs_2G[7] =
    FUNC_3(VAR_17,
            VAR_12 |
            VAR_10);
  } else {
   VAR_17->calibration_cache.txcal_radio_regs_2G[0] =
          FUNC_3(VAR_17, VAR_6);
   VAR_17->calibration_cache.txcal_radio_regs_2G[1] =
          FUNC_3(VAR_17, VAR_8);
   VAR_17->calibration_cache.txcal_radio_regs_2G[2] =
          FUNC_3(VAR_17, VAR_5);
   VAR_17->calibration_cache.txcal_radio_regs_2G[3] =
          FUNC_3(VAR_17, VAR_7);
  }

  VAR_17->nphy_iqcal_chanspec_2G = VAR_17->radio_chanspec;
  VAR_18 = VAR_17->calibration_cache.txcal_coeffs_2G;
 } else {

  FUNC_4(VAR_17, 0,
       &VAR_17->calibration_cache.
       rxcal_coeffs_5G);

  if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {
   VAR_20 =
    VAR_17->calibration_cache.txcal_radio_regs_5G;
  } else if (FUNC_1(VAR_17->pubpi.phy_rev, 3)) {

   VAR_17->calibration_cache.txcal_radio_regs_5G[0] =
    FUNC_3(VAR_17,
            VAR_13 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_5G[1] =
    FUNC_3(VAR_17,
            VAR_14 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_5G[2] =
    FUNC_3(VAR_17,
            VAR_13 |
            VAR_10);
   VAR_17->calibration_cache.txcal_radio_regs_5G[3] =
    FUNC_3(VAR_17,
            VAR_14 |
            VAR_10);

   VAR_17->calibration_cache.txcal_radio_regs_5G[4] =
    FUNC_3(VAR_17,
            VAR_11 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_5G[5] =
    FUNC_3(VAR_17,
            VAR_12 |
            VAR_9);
   VAR_17->calibration_cache.txcal_radio_regs_5G[6] =
    FUNC_3(VAR_17,
            VAR_11 |
            VAR_10);
   VAR_17->calibration_cache.txcal_radio_regs_5G[7] =
    FUNC_3(VAR_17,
            VAR_12 |
            VAR_10);
  } else {
   VAR_17->calibration_cache.txcal_radio_regs_5G[0] =
          FUNC_3(VAR_17, VAR_6);
   VAR_17->calibration_cache.txcal_radio_regs_5G[1] =
          FUNC_3(VAR_17, VAR_8);
   VAR_17->calibration_cache.txcal_radio_regs_5G[2] =
          FUNC_3(VAR_17, VAR_5);
   VAR_17->calibration_cache.txcal_radio_regs_5G[3] =
          FUNC_3(VAR_17, VAR_7);
  }

  VAR_17->nphy_iqcal_chanspec_5G = VAR_17->radio_chanspec;
  VAR_18 = VAR_17->calibration_cache.txcal_coeffs_5G;
 }
 if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {
  for (VAR_19 = 0; VAR_19 <= 1; VAR_19++) {

   VAR_20[2 * VAR_19] =
    FUNC_2(VAR_17, VAR_15, VAR_16, VAR_19,
      VAR_2);
   VAR_20[2 * VAR_19 + 1] =
    FUNC_2(VAR_17, VAR_15, VAR_16, VAR_19,
      VAR_3);

   VAR_20[2 * VAR_19 + 4] =
    FUNC_2(VAR_17, VAR_15, VAR_16, VAR_19,
      VAR_0);
   VAR_20[2 * VAR_19 + 5] =
    FUNC_2(VAR_17, VAR_15, VAR_16, VAR_19,
      VAR_1);
  }
 }

 FUNC_6(VAR_17, VAR_4, 8, 80, 16, VAR_18);

 if (VAR_17->phyhang_avoid)
  FUNC_5(VAR_17, 0);
}
