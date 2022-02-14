
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct phytbl_info {int tbl_width; int* tbl_ptr; int tbl_len; scalar_t__ tbl_offset; int tbl_id; } ;
struct lcnphy_rx_iqcomp {int dummy; } ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy_lcnphy {scalar_t__ lcnphy_full_cal_channel; int lcnphy_current_index; } ;
struct TYPE_5__ {int phy_rev; } ;
struct TYPE_4__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int phy_forcecal; int* txpa_2g; TYPE_3__* sh; TYPE_2__ pubpi; int d11core; int radio_chanspec; int phy_lastcal; TYPE_1__ u; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_6__ {int physhim; int now; } ;


 int FUNC_0 (struct lcnphy_rx_iqcomp*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 struct lcnphy_rx_iqcomp* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy_pub*) ;
 int FUNC_11 (struct brcms_phy*,int *,int ,int,int,int,int) ;
 int FUNC_12 (struct brcms_phy*,int ) ;
 int FUNC_13 (struct brcms_phy*,int ) ;
 int FUNC_14 (int,int,int,int) ;
 scalar_t__ FUNC_15 (struct brcms_phy*) ;
 int FUNC_16 (struct brcms_phy*) ;
 int FUNC_17 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_18(struct brcms_phy *VAR_5)
{
 bool VAR_6, VAR_7;
 const struct lcnphy_rx_iqcomp *VAR_8;
 int VAR_9;
 u16 VAR_10 = FUNC_9(VAR_5);
 s8 VAR_11;
 struct phytbl_info VAR_12;
 s32 VAR_13, VAR_14, VAR_15;
 s32 VAR_16, VAR_17, VAR_18;
 struct brcms_phy_lcnphy *VAR_19 = VAR_5->u.pi_lcnphy;

 VAR_5->phy_lastcal = VAR_5->sh->now;
 VAR_5->phy_forcecal = 0;
 VAR_7 =
  (VAR_19->lcnphy_full_cal_channel !=
   FUNC_1(VAR_5->radio_chanspec));
 VAR_19->lcnphy_full_cal_channel = FUNC_1(VAR_5->radio_chanspec);
 VAR_11 = VAR_19->lcnphy_current_index;

 VAR_6 = (0 == (FUNC_4(VAR_5->d11core, FUNC_2(VAR_4)) &
    VAR_1));
 if (!VAR_6) {
  FUNC_5(VAR_5->sh->physhim, VAR_2, 10000);
  FUNC_7(VAR_5->sh->physhim);
 }

 FUNC_8(VAR_5, 1);

 FUNC_16(VAR_5);

 VAR_8 = VAR_3;
 VAR_9 = FUNC_0(VAR_3);

 if (FUNC_3(VAR_5->pubpi.phy_rev, 1))
  FUNC_11(VAR_5, ((void*)0), 0, 1, 0, 1, 40);
 else
  FUNC_11(VAR_5, ((void*)0), 0, 1, 0, 1, 127);

 if (FUNC_15(VAR_5)) {

  FUNC_10((struct brcms_phy_pub *) VAR_5);

  VAR_14 = VAR_5->txpa_2g[0];
  VAR_15 = VAR_5->txpa_2g[1];
  VAR_13 = VAR_5->txpa_2g[2];
  VAR_18 = FUNC_14(125, VAR_13, VAR_14, VAR_15);

  VAR_12.tbl_id = VAR_0;
  VAR_12.tbl_width = 32;
  VAR_12.tbl_ptr = &VAR_17;
  VAR_12.tbl_len = 1;
  VAR_12.tbl_offset = 0;
  for (VAR_16 = 0; VAR_16 < 128; VAR_16++) {
   VAR_17 = FUNC_14(VAR_16, VAR_13, VAR_14, VAR_15);
   VAR_17 = (VAR_17 < VAR_18) ? VAR_18 : VAR_17;
   FUNC_17(VAR_5, &VAR_12);
   VAR_12.tbl_offset++;
  }
 }

 FUNC_12(VAR_5, VAR_11);
 FUNC_13(VAR_5, VAR_10);
 FUNC_8(VAR_5, 0);
 if (!VAR_6)
  FUNC_6(VAR_5->sh->physhim);
}
