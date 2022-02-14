
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {struct sec_entry* sec_entries; } ;
struct sec_entry {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;


 size_t FUNC_0 (struct f2fs_sb_info*,unsigned int) ;
 struct sit_info* FUNC_1 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline struct sec_entry *FUNC_2(struct f2fs_sb_info *VAR_0,
      unsigned int VAR_1)
{
 struct sit_info *VAR_2 = FUNC_1(VAR_0);
 return &VAR_2->sec_entries[FUNC_0(VAR_0, VAR_1)];
}
