
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_bmbt_rec_base_t ;
struct xfs_bmbt_rec {int l1; int l0; } ;
struct xfs_bmbt_irec {scalar_t__ br_state; int br_startoff; int br_blockcount; int br_startblock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4(
 struct xfs_bmbt_rec *VAR_5,
 struct xfs_bmbt_irec *VAR_6)
{
 int VAR_7 = (VAR_6->br_state != VAR_3);

 FUNC_0(VAR_6->br_state == VAR_3 || VAR_6->br_state == VAR_4);
 FUNC_0(!(VAR_6->br_startoff & FUNC_2(64-VAR_2)));
 FUNC_0(!(VAR_6->br_blockcount & FUNC_2(64-VAR_0)));
 FUNC_0(!(VAR_6->br_startblock & FUNC_2(64-VAR_1)));

 FUNC_1(
  ((xfs_bmbt_rec_base_t)VAR_7 << 63) |
   ((xfs_bmbt_rec_base_t)VAR_6->br_startoff << 9) |
   ((xfs_bmbt_rec_base_t)VAR_6->br_startblock >> 43), &VAR_5->l0);
 FUNC_1(
  ((xfs_bmbt_rec_base_t)VAR_6->br_startblock << 21) |
   ((xfs_bmbt_rec_base_t)VAR_6->br_blockcount &
    (xfs_bmbt_rec_base_t)FUNC_3(21)), &VAR_5->l1);
}
