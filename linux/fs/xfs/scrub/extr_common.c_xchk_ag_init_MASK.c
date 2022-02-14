
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_scrub {int dummy; } ;
struct xchk_ag {int agfl_bp; int agf_bp; int agi_bp; int agno; } ;


 int FUNC_0 (struct xfs_scrub*,struct xchk_ag*) ;
 int FUNC_1 (struct xfs_scrub*,int ,int *,int *,int *) ;

int
FUNC_2(
 struct xfs_scrub *VAR_0,
 xfs_agnumber_t VAR_1,
 struct xchk_ag *VAR_2)
{
 int VAR_3;

 VAR_2->agno = VAR_1;
 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_2->agi_bp,
   &VAR_2->agf_bp, &VAR_2->agfl_bp);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_2);
}
