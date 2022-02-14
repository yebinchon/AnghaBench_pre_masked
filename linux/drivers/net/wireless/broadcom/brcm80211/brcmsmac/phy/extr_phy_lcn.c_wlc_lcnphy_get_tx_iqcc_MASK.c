
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phytbl_info {int tbl_len; int tbl_offset; int tbl_width; scalar_t__ tbl_id; int * tbl_ptr; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,struct phytbl_info*) ;

void FUNC_1(struct brcms_phy *VAR_0, u16 *VAR_1, u16 *VAR_2)
{
 u16 VAR_3[2];
 struct phytbl_info VAR_4;

 VAR_4.tbl_ptr = VAR_3;
 VAR_4.tbl_len = 2;
 VAR_4.tbl_id = 0;
 VAR_4.tbl_offset = 80;
 VAR_4.tbl_width = 16;
 FUNC_0(VAR_0, &VAR_4);

 *VAR_1 = VAR_3[0];
 *VAR_2 = VAR_3[1];
}
