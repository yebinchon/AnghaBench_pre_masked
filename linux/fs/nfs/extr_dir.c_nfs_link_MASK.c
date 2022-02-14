
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {int (* link ) (struct inode*,struct inode*,int *) ;} ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,char*,struct dentry*,struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct inode*,int *) ;
 int FUNC_7 (struct inode*,struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*,struct inode*,struct dentry*,int) ;

int
FUNC_9(struct dentry *VAR_1, struct inode *VAR_2, struct dentry *VAR_3)
{
 struct inode *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_4(VAR_0, "NFS: link(%pd2 -> %pd2)\n",
  VAR_1, VAR_3);

 FUNC_7(VAR_4, VAR_2, VAR_3);
 FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_2)->link(VAR_4, VAR_2, &VAR_3->d_name);
 if (VAR_5 == 0) {
  FUNC_5(VAR_4);
  FUNC_1(VAR_3, VAR_4);
 }
 FUNC_8(VAR_4, VAR_2, VAR_3, VAR_5);
 return VAR_5;
}
