
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct phytbl_info {int tbl_width; int tbl_len; int* tbl_ptr; int tbl_offset; int tbl_id; } ;
struct brcms_phy {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_2, s8 VAR_3)
{
 u32 VAR_4[4] = { 22, 22, 22, 22 };
 u32 VAR_5, VAR_6;
 int VAR_7;
 u16 VAR_8;
 struct phytbl_info VAR_9;

 if (FUNC_2(VAR_2))
  return;

 FUNC_0(VAR_2, 0x4a4, (0x1 << 14), (0x1) << 14);

 FUNC_0(VAR_2, 0x4a4, (0x1 << 14), (0x0) << 14);

 FUNC_1(VAR_2, 0x6da, 0x0040);

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  VAR_4[VAR_7] -= VAR_6;
 VAR_9.tbl_id = VAR_0;
 VAR_9.tbl_width = 32;
 VAR_9.tbl_len = 4;
 VAR_9.tbl_ptr = VAR_4;
 VAR_9.tbl_offset = VAR_1;
 FUNC_3(VAR_2, &VAR_9);
 VAR_5 = 0;
 VAR_9.tbl_len = 1;
 VAR_9.tbl_ptr = &VAR_5;
 for (VAR_7 = 836; VAR_7 < 862; VAR_7++) {
  VAR_9.tbl_offset = VAR_7;
  FUNC_3(VAR_2, &VAR_9);
 }

 FUNC_0(VAR_2, 0x4a4, (0x1 << 15), (0x1) << 15);

 FUNC_0(VAR_2, 0x4a4, (0x1 << 14), (0x1) << 14);

 FUNC_0(VAR_2, 0x4a4, (0x1 << 13), (0x1) << 13);

 FUNC_0(VAR_2, 0x4b0, (0x1 << 7), (0) << 7);

 FUNC_0(VAR_2, 0x43b, (0x1 << 6), (0) << 6);

 FUNC_0(VAR_2, 0x4a9, (0x1 << 15), (1) << 15);

 VAR_8 = (u16) (VAR_3 * 2);
 FUNC_0(VAR_2, 0x4a9, (0x1ff << 0), (VAR_8) << 0);

 FUNC_0(VAR_2, 0x6a3, (0x1 << 4), (0) << 4);

}
