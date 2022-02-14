
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_dentry_ptr {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct inode*,struct f2fs_dentry_ptr*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct inode*,struct page*) ;
 int FUNC_5 (struct inode*,struct f2fs_dentry_ptr*,void*) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct inode *VAR_0, struct inode *VAR_1,
       struct page *VAR_2)
{
 struct f2fs_dentry_ptr VAR_3;
 void *VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_2);

 FUNC_5(VAR_0, &VAR_3, VAR_4);
 FUNC_1(VAR_0, VAR_1, &VAR_3);

 FUNC_6(VAR_2);


 if (FUNC_3(VAR_0) < FUNC_0(VAR_0))
  FUNC_2(VAR_0, FUNC_0(VAR_0));
 return 0;
}
