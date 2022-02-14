
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct qstr {int len; int name; int hash; } ;
struct inode {int i_flags; int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct dentry*,struct qstr*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*,int ,int ) ;
 int FUNC_12 (struct inode*) ;
 int VAR_5 ;
 int FUNC_13 (struct dentry*) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 struct inode* FUNC_15 (struct super_block*,scalar_t__,int ,scalar_t__*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct dentry*) ;
 int FUNC_20 (struct dentry*) ;

int FUNC_21(struct super_block *VAR_6, u64 VAR_7,
        u64 VAR_8, struct qstr *VAR_9)
{
 int VAR_10 = -VAR_2;
 struct inode *VAR_11;
 struct dentry *VAR_12;
 struct dentry *VAR_13;

 VAR_11 = FUNC_15(VAR_6, VAR_7, VAR_5, &VAR_7);
 if (!VAR_11)
  return -VAR_1;

 FUNC_16(VAR_11);
 if (!FUNC_0(VAR_11->i_mode))
  goto unlock;

 VAR_10 = -VAR_1;
 VAR_12 = FUNC_3(VAR_11);
 if (!VAR_12)
  goto unlock;

 VAR_9->hash = FUNC_11(VAR_12, VAR_9->name, VAR_9->len);
 VAR_13 = FUNC_6(VAR_12, VAR_9);
 FUNC_10(VAR_12);
 if (!VAR_13)
  goto unlock;

 FUNC_12(VAR_11);
 FUNC_13(VAR_13);

 if (VAR_8 != 0 && FUNC_8(VAR_13)) {
  FUNC_16(FUNC_4(VAR_13));
  if (FUNC_14(FUNC_4(VAR_13)) != VAR_8) {
   VAR_10 = -VAR_1;
   goto badentry;
  }
  if (FUNC_7(VAR_13)) {
   VAR_10 = -VAR_0;
   goto badentry;
  }
  if (FUNC_5(VAR_13)) {
   FUNC_19(VAR_13);
   if (!FUNC_20(VAR_13)) {
    VAR_10 = -VAR_3;
    goto badentry;
   }
   FUNC_4(VAR_13)->i_flags |= VAR_4;
  }
  FUNC_9(VAR_13);
  FUNC_1(FUNC_4(VAR_13));
  VAR_10 = 0;
 badentry:
  FUNC_17(FUNC_4(VAR_13));
  if (!VAR_10)
   FUNC_2(VAR_13);
 } else {
  VAR_10 = 0;
 }
 FUNC_10(VAR_13);

 unlock:
 FUNC_17(VAR_11);
 FUNC_18(VAR_11);
 return VAR_10;
}
