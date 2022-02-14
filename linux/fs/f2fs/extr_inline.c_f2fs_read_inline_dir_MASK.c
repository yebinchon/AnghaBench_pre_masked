
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct fscrypt_str {int dummy; } ;
struct file {int dummy; } ;
struct f2fs_dentry_ptr {scalar_t__ max; } ;
struct dir_context {scalar_t__ pos; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct dir_context*,struct f2fs_dentry_ptr*,int ,struct fscrypt_str*) ;
 struct page* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct page*,int ) ;
 struct inode* FUNC_6 (struct file*) ;
 void* FUNC_7 (struct inode*,struct page*) ;
 int FUNC_8 (struct inode*,struct f2fs_dentry_ptr*,void*) ;
 int FUNC_9 (struct page*) ;

int FUNC_10(struct file *VAR_0, struct dir_context *VAR_1,
    struct fscrypt_str *VAR_2)
{
 struct inode *VAR_3 = FUNC_6(VAR_0);
 struct page *VAR_4 = ((void*)0);
 struct f2fs_dentry_ptr VAR_5;
 void *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_8(VAR_3, &VAR_5, VAR_6);

 if (VAR_1->pos == VAR_5.max)
  return 0;

 VAR_4 = FUNC_4(FUNC_0(VAR_3), VAR_3->i_ino);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);





 FUNC_9(VAR_4);

 VAR_6 = FUNC_7(VAR_3, VAR_4);

 FUNC_8(VAR_3, &VAR_5, VAR_6);

 VAR_7 = FUNC_3(VAR_1, &VAR_5, 0, VAR_2);
 if (!VAR_7)
  VAR_1->pos = VAR_5.max;

 FUNC_5(VAR_4, 0);
 return VAR_7 < 0 ? VAR_7 : 0;
}
