
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_compound_state {TYPE_1__* session; } ;
struct nfs4_sessionid {int dummy; } ;
struct TYPE_2__ {int se_sessionid; } ;


 int FUNC_0 (struct nfs4_sessionid*,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct nfsd4_compound_state *VAR_0, struct nfs4_sessionid *VAR_1)
{
 if (!VAR_0->session)
  return 0;
 return !FUNC_0(VAR_1, &VAR_0->session->se_sessionid, sizeof(*VAR_1));
}
