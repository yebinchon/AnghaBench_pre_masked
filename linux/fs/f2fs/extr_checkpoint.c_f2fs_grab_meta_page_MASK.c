
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 struct address_space* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 () ;
 struct page* FUNC_4 (struct address_space*,int ,int) ;
 int FUNC_5 (struct page*,int ,int,int) ;

struct page *FUNC_6(struct f2fs_sb_info *VAR_1, pgoff_t VAR_2)
{
 struct address_space *VAR_3 = FUNC_0(VAR_1);
 struct page *VAR_4 = ((void*)0);
repeat:
 VAR_4 = FUNC_4(VAR_3, VAR_2, 0);
 if (!VAR_4) {
  FUNC_3();
  goto repeat;
 }
 FUNC_5(VAR_4, VAR_0, 1, 1);
 if (!FUNC_1(VAR_4))
  FUNC_2(VAR_4);
 return VAR_4;
}
