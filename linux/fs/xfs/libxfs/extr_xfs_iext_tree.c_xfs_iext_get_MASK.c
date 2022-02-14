
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_iext_rec {int lo; int hi; } ;
struct xfs_bmbt_irec {int br_startoff; int br_blockcount; int br_startblock; int br_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_bmbt_irec *VAR_4,
 struct xfs_iext_rec *VAR_5)
{
 VAR_4->br_startoff = VAR_5->lo & VAR_3;
 VAR_4->br_blockcount = VAR_5->hi & VAR_2;

 VAR_4->br_startblock = VAR_5->lo >> 54;
 VAR_4->br_startblock |= (VAR_5->hi & FUNC_0(42)) >> (22 - 10);

 if (VAR_5->hi & (1 << 21))
  VAR_4->br_state = VAR_1;
 else
  VAR_4->br_state = VAR_0;
}
