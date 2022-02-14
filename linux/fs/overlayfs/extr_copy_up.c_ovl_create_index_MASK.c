
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int name; int len; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ) ;
 struct dentry* FUNC_8 (int ,struct dentry*,int ) ;
 int FUNC_9 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_10 (struct dentry*,int ) ;
 int FUNC_11 (struct inode*,struct dentry*,struct inode*,struct dentry*,int ) ;
 int FUNC_12 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_13 (int ) ;
 int FUNC_14 (struct dentry*,struct dentry*) ;
 int FUNC_15 (int ,struct inode*) ;

__attribute__((used)) static int FUNC_16(struct dentry *VAR_3, struct dentry *VAR_4,
       struct dentry *VAR_5)
{
 struct dentry *VAR_6 = FUNC_13(VAR_3->d_sb);
 struct inode *VAR_7 = FUNC_4(VAR_6);
 struct dentry *VAR_8 = ((void*)0);
 struct dentry *VAR_9 = ((void*)0);
 struct qstr VAR_10 = { };
 int VAR_11;
 if (FUNC_3(!FUNC_5(VAR_3)))
  return -VAR_0;


 if (FUNC_3(FUNC_15(VAR_1, FUNC_4(VAR_3))))
  return -VAR_0;

 VAR_11 = FUNC_12(VAR_4, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_10(VAR_6, FUNC_1(VAR_2 | 0));
 VAR_11 = FUNC_2(VAR_9);
 if (FUNC_0(VAR_9))
  goto free_name;

 VAR_11 = FUNC_14(VAR_5, VAR_9);
 if (VAR_11)
  goto out;

 VAR_8 = FUNC_8(VAR_10.name, VAR_6, VAR_10.len);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_2(VAR_8);
 } else {
  VAR_11 = FUNC_11(VAR_7, VAR_9, VAR_7, VAR_8, 0);
  FUNC_6(VAR_8);
 }
out:
 if (VAR_11)
  FUNC_9(VAR_7, VAR_9);
 FUNC_6(VAR_9);
free_name:
 FUNC_7(VAR_10.name);
 return VAR_11;
}
