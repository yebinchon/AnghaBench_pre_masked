
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_state {TYPE_2__* owner; int flags; int seqlock; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;
struct TYPE_4__ {TYPE_1__* so_server; } ;
struct TYPE_3__ {int nfs_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nfs4_state*,int *) ;
 int FUNC_2 (struct nfs4_state*,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nfs4_state *VAR_1,
 nfs4_stateid *VAR_2,
 nfs4_stateid *VAR_3, fmode_t VAR_4)
{
 FUNC_4(&VAR_1->seqlock);

 if (FUNC_1(VAR_1, VAR_2))
  FUNC_2(VAR_1, VAR_3, VAR_4);
 FUNC_5(&VAR_1->seqlock);
 if (FUNC_3(VAR_0, &VAR_1->flags))
  FUNC_0(VAR_1->owner->so_server->nfs_client);
}
