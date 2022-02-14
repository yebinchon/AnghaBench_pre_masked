
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_dentry_ptr {int dummy; } ;
struct f2fs_dentry_block {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,struct inode*,struct f2fs_dentry_ptr*) ;
 struct page* FUNC_3 (struct inode*,struct page*,int ,int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct inode*,struct page*) ;
 int FUNC_6 (struct page*,int) ;
 int FUNC_7 (int *,struct f2fs_dentry_ptr*,struct f2fs_dentry_block*) ;
 struct f2fs_dentry_block* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_0,
  struct inode *VAR_1, struct page *VAR_2)
{
 struct page *VAR_3;
 struct f2fs_dentry_block *VAR_4;
 struct f2fs_dentry_ptr VAR_5;

 if (FUNC_4(VAR_0))
  return FUNC_5(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_3(VAR_0, VAR_2, 0, 1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_8(VAR_3);

 FUNC_7(((void*)0), &VAR_5, VAR_4);
 FUNC_2(VAR_0, VAR_1, &VAR_5);

 FUNC_9(VAR_3);
 FUNC_6(VAR_3, 1);
 return 0;
}
