
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_fsstat {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;


 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fsstat*) ;
 int FUNC_1 (struct nfs_server*,int ,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_0, struct nfs_fh *VAR_1, struct nfs_fsstat *VAR_2)
{
 struct nfs4_exception VAR_3 = {
  .interruptible = 1,
 };
 int VAR_4;
 do {
  VAR_4 = FUNC_1(VAR_0,
    FUNC_0(VAR_0, VAR_1, VAR_2),
    &VAR_3);
 } while (VAR_3.retry);
 return VAR_4;
}
