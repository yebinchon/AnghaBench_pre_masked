
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int for_reclaim; } ;
struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*,struct writeback_control*,int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 struct page* FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (struct page*,int ,int,int) ;
 int FUNC_8 (int ,void*,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct f2fs_sb_info *VAR_4,
 void *VAR_5, block_t VAR_6)
{
 struct writeback_control VAR_7 = {
  .for_reclaim = 0,
 };






 struct page *VAR_8 = FUNC_4(VAR_4, VAR_6);
 int VAR_9;

 FUNC_7(VAR_8, VAR_1, 1, 1);

 FUNC_8(FUNC_9(VAR_8), VAR_5, VAR_3);

 FUNC_10(VAR_8);
 if (FUNC_11(!FUNC_1(VAR_8)))
  FUNC_2(VAR_4, 1);


 VAR_9 = FUNC_0(VAR_8, &VAR_7, VAR_0);
 if (FUNC_11(VAR_9 && FUNC_3(VAR_4))) {
  FUNC_5(VAR_8, 1);
  return;
 }

 FUNC_2(VAR_4, VAR_9);
 FUNC_5(VAR_8, 0);


 FUNC_6(VAR_4, VAR_2);
}
