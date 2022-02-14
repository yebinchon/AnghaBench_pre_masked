
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsdfs_client {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct dentry*,int,struct nfsdfs_client*) ;
 struct dentry* FUNC_2 (struct dentry*,char*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_2, struct nfsdfs_client *VAR_3, char *VAR_4)
{
 struct inode *VAR_5 = VAR_2->d_inode;
 struct dentry *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_5(VAR_5);
 VAR_6 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_6)
  goto out_err;
 VAR_7 = FUNC_1(FUNC_3(VAR_2), VAR_6, VAR_1 | 0600, VAR_3);
 if (VAR_7)
  goto out_err;
out:
 FUNC_6(VAR_5);
 return VAR_6;
out_err:
 FUNC_4(VAR_6);
 VAR_6 = FUNC_0(VAR_7);
 goto out;
}
