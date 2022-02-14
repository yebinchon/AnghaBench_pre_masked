
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compound_state {int current_stateid; } ;
typedef int stateid_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nfsd4_compound_state*,int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3(struct nfsd4_compound_state *VAR_1, stateid_t *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_0) && FUNC_0(VAR_2))
  FUNC_2(VAR_2, &VAR_1->current_stateid, sizeof(stateid_t));
}
