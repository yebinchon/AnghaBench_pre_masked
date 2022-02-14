
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int ,int ,int ,int) ;
 struct page* FUNC_4 (int ,int ) ;

void FUNC_5(struct f2fs_sb_info *VAR_2, pgoff_t VAR_3)
{
 struct page *VAR_4;
 bool VAR_5 = 0;

 VAR_4 = FUNC_4(FUNC_0(VAR_2), VAR_3);
 if (!VAR_4 || !FUNC_1(VAR_4))
  VAR_5 = 1;
 FUNC_2(VAR_4, 0);

 if (VAR_5)
  FUNC_3(VAR_2, VAR_3, VAR_0, VAR_1, 1);
}
