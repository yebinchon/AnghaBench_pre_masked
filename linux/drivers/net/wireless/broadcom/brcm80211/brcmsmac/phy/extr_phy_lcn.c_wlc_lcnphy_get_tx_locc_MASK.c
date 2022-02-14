
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phytbl_info {int tbl_width; int tbl_len; int tbl_offset; int * tbl_ptr; scalar_t__ tbl_id; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,struct phytbl_info*) ;

u16 FUNC_1(struct brcms_phy *VAR_0)
{
 struct phytbl_info VAR_1;
 u16 VAR_2;

 VAR_1.tbl_id = 0;
 VAR_1.tbl_width = 16;
 VAR_1.tbl_ptr = &VAR_2;
 VAR_1.tbl_len = 1;
 VAR_1.tbl_offset = 85;
 FUNC_0(VAR_0, &VAR_1);

 return VAR_2;
}
