
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int cur_cp_pack; } ;



__attribute__((used)) static inline void FUNC_0(struct f2fs_sb_info *VAR_0)
{
 VAR_0->cur_cp_pack = (VAR_0->cur_cp_pack == 1) ? 2 : 1;
}
