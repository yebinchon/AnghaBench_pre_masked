
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int owner_id; } ;
struct nfs4_state_owner {TYPE_2__ so_seqid; TYPE_1__* so_server; int so_cred; } ;
struct TYPE_3__ {int openowner_id; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nfs4_state_owner*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nfs4_state_owner *VAR_0)
{
 FUNC_2(&VAR_0->so_seqid);
 FUNC_3(VAR_0->so_cred);
 FUNC_0(&VAR_0->so_server->openowner_id, VAR_0->so_seqid.owner_id);
 FUNC_1(VAR_0);
}
