
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open_downgrade {int od_share_deny; int od_deleg_want; int od_share_access; int od_seqid; int od_stateid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfsd4_compoundargs*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (struct nfsd4_compoundargs*,int *) ;
 scalar_t__ FUNC_4 (struct nfsd4_compoundargs*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static __be32
FUNC_5(struct nfsd4_compoundargs *VAR_4, struct nfsd4_open_downgrade *VAR_5)
{
 VAR_0;

 VAR_3 = FUNC_4(VAR_4, &VAR_5->od_stateid);
 if (VAR_3)
  return VAR_3;
 FUNC_0(4);
 VAR_5->od_seqid = FUNC_1(VAR_2++);
 VAR_3 = FUNC_2(VAR_4, &VAR_5->od_share_access,
        &VAR_5->od_deleg_want, ((void*)0));
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_3(VAR_4, &VAR_5->od_share_deny);
 if (VAR_3)
  return VAR_3;
 VAR_1;
}
