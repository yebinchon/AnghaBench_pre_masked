
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int nfs_client; } ;
struct nfs_fsinfo {int lease_time; int fattr; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_2 (int ,int,unsigned long) ;
 int FUNC_3 (struct nfs_server*,struct nfs_fh*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct nfs_server *VAR_2, struct nfs_fh *VAR_3, struct nfs_fsinfo *VAR_4)
{
 struct nfs4_exception VAR_5 = {
  .interruptible = 1,
 };
 unsigned long VAR_6 = VAR_1;
 int VAR_7;

 do {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
  FUNC_3(VAR_2, VAR_3, VAR_4->fattr, VAR_7);
  if (VAR_7 == 0) {
   FUNC_2(VAR_2->nfs_client,
     VAR_4->lease_time * VAR_0,
     VAR_6);
   break;
  }
  VAR_7 = FUNC_1(VAR_2, VAR_7, &VAR_5);
 } while (VAR_5.retry);
 return VAR_7;
}
