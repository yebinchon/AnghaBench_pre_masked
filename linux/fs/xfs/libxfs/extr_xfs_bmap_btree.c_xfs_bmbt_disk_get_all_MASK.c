
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xfs_bmbt_rec {int l1; int l0; } ;
struct xfs_bmbt_irec {int br_startoff; int br_startblock; int br_blockcount; int br_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

void
FUNC_2(
 struct xfs_bmbt_rec *VAR_3,
 struct xfs_bmbt_irec *VAR_4)
{
 uint64_t VAR_5 = FUNC_0(&VAR_3->l0);
 uint64_t VAR_6 = FUNC_0(&VAR_3->l1);

 VAR_4->br_startoff = (VAR_5 & FUNC_1(64 - VAR_0)) >> 9;
 VAR_4->br_startblock = ((VAR_5 & FUNC_1(9)) << 43) | (VAR_6 >> 21);
 VAR_4->br_blockcount = VAR_6 & FUNC_1(21);
 if (VAR_5 >> (64 - VAR_0))
  VAR_4->br_state = VAR_2;
 else
  VAR_4->br_state = VAR_1;
}
