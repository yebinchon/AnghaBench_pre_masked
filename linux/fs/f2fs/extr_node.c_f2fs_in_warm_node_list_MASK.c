
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct f2fs_sb_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct page*) ;

bool FUNC_3(struct f2fs_sb_info *VAR_0, struct page *VAR_1)
{
 return FUNC_1(VAR_0) == VAR_1->mapping &&
   FUNC_0(VAR_1) && FUNC_2(VAR_1);
}
