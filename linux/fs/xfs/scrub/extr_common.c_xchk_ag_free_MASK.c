
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_scrub {int tp; } ;
struct xchk_ag {int agno; int * pag; int * agi_bp; int * agf_bp; int * agfl_bp; } ;


 int VAR_0 ;
 int FUNC_0 (struct xchk_ag*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(
 struct xfs_scrub *VAR_1,
 struct xchk_ag *VAR_2)
{
 FUNC_0(VAR_2);
 if (VAR_2->agfl_bp) {
  FUNC_2(VAR_1->tp, VAR_2->agfl_bp);
  VAR_2->agfl_bp = ((void*)0);
 }
 if (VAR_2->agf_bp) {
  FUNC_2(VAR_1->tp, VAR_2->agf_bp);
  VAR_2->agf_bp = ((void*)0);
 }
 if (VAR_2->agi_bp) {
  FUNC_2(VAR_1->tp, VAR_2->agi_bp);
  VAR_2->agi_bp = ((void*)0);
 }
 if (VAR_2->pag) {
  FUNC_1(VAR_2->pag);
  VAR_2->pag = ((void*)0);
 }
 VAR_2->agno = VAR_0;
}
