
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct phytbl_info {int* tbl_ptr; int tbl_len; int tbl_width; scalar_t__ tbl_offset; int tbl_id; } ;
struct cordic_iq {int i; int q; } ;
struct brcms_phy_lcnphy {scalar_t__ lcnphy_spurmod; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int phy_tx_tone_freq; TYPE_1__ u; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct cordic_iq FUNC_2 (int) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,int,int,int ,int) ;
 int FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (struct brcms_phy*,struct phytbl_info*) ;
 int FUNC_8 (struct brcms_phy*,int,int) ;

void
FUNC_9(struct brcms_phy *VAR_1, s32 VAR_2, u16 VAR_3,
    bool VAR_4)
{
 u8 VAR_5;
 u16 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 s32 VAR_10 = 0, VAR_11 = 0;
 struct cordic_iq VAR_12;
 u32 VAR_13[64];
 u16 VAR_14, VAR_15;
 struct phytbl_info VAR_16;
 struct brcms_phy_lcnphy *VAR_17 = VAR_1->u.pi_lcnphy;

 VAR_1->phy_tx_tone_freq = VAR_2;

 FUNC_4(VAR_1, 1);

 VAR_5 = 40;
 if (VAR_17->lcnphy_spurmod) {
  FUNC_8(VAR_1, 0x942, 0x2);
  FUNC_8(VAR_1, 0x93b, 0x0);
  FUNC_8(VAR_1, 0x93c, 0x0);
  FUNC_6(VAR_1, 0);
 }

 if (VAR_2) {
  VAR_8 = 1;
  do {
   VAR_9 = VAR_5 * 1000 * VAR_8;
   VAR_6 = VAR_9 / FUNC_1(VAR_2);
   VAR_8++;
  } while ((VAR_6 * (u32) (FUNC_1(VAR_2))) != VAR_9);
 } else
  VAR_6 = 2;

 VAR_11 = ((VAR_2 * 36) / VAR_5) / 100;
 VAR_10 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {

  VAR_12 = FUNC_2(VAR_10);

  VAR_10 += VAR_11;

  VAR_14 = (u16)(FUNC_0(VAR_12.i * VAR_3) & 0x3ff);
  VAR_15 = (u16)(FUNC_0(VAR_12.q * VAR_3) & 0x3ff);
  VAR_13[VAR_7] = (VAR_14 << 10) | VAR_15;
 }

 FUNC_3(VAR_1, 0x6d6, (0x3 << 0), 0 << 0);

 FUNC_3(VAR_1, 0x6da, (0x1 << 3), 1 << 3);

 VAR_16.tbl_ptr = VAR_13;
 VAR_16.tbl_len = VAR_6;
 VAR_16.tbl_id = VAR_0;
 VAR_16.tbl_offset = 0;
 VAR_16.tbl_width = 32;
 FUNC_7(VAR_1, &VAR_16);

 FUNC_5(VAR_1, VAR_6, 0xffff, 0, VAR_4);
}
