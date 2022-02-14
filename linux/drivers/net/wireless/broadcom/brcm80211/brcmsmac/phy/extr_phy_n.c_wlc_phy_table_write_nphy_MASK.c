
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct phytbl_info {void const* tbl_ptr; void* tbl_width; void* tbl_offset; void* tbl_len; void* tbl_id; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,struct phytbl_info*) ;

void
FUNC_1(struct brcms_phy *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3,
    u32 VAR_4, const void *VAR_5)
{
 struct phytbl_info VAR_6;

 VAR_6.tbl_id = VAR_1;
 VAR_6.tbl_len = VAR_2;
 VAR_6.tbl_offset = VAR_3;
 VAR_6.tbl_width = VAR_4;
 VAR_6.tbl_ptr = VAR_5;
 FUNC_0(VAR_0, &VAR_6);
}
