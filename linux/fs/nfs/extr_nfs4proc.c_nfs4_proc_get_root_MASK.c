
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int fsid; } ;
struct nfs_fsinfo {struct nfs_fattr* fattr; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int valid; int fsid; } ;
struct nfs4_label {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs4_label*) ;
 int VAR_1 ;
 int FUNC_1 (struct nfs4_label*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *,int) ;
 struct nfs4_label* FUNC_4 (struct nfs_server*,int ) ;
 int FUNC_5 (struct nfs4_label*) ;
 int FUNC_6 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*,int *) ;
 int FUNC_7 (struct nfs_server*,struct nfs_fh*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct nfs_server *VAR_2, struct nfs_fh *VAR_3,
         struct nfs_fsinfo *VAR_4)
{
 int VAR_5;
 struct nfs_fattr *VAR_6 = VAR_4->fattr;
 struct nfs4_label *VAR_7 = ((void*)0);

 VAR_5 = FUNC_7(VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_2("nfs4_get_root: getcaps error = %d\n", -VAR_5);
  return VAR_5;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_5 = FUNC_6(VAR_2, VAR_3, VAR_6, VAR_7, ((void*)0));
 if (VAR_5 < 0) {
  FUNC_2("nfs4_get_root: getattr error = %d\n", -VAR_5);
  goto err_free_label;
 }

 if (VAR_6->valid & VAR_1 &&
     !FUNC_8(&VAR_2->fsid, &VAR_6->fsid))
  FUNC_3(&VAR_2->fsid, &VAR_6->fsid, sizeof(VAR_2->fsid));

err_free_label:
 FUNC_5(VAR_7);

 return VAR_5;
}
