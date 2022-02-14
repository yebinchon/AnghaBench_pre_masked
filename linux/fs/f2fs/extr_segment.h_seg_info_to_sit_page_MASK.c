
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int dummy; } ;
struct page {int dummy; } ;
struct f2fs_sit_entry {int dummy; } ;
struct f2fs_sit_block {struct f2fs_sit_entry* entries; } ;
struct f2fs_sb_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct seg_entry*,struct f2fs_sit_entry*) ;
 struct seg_entry* FUNC_2 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_3 (struct f2fs_sit_block*,int ,int ) ;
 unsigned int FUNC_4 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_5 (struct page*) ;

__attribute__((used)) static inline void FUNC_6(struct f2fs_sb_info *VAR_2,
    struct page *VAR_3, unsigned int VAR_4)
{
 struct f2fs_sit_block *VAR_5;
 struct seg_entry *VAR_6;
 struct f2fs_sit_entry *VAR_7;
 unsigned int VAR_8 = FUNC_4(VAR_4 + VAR_1,
     (unsigned long)FUNC_0(VAR_2));
 int VAR_9;

 VAR_5 = (struct f2fs_sit_block *)FUNC_5(VAR_3);
 FUNC_3(VAR_5, 0, VAR_0);
 for (VAR_9 = 0; VAR_9 < VAR_8 - VAR_4; VAR_9++) {
  VAR_7 = &VAR_5->entries[VAR_9];
  VAR_6 = FUNC_2(VAR_2, VAR_4 + VAR_9);
  FUNC_1(VAR_6, VAR_7);
 }
}
