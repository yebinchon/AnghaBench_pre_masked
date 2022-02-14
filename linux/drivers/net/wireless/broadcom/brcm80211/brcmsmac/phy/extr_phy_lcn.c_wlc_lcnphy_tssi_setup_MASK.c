
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct phytbl_info {int tbl_width; int* tbl_ptr; int tbl_len; int tbl_offset; int tbl_id; } ;
struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {TYPE_2__ pubpi; int radio_chanspec; TYPE_1__* sh; } ;
typedef enum lcnphy_tssi_mode { ____Placeholder_lcnphy_tssi_mode } lcnphy_tssi_mode ;
struct TYPE_3__ {int boardflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int,int) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*,int) ;
 int FUNC_8 (struct brcms_phy*) ;
 int FUNC_9 (struct brcms_phy*,struct phytbl_info*) ;
 int FUNC_10 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct brcms_phy *VAR_13)
{
 struct phytbl_info VAR_14;
 u32 VAR_15, VAR_16;
 enum lcnphy_tssi_mode VAR_17;
 u8 VAR_18;

 if (VAR_13->sh->boardflags & VAR_0) {
  VAR_18 = 0x1;
  VAR_17 = VAR_3;
 } else {
  VAR_18 = 0xe;
  VAR_17 = VAR_4;
 }
 VAR_14.tbl_id = VAR_2;
 VAR_14.tbl_width = 32;
 VAR_14.tbl_ptr = &VAR_16;
 VAR_14.tbl_len = 1;
 VAR_14.tbl_offset = 0;
 for (VAR_16 = 0; VAR_16 < 128; VAR_16++) {
  FUNC_9(VAR_13, &VAR_14);
  VAR_14.tbl_offset++;
 }
 VAR_14.tbl_offset = 704;
 for (VAR_16 = 0; VAR_16 < 128; VAR_16++) {
  FUNC_9(VAR_13, &VAR_14);
  VAR_14.tbl_offset++;
 }
 FUNC_2(VAR_13, 0x503, (0x1 << 0), (0) << 0);

 FUNC_2(VAR_13, 0x503, (0x1 << 2), (0) << 2);

 FUNC_2(VAR_13, 0x503, (0x1 << 4), (1) << 4);

 FUNC_7(VAR_13, VAR_17);
 FUNC_2(VAR_13, 0x4a4, (0x1 << 14), (0) << 14);

 FUNC_2(VAR_13, 0x4a4, (0x1 << 15), (1) << 15);

 FUNC_2(VAR_13, 0x4d0, (0x1 << 5), (0) << 5);

 FUNC_2(VAR_13, 0x4a4, (0x1ff << 0), (0) << 0);

 FUNC_2(VAR_13, 0x4a5, (0xff << 0), (255) << 0);

 FUNC_2(VAR_13, 0x4a5, (0x7 << 12), (5) << 12);

 FUNC_2(VAR_13, 0x4a5, (0x7 << 8), (0) << 8);

 FUNC_2(VAR_13, 0x40d, (0xff << 0), (64) << 0);

 FUNC_2(VAR_13, 0x40d, (0x7 << 8), (4) << 8);

 FUNC_2(VAR_13, 0x4a2, (0xff << 0), (64) << 0);

 FUNC_2(VAR_13, 0x4a2, (0x7 << 8), (4) << 8);

 FUNC_2(VAR_13, 0x4d0, (0x1ff << 6), (0) << 6);

 FUNC_2(VAR_13, 0x4a8, (0xff << 0), (0x1) << 0);

 FUNC_4(VAR_13);

 FUNC_2(VAR_13, 0x4a6, (0x1 << 15), (1) << 15);

 FUNC_2(VAR_13, 0x4a6, (0x1ff << 0), (0xff) << 0);

 FUNC_2(VAR_13, 0x49a, (0x1ff << 0), (0xff) << 0);

 if (FUNC_1(VAR_13->pubpi.phy_rev, 2)) {
  FUNC_3(VAR_13, VAR_7, 0xf, VAR_18);
  FUNC_3(VAR_13, VAR_11, 0x4, 0x4);
 } else {
  FUNC_3(VAR_13, VAR_7, 0x1e, VAR_18 << 1);
  FUNC_3(VAR_13, VAR_10, 0x1, 1);
  FUNC_3(VAR_13, VAR_12, 0x8, 1 << 3);
 }

 FUNC_10(VAR_13, VAR_6, 0xc);

 if (FUNC_1(VAR_13->pubpi.phy_rev, 2)) {
  FUNC_3(VAR_13, VAR_10, 0x1, 1);
 } else {
  if (FUNC_0(VAR_13->radio_chanspec))
   FUNC_3(VAR_13, VAR_10, 0x2, 1 << 1);
  else
   FUNC_3(VAR_13, VAR_10, 0x2, 0 << 1);
 }

 if (FUNC_1(VAR_13->pubpi.phy_rev, 2))
  FUNC_3(VAR_13, VAR_10, 0x2, 1 << 1);
 else
  FUNC_3(VAR_13, VAR_10, 0x4, 1 << 2);

 FUNC_3(VAR_13, VAR_12, 0x1, 1 << 0);

 FUNC_3(VAR_13, VAR_5, 0x8, 1 << 3);

 if (!FUNC_8(VAR_13))
  FUNC_2(VAR_13, 0x4d7,
       (0x1 << 3) | (0x7 << 12), 0 << 3 | 2 << 12);

 VAR_15 = FUNC_6(VAR_13);
 VAR_14.tbl_id = VAR_1;
 VAR_14.tbl_width = 16;
 VAR_14.tbl_ptr = &VAR_15;
 VAR_14.tbl_len = 1;
 VAR_14.tbl_offset = 6;
 FUNC_9(VAR_13, &VAR_14);

 FUNC_2(VAR_13, 0x938, (0x1 << 2), (1) << 2);

 FUNC_2(VAR_13, 0x939, (0x1 << 2), (1) << 2);

 FUNC_2(VAR_13, 0x4a4, (0x1 << 12), (1) << 12);

 FUNC_2(VAR_13, 0x4d7, (0x1 << 2), (1) << 2);

 FUNC_2(VAR_13, 0x4d7, (0xf << 8), (0) << 8);

 FUNC_3(VAR_13, VAR_8, 0xff, 0x0);
 FUNC_3(VAR_13, VAR_9, 0x3, 0x0);
 FUNC_3(VAR_13, VAR_12, 0x8, 0x8);

 FUNC_5(VAR_13);
}
