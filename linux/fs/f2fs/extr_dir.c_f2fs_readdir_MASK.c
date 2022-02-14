
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct fscrypt_str {int dummy; } ;
struct file_ra_state {int dummy; } ;
struct file {struct file_ra_state f_ra; } ;
struct f2fs_dentry_ptr {int dummy; } ;
struct f2fs_dentry_block {int dummy; } ;
struct dir_context {unsigned int pos; } ;
typedef int pgoff_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fscrypt_str FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int VAR_6 ;
 unsigned long FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dir_context*,struct f2fs_dentry_ptr*,unsigned int,struct fscrypt_str*) ;
 struct page* FUNC_7 (struct inode*,unsigned int) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*,int ) ;
 int FUNC_10 (struct file*,struct dir_context*,struct fscrypt_str*) ;
 scalar_t__ FUNC_11 (int ) ;
 struct inode* FUNC_12 (struct file*) ;
 int FUNC_13 (struct inode*,int ,struct fscrypt_str*) ;
 int FUNC_14 (struct fscrypt_str*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,struct f2fs_dentry_ptr*,struct f2fs_dentry_block*) ;
 int FUNC_17 (unsigned long,int ) ;
 struct f2fs_dentry_block* FUNC_18 (struct page*) ;
 int FUNC_19 (int ,struct file_ra_state*,struct file*,unsigned int,int ) ;
 int FUNC_20 (struct file_ra_state*,unsigned int) ;
 int FUNC_21 (struct inode*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_7, struct dir_context *VAR_8)
{
 struct inode *VAR_9 = FUNC_12(VAR_7);
 unsigned long VAR_10 = FUNC_5(VAR_9);
 struct f2fs_dentry_block *VAR_11 = ((void*)0);
 struct page *VAR_12 = ((void*)0);
 struct file_ra_state *VAR_13 = &VAR_7->f_ra;
 loff_t VAR_14 = VAR_8->pos;
 unsigned int VAR_15 = ((unsigned long)VAR_8->pos / VAR_5);
 struct f2fs_dentry_ptr VAR_16;
 struct fscrypt_str VAR_17 = FUNC_0(((void*)0), 0);
 int VAR_18 = 0;

 if (FUNC_1(VAR_9)) {
  VAR_18 = FUNC_15(VAR_9);
  if (VAR_18 && VAR_18 != -VAR_1)
   goto out;

  VAR_18 = FUNC_13(VAR_9, VAR_3, &VAR_17);
  if (VAR_18 < 0)
   goto out;
 }

 if (FUNC_8(VAR_9)) {
  VAR_18 = FUNC_10(VAR_7, VAR_8, &VAR_17);
  goto out_free;
 }

 for (; VAR_15 < VAR_10; VAR_15++, VAR_8->pos = VAR_15 * VAR_5) {


  if (FUNC_11(VAR_6)) {
   VAR_18 = -VAR_2;
   goto out_free;
  }
  FUNC_4();


  if (VAR_10 - VAR_15 > 1 && !FUNC_20(VAR_13, VAR_15))
   FUNC_19(VAR_9->i_mapping, VAR_13, VAR_7, VAR_15,
    FUNC_17(VAR_10 - VAR_15, (pgoff_t)VAR_4));

  VAR_12 = FUNC_7(VAR_9, VAR_15);
  if (FUNC_2(VAR_12)) {
   VAR_18 = FUNC_3(VAR_12);
   if (VAR_18 == -VAR_0) {
    VAR_18 = 0;
    continue;
   } else {
    goto out_free;
   }
  }

  VAR_11 = FUNC_18(VAR_12);

  FUNC_16(VAR_9, &VAR_16, VAR_11);

  VAR_18 = FUNC_6(VAR_8, &VAR_16,
    VAR_15 * VAR_5, &VAR_17);
  if (VAR_18) {
   FUNC_9(VAR_12, 0);
   break;
  }

  FUNC_9(VAR_12, 0);
 }
out_free:
 FUNC_14(&VAR_17);
out:
 FUNC_21(VAR_9, VAR_14, VAR_8->pos, VAR_18);
 return VAR_18 < 0 ? VAR_18 : 0;
}
