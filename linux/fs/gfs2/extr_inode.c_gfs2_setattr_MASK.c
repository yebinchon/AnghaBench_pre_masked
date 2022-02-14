
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct iattr {int ia_valid; int ia_size; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_5 ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct inode*,struct iattr*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*,struct iattr*) ;
 int FUNC_12 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_6, struct iattr *VAR_7)
{
 struct inode *VAR_8 = FUNC_3(VAR_6);
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_8);
 struct gfs2_holder VAR_10;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_9->i_gl, VAR_5, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = -VAR_4;
 if (FUNC_2(VAR_8) || FUNC_1(VAR_8))
  goto out;

 VAR_11 = FUNC_12(VAR_6, VAR_7);
 if (VAR_11)
  goto out;

 if (VAR_7->ia_valid & VAR_2)
  VAR_11 = FUNC_8(VAR_8, VAR_7->ia_size);
 else if (VAR_7->ia_valid & (VAR_3 | VAR_0))
  VAR_11 = FUNC_11(VAR_8, VAR_7);
 else {
  VAR_11 = FUNC_7(VAR_8, VAR_7);
  if (!VAR_11 && VAR_7->ia_valid & VAR_1)
   VAR_11 = FUNC_10(VAR_8, VAR_8->i_mode);
 }

out:
 if (!VAR_11)
  FUNC_9(VAR_8);
 FUNC_4(&VAR_10);
 return VAR_11;
}
