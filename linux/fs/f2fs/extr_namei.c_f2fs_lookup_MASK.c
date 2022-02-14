
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {unsigned int i_ino; int i_mode; int i_sb; } ;
struct inode {unsigned int i_ino; int i_mode; int i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct f2fs_dir_entry {int ino; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 struct f2fs_dir_entry* FUNC_10 (struct page*,struct fscrypt_name*,struct page**) ;
 int FUNC_11 (struct page*,unsigned int) ;
 struct dentry* FUNC_12 (struct page*,struct dentry*) ;
 scalar_t__ FUNC_13 (struct page*) ;
 struct page* FUNC_14 (int ,int) ;
 int FUNC_15 (struct page*,int ) ;
 int FUNC_16 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_17 (struct fscrypt_name*) ;
 int FUNC_18 (struct page*,struct page*) ;
 int FUNC_19 (struct page*,struct dentry*,struct fscrypt_name*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct page*,struct dentry*,int,int) ;
 int FUNC_23 (struct page*,struct dentry*,unsigned int) ;

__attribute__((used)) static struct dentry *FUNC_24(struct inode *VAR_4, struct dentry *VAR_5,
  unsigned int VAR_6)
{
 struct inode *VAR_7 = ((void*)0);
 struct f2fs_dir_entry *VAR_8;
 struct page *VAR_9;
 struct dentry *VAR_10;
 nid_t VAR_11 = -1;
 int VAR_12 = 0;
 unsigned int VAR_13 = FUNC_2(FUNC_1(VAR_4));
 struct fscrypt_name VAR_14;

 FUNC_23(VAR_4, VAR_5, VAR_6);

 if (VAR_5->d_name.len > VAR_3) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_19(VAR_4, VAR_5, &VAR_14);
 if (VAR_12 == -VAR_1)
  goto out_splice;
 if (VAR_12)
  goto out;
 VAR_8 = FUNC_10(VAR_4, &VAR_14, &VAR_9);
 FUNC_17(&VAR_14);

 if (!VAR_8) {
  if (FUNC_5(VAR_9)) {
   VAR_12 = FUNC_6(VAR_9);
   goto out;
  }
  goto out_splice;
 }

 VAR_11 = FUNC_21(VAR_8->ino);
 FUNC_15(VAR_9, 0);

 VAR_7 = FUNC_14(VAR_4->i_sb, VAR_11);
 if (FUNC_5(VAR_7)) {
  VAR_12 = FUNC_6(VAR_7);
  goto out;
 }

 if ((VAR_4->i_ino == VAR_13) && FUNC_13(VAR_4)) {
  VAR_12 = FUNC_11(VAR_4, VAR_13);
  if (VAR_12)
   goto out_iput;
 }

 if (FUNC_13(VAR_7)) {
  VAR_12 = FUNC_11(VAR_7, VAR_4->i_ino);
  if (VAR_12)
   goto out_iput;
 }
 if (FUNC_4(VAR_4) &&
     (FUNC_8(VAR_7->i_mode) || FUNC_9(VAR_7->i_mode)) &&
     !FUNC_18(VAR_4, VAR_7)) {
  FUNC_16(FUNC_1(VAR_7), "Inconsistent encryption contexts: %lu/%lu",
     VAR_4->i_ino, VAR_7->i_ino);
  VAR_12 = -VAR_2;
  goto out_iput;
 }
out_splice:
 VAR_10 = FUNC_12(VAR_7, VAR_5);
 VAR_12 = FUNC_7(VAR_10);
 FUNC_22(VAR_4, VAR_5, VAR_11, VAR_12);
 return VAR_10;
out_iput:
 FUNC_20(VAR_7);
out:
 FUNC_22(VAR_4, VAR_5, VAR_11, VAR_12);
 return FUNC_0(VAR_12);
}
