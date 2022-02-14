
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_cattr {int mode; int link; int rdev; scalar_t__ hardlink; } ;
struct inode {int dummy; } ;
struct dentry {scalar_t__ d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;





 int VAR_3 ;


 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*,int) ;
 int FUNC_5 (scalar_t__,struct inode*,struct dentry*) ;
 int FUNC_6 (struct inode*,struct dentry*,int,int ) ;
 int FUNC_7 (struct inode*,struct dentry*,int ) ;
 int FUNC_8 (struct inode*,struct dentry**,int) ;

struct dentry *FUNC_9(struct inode *VAR_4, struct dentry *VAR_5,
          struct ovl_cattr *VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_7 = -VAR_2;
 if (VAR_5->d_inode)
  goto out;

 if (VAR_6->hardlink) {
  VAR_7 = FUNC_5(VAR_6->hardlink, VAR_4, VAR_5);
 } else {
  switch (VAR_6->mode & VAR_3) {
  case 129:
   VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6->mode);
   break;

  case 132:

   VAR_7 = FUNC_8(VAR_4, &VAR_5, VAR_6->mode);
   break;

  case 133:
  case 134:
  case 131:
  case 128:
   VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6->mode,
        VAR_6->rdev);
   break;

  case 130:
   VAR_7 = FUNC_7(VAR_4, VAR_5, VAR_6->link);
   break;

  default:
   VAR_7 = -VAR_1;
  }
 }
 if (!VAR_7 && FUNC_2(!VAR_5->d_inode)) {




  VAR_7 = -VAR_0;
 }
out:
 if (VAR_7) {
  FUNC_3(VAR_5);
  return FUNC_0(VAR_7);
 }
 return VAR_5;
}
