
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stid {int sc_lock; int sc_stateid; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct nfs4_stid*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __be32 FUNC_4(stateid_t *VAR_1, struct nfs4_stid *VAR_2, bool VAR_3)
{
 __be32 VAR_4;

 FUNC_2(&VAR_2->sc_lock);
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == VAR_0)
  VAR_4 = FUNC_0(VAR_1, &VAR_2->sc_stateid, VAR_3);
 FUNC_3(&VAR_2->sc_lock);
 return VAR_4;
}
