
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode {int i_inline; int i_extra_isize; } ;
struct TYPE_2__ {struct f2fs_inode i; } ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_inode*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct f2fs_sb_info *VAR_2, struct page *VAR_3)
{
 struct f2fs_inode *VAR_4 = &FUNC_1(VAR_3)->i;

 if (!FUNC_3(VAR_2))
  return 0;

 if (!FUNC_2(VAR_3) || !(VAR_4->i_inline & VAR_0))
  return 0;

 if (!FUNC_0(VAR_4, FUNC_4(VAR_4->i_extra_isize),
    VAR_1))
  return 0;

 return 1;
}
