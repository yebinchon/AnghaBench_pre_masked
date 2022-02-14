
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int bitmap_size; int nat_bitmap; int nat_bitmap_mir; } ;


 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (void*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct f2fs_sb_info *VAR_0, void *VAR_1)
{
 struct f2fs_nm_info *VAR_2 = FUNC_0(VAR_0);






 FUNC_3(VAR_1, VAR_2->nat_bitmap, VAR_2->bitmap_size);
}
