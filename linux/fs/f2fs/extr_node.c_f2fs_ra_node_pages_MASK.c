
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct blk_plug {int dummy; } ;
typedef int nid_t ;


 struct f2fs_sb_info* FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct blk_plug*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct page*,int,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct page *VAR_1, int VAR_2, int VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_1);
 struct blk_plug VAR_5;
 int VAR_6, VAR_7;
 nid_t VAR_8;

 FUNC_2(&VAR_5);


 VAR_7 = VAR_2 + VAR_3;
 VAR_7 = FUNC_5(VAR_7, VAR_0);
 for (VAR_6 = VAR_2; VAR_6 < VAR_7; VAR_6++) {
  VAR_8 = FUNC_4(VAR_1, VAR_6, 0);
  FUNC_3(VAR_4, VAR_8);
 }

 FUNC_1(&VAR_5);
}
