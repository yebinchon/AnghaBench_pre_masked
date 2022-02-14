
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dentry; } ;
struct nfs4_state {struct inode* inode; } ;
struct nfs4_label {int * member_3; int member_2; int member_1; int member_0; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;


 struct inode* FUNC_0 (struct nfs4_state*) ;
 scalar_t__ FUNC_1 (struct nfs4_state*) ;
 struct nfs4_state* FUNC_2 (struct inode*,struct nfs_open_context*,int,struct iattr*,struct nfs4_label*,int*) ;
 struct nfs4_label* FUNC_3 (struct inode*,int ,struct iattr*,struct nfs4_label*) ;
 int FUNC_4 (struct nfs4_label*) ;

__attribute__((used)) static struct inode *
FUNC_5(struct inode *VAR_0, struct nfs_open_context *VAR_1,
  int VAR_2, struct iattr *VAR_3, int *VAR_4)
{
 struct nfs4_state *VAR_5;
 struct nfs4_label VAR_6 = {0, 0, 0, ((void*)0)}, *VAR_7 = ((void*)0);

 VAR_7 = FUNC_3(VAR_0, VAR_1->dentry, VAR_3, &VAR_6);


 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7, VAR_4);

 FUNC_4(VAR_7);

 if (FUNC_1(VAR_5))
  return FUNC_0(VAR_5);
 return VAR_5->inode;
}
