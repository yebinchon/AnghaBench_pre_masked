
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_flags; struct dentry* d_parent; } ;
struct TYPE_2__ {int (* remove ) (struct inode*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*,struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*,struct dentry*,int) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_4->d_parent);
 struct inode *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = -VAR_1;

 FUNC_2(VAR_3, "NFS: safe_remove(%pd2)\n", VAR_4);


 if (VAR_4->d_flags & VAR_0) {
  VAR_7 = 0;
  goto out;
 }

 FUNC_7(VAR_5, VAR_4);
 if (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_5)->remove(VAR_5, VAR_4);
  if (VAR_7 == 0)
   FUNC_4(VAR_6);
 } else
  VAR_7 = FUNC_0(VAR_5)->remove(VAR_5, VAR_4);
 if (VAR_7 == -VAR_2)
  FUNC_3(VAR_4);
 FUNC_8(VAR_5, VAR_4, VAR_7);
out:
 return VAR_7;
}
