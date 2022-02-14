
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
typedef void* u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct phytbl_info {int tbl_width; int* tbl_ptr; int tbl_len; scalar_t__ tbl_offset; int tbl_id; } ;
struct lcnphy_txgains {int gm_gain; int pga_gain; int pad_gain; scalar_t__ dac_gain; } ;
struct TYPE_6__ {void* txiqlocal_fq0; void* txiqlocal_fi0; void* txiqlocal_eq0; void* txiqlocal_ei0; scalar_t__ txiqlocal_didq; scalar_t__ txiqlocal_b; scalar_t__ txiqlocal_a; } ;
struct brcms_phy_lcnphy {TYPE_3__ lcnphy_cal_results; scalar_t__ lcnphy_hw_iqcal_en; scalar_t__ lcnphy_recal; } ;
struct TYPE_5__ {int phy_rev; } ;
struct TYPE_4__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_2__ pubpi; int radio_chanspec; TYPE_1__ u; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;
 scalar_t__ FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*,void**,void**,void**,void**) ;
 int FUNC_7 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_8 (struct brcms_phy*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct brcms_phy*) ;
 scalar_t__ FUNC_10 (struct brcms_phy*) ;
 int FUNC_11 (struct brcms_phy*,struct phytbl_info*) ;
 int FUNC_12 (struct brcms_phy*,void*) ;
 int FUNC_13 (struct brcms_phy*,scalar_t__) ;
 int FUNC_14 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_15 (struct brcms_phy*,int) ;
 int FUNC_16 (struct brcms_phy*,scalar_t__) ;
 int FUNC_17 (struct brcms_phy*,struct lcnphy_txgains*,int ,int) ;
 int FUNC_18 (struct brcms_phy*) ;
 int FUNC_19 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_20(struct brcms_phy *VAR_7)
{

 struct lcnphy_txgains VAR_8, VAR_9;
 u8 VAR_10;
 u16 VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 uint VAR_15, VAR_16 = 0xFF;
 u32 VAR_17;
 u16 VAR_18 = FUNC_10(VAR_7);
 struct phytbl_info VAR_19;
 u8 VAR_20, VAR_21, VAR_22, VAR_23;
 struct brcms_phy_lcnphy *VAR_24 = VAR_7->u.pi_lcnphy;

 FUNC_7(VAR_7, &VAR_9);
 VAR_14 = FUNC_5(VAR_7);

 VAR_10 = FUNC_3(VAR_7);

 if (VAR_18 == VAR_5)
  VAR_16 = FUNC_4(VAR_7);

 FUNC_16(VAR_7, VAR_5);

 VAR_8.gm_gain = 7;
 VAR_8.pga_gain = 0;
 VAR_8.pad_gain = 21;
 VAR_8.dac_gain = 0;
 FUNC_14(VAR_7, &VAR_8);

 if (FUNC_1(VAR_7->pubpi.phy_rev, 1) || VAR_24->lcnphy_hw_iqcal_en) {

  FUNC_15(VAR_7, 30);

  FUNC_17(VAR_7, &VAR_8,
           (VAR_24->
     lcnphy_recal ? VAR_1 :
     VAR_0), 0);
 } else {
  FUNC_15(VAR_7, 16);
  FUNC_18(VAR_7);
 }

 FUNC_6(VAR_7, &VAR_20, &VAR_21, &VAR_22, &VAR_23);
 if ((FUNC_2((s8) VAR_22) == 15) && (FUNC_2((s8) VAR_23) == 15)) {
  if (FUNC_0(VAR_7->radio_chanspec)) {
   VAR_8.gm_gain = 255;
   VAR_8.pga_gain = 255;
   VAR_8.pad_gain = 0xf0;
   VAR_8.dac_gain = 0;
  } else {
   VAR_8.gm_gain = 7;
   VAR_8.pga_gain = 45;
   VAR_8.pad_gain = 186;
   VAR_8.dac_gain = 0;
  }

  if (FUNC_1(VAR_7->pubpi.phy_rev, 1)
      || VAR_24->lcnphy_hw_iqcal_en) {

   VAR_8.pga_gain = 0;
   VAR_8.pad_gain = 30;
   FUNC_15(VAR_7, 16);
   FUNC_17(VAR_7, &VAR_8,
            VAR_0, 0);
  } else {
   FUNC_18(VAR_7);
  }
 }

 FUNC_8(VAR_7, &VAR_11, &VAR_12);

 VAR_13 = FUNC_9(VAR_7);

 VAR_19.tbl_id = VAR_2;
 VAR_19.tbl_width = 32;
 VAR_19.tbl_ptr = &VAR_17;

 VAR_19.tbl_len = 1;
 VAR_19.tbl_offset = VAR_6;

 for (VAR_15 = 0; VAR_15 < 128; VAR_15++) {
  VAR_19.tbl_offset = VAR_3 + VAR_15;

  FUNC_11(VAR_7, &VAR_19);
  VAR_17 = (VAR_17 & 0xfff00000) |
        ((u32) (VAR_11 & 0x3FF) << 10) | (VAR_12 & 0x3ff);
  FUNC_19(VAR_7, &VAR_19);

  VAR_17 = VAR_13;
  VAR_19.tbl_offset = VAR_4 + VAR_15;
  FUNC_19(VAR_7, &VAR_19);
 }

 VAR_24->lcnphy_cal_results.txiqlocal_a = VAR_11;
 VAR_24->lcnphy_cal_results.txiqlocal_b = VAR_12;
 VAR_24->lcnphy_cal_results.txiqlocal_didq = VAR_13;
 VAR_24->lcnphy_cal_results.txiqlocal_ei0 = VAR_20;
 VAR_24->lcnphy_cal_results.txiqlocal_eq0 = VAR_21;
 VAR_24->lcnphy_cal_results.txiqlocal_fi0 = VAR_22;
 VAR_24->lcnphy_cal_results.txiqlocal_fq0 = VAR_23;

 FUNC_12(VAR_7, VAR_10);
 FUNC_13(VAR_7, VAR_14);
 FUNC_14(VAR_7, &VAR_9);

 if (VAR_18 != VAR_5)
  FUNC_16(VAR_7, VAR_18);
 else
  FUNC_15(VAR_7, VAR_16);
}
