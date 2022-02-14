
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct iattr {int ia_valid; int ia_mode; struct file* ia_file; } ;
struct fuse_conn {scalar_t__ posix_acl; int handle_killpriv; } ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct fuse_conn*) ;
 int FUNC_4 (struct inode*,int *,struct file*) ;
 int FUNC_5 (struct dentry*,struct iattr*,struct file*) ;
 int FUNC_6 (struct dentry*) ;
 struct fuse_conn* FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_8, struct iattr *VAR_9)
{
 struct inode *VAR_10 = FUNC_0(VAR_8);
 struct fuse_conn *VAR_11 = FUNC_7(VAR_10);
 struct file *VAR_12 = (VAR_9->ia_valid & VAR_0) ? VAR_9->ia_file : ((void*)0);
 int VAR_13;

 if (!FUNC_3(FUNC_7(VAR_10)))
  return -VAR_4;

 if (VAR_9->ia_valid & (VAR_2 | VAR_1)) {
  VAR_9->ia_valid &= ~(VAR_2 | VAR_1 |
        VAR_3);







  if (!VAR_11->handle_killpriv) {




   VAR_13 = FUNC_4(VAR_10, ((void*)0), VAR_12);
   if (VAR_13)
    return VAR_13;

   VAR_9->ia_mode = VAR_10->i_mode;
   if (VAR_10->i_mode & VAR_6) {
    VAR_9->ia_valid |= VAR_3;
    VAR_9->ia_mode &= ~VAR_6;
   }
   if ((VAR_10->i_mode & (VAR_5 | VAR_7)) == (VAR_5 | VAR_7)) {
    VAR_9->ia_valid |= VAR_3;
    VAR_9->ia_mode &= ~VAR_5;
   }
  }
 }
 if (!VAR_9->ia_valid)
  return 0;

 VAR_13 = FUNC_5(VAR_8, VAR_9, VAR_12);
 if (!VAR_13) {




  if (VAR_11->posix_acl)
   FUNC_2(VAR_10);


  if (FUNC_1(VAR_8) && (VAR_9->ia_valid & VAR_3))
   FUNC_6(VAR_8);
 }
 return VAR_13;
}
