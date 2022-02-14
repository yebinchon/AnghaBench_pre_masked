
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 struct page* FUNC_4 (struct inode*,int *,int ,int) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct page*,int) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct page*,int ,int,int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1, pgoff_t VAR_2,
     loff_t VAR_3, loff_t VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_0(VAR_1);
 struct page *VAR_6;

 if (!VAR_4)
  return 0;

 FUNC_3(VAR_5, 1);

 FUNC_5(VAR_5);
 VAR_6 = FUNC_4(VAR_1, ((void*)0), VAR_2, 0);
 FUNC_7(VAR_5);

 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 FUNC_8(VAR_6, VAR_0, 1, 1);
 FUNC_10(VAR_6, VAR_3, VAR_4);
 FUNC_9(VAR_6);
 FUNC_6(VAR_6, 1);
 return 0;
}
