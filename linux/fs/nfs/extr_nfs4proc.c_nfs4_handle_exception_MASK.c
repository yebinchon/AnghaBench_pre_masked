
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int mig_status; struct nfs_client* nfs_client; } ;
struct nfs_client {int dummy; } ;
struct nfs4_exception {int retry; scalar_t__ recovering; int interruptible; int timeout; scalar_t__ delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_2 (struct nfs_client*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct nfs_server *VAR_2, int VAR_3, struct nfs4_exception *VAR_4)
{
 struct nfs_client *VAR_5 = VAR_2->nfs_client;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_4->delay) {
  VAR_6 = FUNC_0(&VAR_4->timeout,
    VAR_4->interruptible);
  goto out_retry;
 }
 if (VAR_4->recovering) {
  VAR_6 = FUNC_2(VAR_5);
  if (FUNC_3(VAR_1, &VAR_2->mig_status))
   return -VAR_0;
  goto out_retry;
 }
 return VAR_6;
out_retry:
 if (VAR_6 == 0)
  VAR_4->retry = 1;
 return VAR_6;
}
