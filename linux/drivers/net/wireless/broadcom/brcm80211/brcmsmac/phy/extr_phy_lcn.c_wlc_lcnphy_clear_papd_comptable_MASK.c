
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int temp_offset ;
struct phytbl_info {int* tbl_ptr; int tbl_len; int tbl_width; scalar_t__ tbl_offset; int tbl_id; } ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_1)
{
 u32 VAR_2;
 struct phytbl_info VAR_3;
 u32 VAR_4[128];
 VAR_3.tbl_ptr = VAR_4;
 VAR_3.tbl_len = 128;
 VAR_3.tbl_id = VAR_0;
 VAR_3.tbl_width = 32;
 VAR_3.tbl_offset = 0;

 FUNC_0(VAR_4, 0, sizeof(VAR_4));
 for (VAR_2 = 1; VAR_2 < 128; VAR_2 += 2)
  VAR_4[VAR_2] = 0x80000;

 FUNC_1(VAR_1, &VAR_3);
 return;
}
