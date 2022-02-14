
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seg_entry {scalar_t__ valid_blocks; } ;
struct f2fs_sb_info {int dummy; } ;
struct curseg_info {int segno; } ;
struct TYPE_2__ {int written_valid_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 unsigned int FUNC_1 (struct f2fs_sb_info*) ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 struct seg_entry* FUNC_5 (struct f2fs_sb_info*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2); VAR_3++) {
  struct seg_entry *VAR_5 = FUNC_5(VAR_2, VAR_3);
  if (!VAR_5->valid_blocks)
   FUNC_3(VAR_2, VAR_3);
  else
   FUNC_2(VAR_2)->written_valid_blocks +=
      VAR_5->valid_blocks;
 }


 for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++) {
  struct curseg_info *VAR_6 = FUNC_0(VAR_2, VAR_4);
  FUNC_4(VAR_2, VAR_6->segno);
 }
}
