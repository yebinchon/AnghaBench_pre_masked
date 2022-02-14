
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int name; int len; } ;
struct inode {int i_nlink; int i_ino; int i_mode; } ;
struct dentry {int d_sb; struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 struct dentry* FUNC_8 (int ,struct dentry*,int ) ;
 int FUNC_9 (struct inode*,struct dentry*) ;
 int FUNC_10 (struct dentry*,struct inode*,struct dentry*) ;
 struct dentry* FUNC_11 (struct dentry*) ;
 struct dentry* FUNC_12 (struct dentry*) ;
 int FUNC_13 (struct dentry*,struct qstr*) ;
 scalar_t__ FUNC_14 (int ) ;
 struct dentry* FUNC_15 (int ) ;
 int FUNC_16 (struct dentry*) ;
 int FUNC_17 (char*,struct dentry*,int) ;
 int FUNC_18 (char*,struct dentry*,int ,int) ;
 int FUNC_19 (struct inode*,int) ;

__attribute__((used)) static void FUNC_20(struct dentry *VAR_1)
{
 struct dentry *VAR_2 = FUNC_15(VAR_1->d_sb);
 struct inode *VAR_3 = VAR_2->d_inode;
 struct dentry *VAR_4 = FUNC_11(VAR_1);
 struct dentry *VAR_5 = FUNC_12(VAR_1);
 struct dentry *VAR_6 = ((void*)0);
 struct inode *VAR_7;
 struct qstr VAR_8 = { };
 int VAR_9;

 VAR_9 = FUNC_13(VAR_4, &VAR_8);
 if (VAR_9)
  goto fail;

 VAR_7 = FUNC_3(VAR_5);
 if (!FUNC_2(VAR_7->i_mode) && VAR_7->i_nlink != 1) {
  FUNC_18("overlayfs: cleanup linked index (%pd2, ino=%lu, nlink=%u)\n",
        VAR_5, VAR_7->i_ino, VAR_7->i_nlink);
  FUNC_19(FUNC_3(VAR_1), VAR_7->i_nlink - 1);
  FUNC_16(VAR_1);
  goto out;
 }

 FUNC_5(VAR_3, VAR_0);
 VAR_6 = FUNC_8(VAR_8.name, VAR_2, VAR_8.len);
 VAR_9 = FUNC_1(VAR_6);
 if (FUNC_0(VAR_6)) {
  VAR_6 = ((void*)0);
 } else if (FUNC_14(VAR_1->d_sb)) {

  VAR_9 = FUNC_10(VAR_2, VAR_3, VAR_6);
 } else {

  VAR_9 = FUNC_9(VAR_3, VAR_6);
 }

 FUNC_6(VAR_3);
 if (VAR_9)
  goto fail;

out:
 FUNC_7(VAR_8.name);
 FUNC_4(VAR_6);
 return;

fail:
 FUNC_17("overlayfs: cleanup index of '%pd2' failed (%i)\n", VAR_1, VAR_9);
 goto out;
}
