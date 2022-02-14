
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct nilfs_root {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct nilfs_root* i_root; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (int ) ;
 struct qstr FUNC_4 (char*,int) ;
 int FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (int ,struct nilfs_root*,unsigned long) ;
 unsigned long FUNC_8 (int ,struct qstr*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct dentry *VAR_1)
{
 unsigned long VAR_2;
 struct inode *VAR_3;
 struct qstr VAR_4 = FUNC_4("..", 2);
 struct nilfs_root *VAR_5;

 VAR_2 = FUNC_8(FUNC_5(VAR_1), &VAR_4);
 if (!VAR_2)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_3(FUNC_5(VAR_1))->i_root;

 VAR_3 = FUNC_7(VAR_1->d_sb, VAR_5, VAR_2);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);

 return FUNC_6(VAR_3);
}
