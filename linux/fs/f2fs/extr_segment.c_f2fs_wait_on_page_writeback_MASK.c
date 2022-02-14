
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef enum page_type { ____Placeholder_page_type } page_type ;


 struct f2fs_sb_info* FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct f2fs_sb_info*,int) ;
 int FUNC_3 (struct f2fs_sb_info*,int *,struct page*,int ,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

void FUNC_6(struct page *VAR_0,
    enum page_type VAR_1, bool VAR_2, bool VAR_3)
{
 if (FUNC_1(VAR_0)) {
  struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_0);

  FUNC_3(VAR_4, ((void*)0), VAR_0, 0, VAR_1);
  if (VAR_2) {
   FUNC_5(VAR_0);
   FUNC_2(VAR_4, VAR_3 && FUNC_1(VAR_0));
  } else {
   FUNC_4(VAR_0);
  }
 }
}
