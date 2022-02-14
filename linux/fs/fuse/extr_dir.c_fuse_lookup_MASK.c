
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct fuse_entry_out {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct fuse_entry_out*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,scalar_t__,int *,struct fuse_entry_out*,struct inode**) ;
 int FUNC_9 (struct inode*,int) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_12(struct inode *VAR_3, struct dentry *VAR_4,
      unsigned int VAR_5)
{
 int VAR_6;
 struct fuse_entry_out VAR_7;
 struct inode *VAR_8;
 struct dentry *VAR_9;
 bool VAR_10 = 1;
 bool VAR_11;

 VAR_11 = FUNC_7(VAR_3);
 VAR_6 = FUNC_8(VAR_3->i_sb, FUNC_10(VAR_3), &VAR_4->d_name,
          &VAR_7, &VAR_8);
 FUNC_9(VAR_3, VAR_11);
 if (VAR_6 == -VAR_1) {
  VAR_10 = 0;
  VAR_6 = 0;
 }
 if (VAR_6)
  goto out_err;

 VAR_6 = -VAR_0;
 if (VAR_8 && FUNC_10(VAR_8) == VAR_2)
  goto out_iput;

 VAR_9 = FUNC_3(VAR_8, VAR_4);
 VAR_6 = FUNC_2(VAR_9);
 if (FUNC_1(VAR_9))
  goto out_err;

 VAR_4 = VAR_9 ? VAR_9 : VAR_4;
 if (VAR_10)
  FUNC_5(VAR_4, &VAR_7);
 else
  FUNC_6(VAR_4);

 if (VAR_8)
  FUNC_4(VAR_3);
 return VAR_9;

 out_iput:
 FUNC_11(VAR_8);
 out_err:
 return FUNC_0(VAR_6);
}
