
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compound_state {int current_stateid; scalar_t__ minorversion; } ;
typedef int stateid_t ;


 int VAR_0 ;
 int FUNC_0 (struct nfsd4_compound_state*,int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct nfsd4_compound_state *VAR_1, stateid_t *VAR_2)
{
 if (VAR_1->minorversion) {
  FUNC_1(&VAR_1->current_stateid, VAR_2, sizeof(stateid_t));
  FUNC_0(VAR_1, VAR_0);
 }
}
