
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_agnumber_t ;
typedef scalar_t__ xfs_agblock_t ;
struct xfs_inode {int i_mount; } ;
struct xfs_bmbt_irec {scalar_t__ br_blockcount; int br_startblock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct xfs_inode*,struct xfs_bmbt_irec*) ;
 int FUNC_3 (struct xfs_bmbt_irec*) ;
 int FUNC_4 (struct xfs_inode*) ;
 int FUNC_5 (int ,int *,int ,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,int) ;

int
FUNC_6(
 struct xfs_inode *VAR_1,
 struct xfs_bmbt_irec *VAR_2,
 bool *VAR_3)
{
 xfs_agnumber_t VAR_4;
 xfs_agblock_t VAR_5;
 xfs_extlen_t VAR_6;
 xfs_agblock_t VAR_7;
 xfs_extlen_t VAR_8;
 int VAR_9 = 0;


 if (!FUNC_4(VAR_1) || !FUNC_3(VAR_2)) {
  *VAR_3 = 0;
  return 0;
 }

 FUNC_2(VAR_1, VAR_2);

 VAR_4 = FUNC_1(VAR_1->i_mount, VAR_2->br_startblock);
 VAR_5 = FUNC_0(VAR_1->i_mount, VAR_2->br_startblock);
 VAR_6 = VAR_2->br_blockcount;

 VAR_9 = FUNC_5(VAR_1->i_mount, ((void*)0), VAR_4, VAR_5,
   VAR_6, &VAR_7, &VAR_8, 1);
 if (VAR_9)
  return VAR_9;

 *VAR_3 = 0;
 if (VAR_7 == VAR_0) {

  return 0;
 } else if (VAR_7 == VAR_5) {






  VAR_2->br_blockcount = VAR_8;
  *VAR_3 = 1;
  return 0;
 } else {






  VAR_2->br_blockcount = VAR_7 - VAR_5;
  return 0;
 }
}
