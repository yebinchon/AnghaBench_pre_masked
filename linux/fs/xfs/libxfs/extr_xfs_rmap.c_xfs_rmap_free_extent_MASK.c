
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_extlen_t ;
typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
typedef int uint64_t ;
struct xfs_trans {int t_mountp; } ;
struct xfs_bmbt_irec {int br_state; scalar_t__ br_startoff; int br_blockcount; int br_startblock; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_trans*,int ,int ,int ,struct xfs_bmbt_irec*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(
 struct xfs_trans *VAR_3,
 xfs_agnumber_t VAR_4,
 xfs_agblock_t VAR_5,
 xfs_extlen_t VAR_6,
 uint64_t VAR_7)
{
 struct xfs_bmbt_irec VAR_8;

 if (!FUNC_2(VAR_3->t_mountp, VAR_0))
  return;

 VAR_8.br_startblock = FUNC_0(VAR_3->t_mountp, VAR_4, VAR_5);
 VAR_8.br_blockcount = VAR_6;
 VAR_8.br_startoff = 0;
 VAR_8.br_state = VAR_1;

 FUNC_1(VAR_3, VAR_2, VAR_7, VAR_0, &VAR_8);
}
