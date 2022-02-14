
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct f2fs_sb_info*,int ,int) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;

struct page *FUNC_4(struct f2fs_sb_info *VAR_2, pgoff_t VAR_3)
{
 struct page *VAR_4;
 int VAR_5 = 0;

retry:
 VAR_4 = FUNC_2(VAR_2, VAR_3, 1);
 if (FUNC_0(VAR_4)) {
  if (FUNC_1(VAR_4) == -VAR_1 &&
    ++VAR_5 <= VAR_0)
   goto retry;
  FUNC_3(VAR_2, 0);
 }
 return VAR_4;
}
