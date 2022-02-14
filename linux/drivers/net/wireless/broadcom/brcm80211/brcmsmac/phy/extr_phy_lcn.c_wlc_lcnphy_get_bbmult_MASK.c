
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct phytbl_info {int* tbl_ptr; int tbl_len; int tbl_offset; int tbl_width; int tbl_id; } ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_phy*,struct phytbl_info*) ;

__attribute__((used)) static u8 FUNC_1(struct brcms_phy *VAR_1)
{
 u16 VAR_2;
 struct phytbl_info VAR_3;

 VAR_3.tbl_ptr = &VAR_2;
 VAR_3.tbl_len = 1;
 VAR_3.tbl_id = VAR_0;
 VAR_3.tbl_offset = 87;
 VAR_3.tbl_width = 16;
 FUNC_0(VAR_1, &VAR_3);

 return (u8) ((VAR_2 & 0xff00) >> 8);
}
