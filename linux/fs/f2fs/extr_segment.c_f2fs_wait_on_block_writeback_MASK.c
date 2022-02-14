
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int block_t ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct page*,int ,int,int) ;
 struct page* FUNC_6 (int ,int ) ;

void FUNC_7(struct inode *VAR_1, block_t VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_0(VAR_1);
 struct page *VAR_4;

 if (!FUNC_3(VAR_1))
  return;

 if (!FUNC_2(VAR_2))
  return;

 VAR_4 = FUNC_6(FUNC_1(VAR_3), VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_4, VAR_0, 1, 1);
  FUNC_4(VAR_4, 1);
 }
}
