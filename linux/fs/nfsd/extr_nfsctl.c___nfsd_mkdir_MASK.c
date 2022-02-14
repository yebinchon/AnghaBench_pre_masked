
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct nfsdfs_client {int cl_ref; } ;
struct inode {struct nfsdfs_client* i_private; int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 struct inode* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct dentry *VAR_2, umode_t VAR_3, struct nfsdfs_client *VAR_4)
{
 struct inode *VAR_5;

 VAR_5 = FUNC_4(VAR_1->i_sb, VAR_3);
 if (!VAR_5)
  return -VAR_0;
 if (VAR_4) {
  VAR_5->i_private = VAR_4;
  FUNC_3(&VAR_4->cl_ref);
 }
 FUNC_0(VAR_2, VAR_5);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1, VAR_2);
 return 0;
}
