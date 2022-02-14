
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_writecount; } ;
struct iattr {int ia_valid; } ;
struct dentry {int d_inode; int d_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*,struct iattr*,int *) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,int ) ;
 struct dentry* FUNC_9 (struct dentry*) ;
 struct dentry* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 struct cred* FUNC_12 (int ) ;
 int FUNC_13 (struct dentry*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct cred const*) ;
 int FUNC_16 (struct dentry*,struct iattr*) ;

int FUNC_17(struct dentry *VAR_5, struct iattr *VAR_6)
{
 int VAR_7;
 bool VAR_8 = 0;
 struct dentry *VAR_9;
 const struct cred *VAR_10;

 VAR_7 = FUNC_16(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_13(VAR_5);
 if (VAR_7)
  goto out;

 if (VAR_6->ia_valid & VAR_3) {
  struct inode *VAR_11 = FUNC_1(FUNC_9(VAR_5));

  VAR_7 = -VAR_4;
  if (FUNC_0(&VAR_11->i_writecount) < 0)
   goto out_drop_write;


  VAR_8 = 1;
 }

 if (!VAR_8)
  VAR_7 = FUNC_6(VAR_5);
 else
  VAR_7 = FUNC_7(VAR_5);
 if (!VAR_7) {
  struct inode *VAR_12 = ((void*)0);

  VAR_9 = FUNC_10(VAR_5);

  if (VAR_6->ia_valid & VAR_3) {
   VAR_12 = FUNC_1(VAR_9);
   VAR_7 = FUNC_2(VAR_12);
   if (VAR_7)
    goto out_drop_write;
  }

  if (VAR_6->ia_valid & (VAR_1|VAR_0))
   VAR_6->ia_valid &= ~VAR_2;

  FUNC_3(VAR_9->d_inode);
  VAR_10 = FUNC_12(VAR_5->d_sb);
  VAR_7 = FUNC_5(VAR_9, VAR_6, ((void*)0));
  FUNC_15(VAR_10);
  if (!VAR_7)
   FUNC_8(VAR_9->d_inode, VAR_5->d_inode);
  FUNC_4(VAR_9->d_inode);

  if (VAR_12)
   FUNC_14(VAR_12);
 }
out_drop_write:
 FUNC_11(VAR_5);
out:
 return VAR_7;
}
