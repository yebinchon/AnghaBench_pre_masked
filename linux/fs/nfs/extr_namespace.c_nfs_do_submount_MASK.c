
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs_clone_mount {int authflavor; struct nfs_fattr* fattr; struct nfs_fh* fh; struct dentry* dentry; int sb; } ;
struct dentry {int d_sb; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (char*) ;
 struct vfsmount* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 char* FUNC_6 (struct dentry*,char*,int ) ;
 struct vfsmount* FUNC_7 (int ,char*,struct nfs_clone_mount*) ;

struct vfsmount *FUNC_8(struct dentry *VAR_3, struct nfs_fh *VAR_4,
     struct nfs_fattr *VAR_5, rpc_authflavor_t VAR_6)
{
 struct nfs_clone_mount VAR_7 = {
  .sb = VAR_3->d_sb,
  .dentry = VAR_3,
  .fh = VAR_4,
  .fattr = VAR_5,
  .authflavor = VAR_6,
 };
 struct vfsmount *VAR_8;
 char *VAR_9 = (char *) FUNC_4(VAR_1);
 char *VAR_10;

 if (VAR_9 == ((void*)0))
  return FUNC_1(-VAR_0);

 VAR_10 = FUNC_6(VAR_3, VAR_9, VAR_2);
 if (FUNC_2(VAR_10))
  VAR_8 = FUNC_0(VAR_10);
 else
  VAR_8 = FUNC_7(FUNC_3(VAR_3->d_sb), VAR_10, &VAR_7);

 FUNC_5((unsigned long)VAR_9);
 return VAR_8;
}
