
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int type; } ;
struct f2fs_sb_info {int dummy; } ;


 int FUNC_0 (struct f2fs_sb_info*,unsigned int) ;
 struct seg_entry* FUNC_1 (struct f2fs_sb_info*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct f2fs_sb_info *VAR_0, int VAR_1,
     unsigned int VAR_2, int VAR_3)
{
 struct seg_entry *VAR_4 = FUNC_1(VAR_0, VAR_2);
 VAR_4->type = VAR_1;
 if (VAR_3)
  FUNC_0(VAR_0, VAR_2);
}
