
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*,struct nfs4_label*,struct inode*) ;
 int FUNC_1 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_2 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*,int) ;

__attribute__((used)) static int FUNC_3(struct nfs_server *VAR_0, struct nfs_fh *VAR_1,
    struct nfs_fattr *VAR_2, struct nfs4_label *VAR_3,
    struct inode *VAR_4)
{
 struct nfs4_exception VAR_5 = {
  .interruptible = 1,
 };
 int VAR_6;
 do {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_6);
  VAR_6 = FUNC_1(VAR_0, VAR_6,
    &VAR_5);
 } while (VAR_5.retry);
 return VAR_6;
}
