
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {int dummy; } ;
struct nfsd4_compound_state {TYPE_1__* clp; } ;
typedef int clientid_t ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int cl_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct nfsd4_compound_state*,struct nfsd_net*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__be32
FUNC_3(clientid_t *VAR_4,
  struct nfsd4_compound_state *VAR_5,
  struct nfsd_net *VAR_6)
{
 __be32 VAR_7;


 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_3;

 if (FUNC_2(VAR_0, &VAR_5->clp->cl_flags))
  return VAR_2;

 if (FUNC_1(VAR_5->clp))
  return VAR_3;

 return VAR_1;
}
