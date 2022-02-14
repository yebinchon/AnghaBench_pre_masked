
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {int dummy; } ;
struct nfsd4_blocked_lock {int nbl_cb; int nbl_lock; int nbl_fh; } ;
struct TYPE_2__ {int so_client; } ;
struct nfs4_lockowner {TYPE_1__ lo_owner; } ;
struct knfsd_fh {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct knfsd_fh*) ;
 struct nfsd4_blocked_lock* FUNC_1 (struct nfs4_lockowner*,struct knfsd_fh*,struct nfsd_net*) ;
 struct nfsd4_blocked_lock* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int *,int ) ;

__attribute__((used)) static struct nfsd4_blocked_lock *
FUNC_5(struct nfs4_lockowner *VAR_3, struct knfsd_fh *VAR_4,
   struct nfsd_net *VAR_5)
{
 struct nfsd4_blocked_lock *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (!VAR_6) {
  VAR_6= FUNC_2(sizeof(*VAR_6), VAR_0);
  if (VAR_6) {
   FUNC_0(&VAR_6->nbl_fh, VAR_4);
   FUNC_3(&VAR_6->nbl_lock);
   FUNC_4(&VAR_6->nbl_cb, VAR_3->lo_owner.so_client,
     &VAR_2,
     VAR_1);
  }
 }
 return VAR_6;
}
