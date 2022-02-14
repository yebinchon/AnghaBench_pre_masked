
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_fh {int dummy; } ;
struct nfsd4_compound_state {struct svc_fh current_fh; } ;
struct nfs4_stateowner {int dummy; } ;
struct TYPE_2__ {int sc_stateid; } ;
struct nfs4_ol_stateid {int st_mutex; TYPE_1__ st_stid; struct nfs4_stateowner* st_stateowner; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct svc_fh*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (struct nfsd4_compound_state*,struct nfs4_stateowner*,int ) ;
 int FUNC_4 (struct nfsd4_compound_state*) ;
 scalar_t__ FUNC_5 (struct nfs4_ol_stateid*) ;

__attribute__((used)) static __be32 FUNC_6(struct nfsd4_compound_state *VAR_1, stateid_t *VAR_2, u32 VAR_3, struct nfs4_ol_stateid *VAR_4)
{
 struct svc_fh *VAR_5 = &VAR_1->current_fh;
 struct nfs4_stateowner *VAR_6 = VAR_4->st_stateowner;
 __be32 VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_6, VAR_3);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 != VAR_0)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_2, &VAR_4->st_stid.sc_stateid, FUNC_4(VAR_1));
 if (VAR_7 == VAR_0)
  VAR_7 = FUNC_2(VAR_5, &VAR_4->st_stid);
 if (VAR_7 != VAR_0)
  FUNC_1(&VAR_4->st_mutex);
 return VAR_7;
}
