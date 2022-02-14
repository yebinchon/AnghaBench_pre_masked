
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*) ;

int FUNC_4(struct dentry *VAR_0, struct nfs_fh *VAR_1,
    struct nfs_fattr *VAR_2,
    struct nfs4_label *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 FUNC_2(VAR_4);
 return 0;
}
