
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct path {int mnt; TYPE_1__* dentry; } ;
struct inode {int i_mode; } ;
struct iattr {int ia_mode; int ia_valid; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode**) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,struct iattr*,struct inode**) ;
 int FUNC_6 (struct path const*,int) ;

__attribute__((used)) static int FUNC_7(const struct path *VAR_3, umode_t VAR_4)
{
 struct inode *VAR_5 = VAR_3->dentry->d_inode;
 struct inode *VAR_6 = ((void*)0);
 struct iattr VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3->mnt);
 if (VAR_8)
  return VAR_8;
retry_deleg:
 FUNC_1(VAR_5);
 VAR_8 = FUNC_6(VAR_3, VAR_4);
 if (VAR_8)
  goto out_unlock;
 VAR_7.ia_mode = (VAR_4 & VAR_2) | (VAR_5->i_mode & ~VAR_2);
 VAR_7.ia_valid = VAR_1 | VAR_0;
 VAR_8 = FUNC_5(VAR_3->dentry, &VAR_7, &VAR_6);
out_unlock:
 FUNC_2(VAR_5);
 if (VAR_6) {
  VAR_8 = FUNC_0(&VAR_6);
  if (!VAR_8)
   goto retry_deleg;
 }
 FUNC_3(VAR_3->mnt);
 return VAR_8;
}
