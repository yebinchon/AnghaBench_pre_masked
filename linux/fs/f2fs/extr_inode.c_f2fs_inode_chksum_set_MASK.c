
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode {int i_inode_checksum; } ;
struct TYPE_2__ {struct f2fs_inode i; } ;


 TYPE_1__* FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct f2fs_sb_info*,struct page*) ;
 int FUNC_3 (struct f2fs_sb_info*,struct page*) ;

void FUNC_4(struct f2fs_sb_info *VAR_0, struct page *VAR_1)
{
 struct f2fs_inode *VAR_2 = &FUNC_0(VAR_1)->i;

 if (!FUNC_2(VAR_0, VAR_1))
  return;

 VAR_2->i_inode_checksum = FUNC_1(FUNC_3(VAR_0, VAR_1));
}
