
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct phytbl_info {int tbl_width; int tbl_len; int tbl_offset; int * tbl_ptr; int tbl_id; } ;
struct brcms_phy_lcnphy {scalar_t__ lcnphy_current_index; } ;
struct TYPE_3__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_2__* sh; int d11core; TYPE_1__ u; } ;
typedef scalar_t__ s8 ;
struct TYPE_4__ {int physhim; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int VAR_12 ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (struct brcms_phy*) ;
 int * VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct brcms_phy*) ;
 int FUNC_11 (struct brcms_phy*,int) ;
 int FUNC_12 (struct brcms_phy*,int ) ;
 int FUNC_13 (struct brcms_phy*,struct phytbl_info*) ;
 int FUNC_14 (struct brcms_phy*,int,int ) ;
 int FUNC_15 (struct brcms_phy*,int ,int) ;
 int FUNC_16 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_17(struct brcms_phy *VAR_14, u8 VAR_15)
{
 bool VAR_16;
 u16 VAR_17;
 u8 VAR_18, VAR_19, VAR_20;
 u16 VAR_21;
 struct phytbl_info VAR_22;
 u32 VAR_23;
 u8 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28,
    VAR_29;
 u16 VAR_30[14];
 s8 VAR_31;
 int VAR_32;
 struct brcms_phy_lcnphy *VAR_33 = VAR_14->u.pi_lcnphy;
 FUNC_7(999);

 VAR_24 = (u8) FUNC_5(VAR_14, VAR_5);
 VAR_25 = (u8) FUNC_5(VAR_14, VAR_8);
 VAR_26 = (u8) FUNC_5(VAR_14, VAR_10);
 VAR_27 = (u8) FUNC_5(VAR_14, VAR_4);
 VAR_28 = (u8) FUNC_5(VAR_14, VAR_6);
 VAR_29 = (u8) FUNC_5(VAR_14, VAR_9);

 for (VAR_32 = 0; VAR_32 < 14; VAR_32++)
  VAR_30[VAR_32] = FUNC_4(VAR_14, VAR_13[VAR_32]);
 VAR_16 = (0 == (FUNC_1(VAR_14->d11core, FUNC_0(VAR_12)) &
    VAR_2));
 if (!VAR_16)
  FUNC_9(VAR_14->sh->physhim);
 VAR_17 = FUNC_5(VAR_14, 0x4a4);

 FUNC_12(VAR_14, VAR_1);
 VAR_31 = VAR_33->lcnphy_current_index;
 FUNC_11(VAR_14, 127);
 FUNC_3(VAR_14, VAR_5, 0x1, 0x1);
 FUNC_3(VAR_14, VAR_8, 0x10, 0x1 << 4);
 FUNC_3(VAR_14, VAR_10, 0x4, 0x1 << 2);
 FUNC_2(VAR_14, 0x503, (0x1 << 0), (0) << 0);

 FUNC_2(VAR_14, 0x503, (0x1 << 2), (0) << 2);

 FUNC_2(VAR_14, 0x4a4, (0x1 << 14), (0) << 14);

 FUNC_2(VAR_14, 0x4a4, (0x1 << 15), (0) << 15);

 FUNC_2(VAR_14, 0x4d0, (0x1 << 5), (0) << 5);

 FUNC_2(VAR_14, 0x4a5, (0xff << 0), (255) << 0);

 FUNC_2(VAR_14, 0x4a5, (0x7 << 12), (5) << 12);

 FUNC_2(VAR_14, 0x4a5, (0x7 << 8), (0) << 8);

 FUNC_2(VAR_14, 0x40d, (0xff << 0), (64) << 0);

 FUNC_2(VAR_14, 0x40d, (0x7 << 8), (6) << 8);

 FUNC_2(VAR_14, 0x4a2, (0xff << 0), (64) << 0);

 FUNC_2(VAR_14, 0x4a2, (0x7 << 8), (6) << 8);

 FUNC_2(VAR_14, 0x4d9, (0x7 << 4), (2) << 4);

 FUNC_2(VAR_14, 0x4d9, (0x7 << 8), (3) << 8);

 FUNC_2(VAR_14, 0x4d9, (0x7 << 12), (1) << 12);

 FUNC_2(VAR_14, 0x4da, (0x1 << 12), (0) << 12);

 FUNC_2(VAR_14, 0x4da, (0x1 << 13), (1) << 13);

 FUNC_2(VAR_14, 0x4a6, (0x1 << 15), (1) << 15);

 FUNC_16(VAR_14, VAR_6, 0xC);

 FUNC_3(VAR_14, VAR_4, 0x8, 0x1 << 3);

 FUNC_2(VAR_14, 0x938, (0x1 << 2), (1) << 2);

 FUNC_2(VAR_14, 0x939, (0x1 << 2), (1) << 2);

 FUNC_2(VAR_14, 0x4a4, (0x1 << 12), (1) << 12);

 VAR_23 = FUNC_10(VAR_14);
 VAR_22.tbl_id = VAR_0;
 VAR_22.tbl_width = 16;
 VAR_22.tbl_len = 1;
 VAR_22.tbl_ptr = &VAR_23;
 VAR_22.tbl_offset = 6;
 FUNC_13(VAR_14, &VAR_22);
 if (VAR_15 == VAR_11) {
  FUNC_2(VAR_14, 0x4d7, (0x1 << 3), (1) << 3);

  FUNC_2(VAR_14, 0x4d7, (0x7 << 12), (1) << 12);

  VAR_18 = 8;
  VAR_19 = 0x4;
  VAR_20 = 2;
  FUNC_3(VAR_14, VAR_7, 0x20, 1 << 5);
 } else {
  FUNC_2(VAR_14, 0x4d7, (0x1 << 3), (1) << 3);

  FUNC_2(VAR_14, 0x4d7, (0x7 << 12), (3) << 12);

  VAR_18 = 7;
  VAR_19 = 0xa;
  VAR_20 = 2;
 }
 VAR_21 =
  (u16) ((2 << 8) | (VAR_18 << 4) | VAR_19);
 FUNC_2(VAR_14, 0x4d8, (0x1 << 0), (1) << 0);

 FUNC_2(VAR_14, 0x4d8, (0x3ff << 2), (VAR_21) << 2);

 FUNC_2(VAR_14, 0x4d8, (0x1 << 1), (1) << 1);

 FUNC_2(VAR_14, 0x4d8, (0x7 << 12), (VAR_20) << 12);

 FUNC_2(VAR_14, 0x4d0, (0x1 << 5), (1) << 5);

 FUNC_16(VAR_14, VAR_9, 0x6);

 FUNC_14(VAR_14, 1, VAR_3);
 if (!FUNC_6(VAR_14))
  FUNC_7(10);

 FUNC_16(VAR_14, VAR_5, (u16) VAR_24);
 FUNC_16(VAR_14, VAR_8, (u16) VAR_25);
 FUNC_16(VAR_14, VAR_10, (u16) VAR_26);
 FUNC_16(VAR_14, VAR_4, (u16) VAR_27);
 FUNC_16(VAR_14, VAR_6, (u16) VAR_28);
 FUNC_16(VAR_14, VAR_9, (u16) VAR_29);
 for (VAR_32 = 0; VAR_32 < 14; VAR_32++)
  FUNC_15(VAR_14, VAR_13[VAR_32], VAR_30[VAR_32]);
 FUNC_11(VAR_14, (int)VAR_31);

 FUNC_16(VAR_14, 0x4a4, VAR_17);
 if (!VAR_16)
  FUNC_8(VAR_14->sh->physhim);
 FUNC_7(999);
}
