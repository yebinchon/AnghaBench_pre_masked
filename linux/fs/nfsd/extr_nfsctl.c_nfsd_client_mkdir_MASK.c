
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tree_descr {int dummy; } ;
struct nfsdfs_client {int dummy; } ;
struct nfsd_net {int nfsd_client_dir; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ,struct nfsdfs_client*,char*) ;
 int FUNC_3 (struct dentry*,struct tree_descr const*) ;
 int FUNC_4 (char*,char*,int) ;

struct dentry *FUNC_5(struct nfsd_net *VAR_0,
  struct nfsdfs_client *VAR_1, u32 VAR_2,
  const struct tree_descr *VAR_3)
{
 struct dentry *VAR_4;
 char VAR_5[11];
 int VAR_6;

 FUNC_4(VAR_5, "%u", VAR_2);

 VAR_4 = FUNC_2(VAR_0->nfsd_client_dir, VAR_1, VAR_5);
 if (FUNC_0(VAR_4))
  return ((void*)0);
 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
