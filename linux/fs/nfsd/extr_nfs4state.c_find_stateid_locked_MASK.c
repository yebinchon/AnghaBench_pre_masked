
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs4_stid {int sc_type; } ;
struct nfs4_client {int cl_stateids; } ;
struct TYPE_4__ {int so_id; } ;
struct TYPE_5__ {TYPE_1__ si_opaque; } ;
typedef TYPE_2__ stateid_t ;


 struct nfs4_stid* FUNC_0 (int *,int ) ;

__attribute__((used)) static struct nfs4_stid *
FUNC_1(struct nfs4_client *VAR_0, stateid_t *VAR_1)
{
 struct nfs4_stid *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->cl_stateids, VAR_1->si_opaque.so_id);
 if (!VAR_2 || !VAR_2->sc_type)
  return ((void*)0);
 return VAR_2;
}
