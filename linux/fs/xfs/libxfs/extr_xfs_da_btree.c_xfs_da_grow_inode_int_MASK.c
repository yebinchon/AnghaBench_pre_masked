
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_rfsblock_t ;
typedef scalar_t__ xfs_fileoff_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_2__ {scalar_t__ di_nblocks; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct xfs_da_args {int whichfork; int total; struct xfs_inode* dp; struct xfs_trans* trans; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfs_bmbt_irec* FUNC_1 (int,int ) ;
 int FUNC_2 (struct xfs_bmbt_irec*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_inode*,int,scalar_t__*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_inode*,scalar_t__,int,int,int ,struct xfs_bmbt_irec*,int*) ;

int
FUNC_7(
 struct xfs_da_args *VAR_4,
 xfs_fileoff_t *VAR_5,
 int VAR_6)
{
 struct xfs_trans *VAR_7 = VAR_4->trans;
 struct xfs_inode *VAR_8 = VAR_4->dp;
 int VAR_9 = VAR_4->whichfork;
 xfs_rfsblock_t VAR_10 = VAR_8->i_d.di_nblocks;
 struct xfs_bmbt_irec VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;




 VAR_14 = FUNC_4(VAR_7, VAR_8, VAR_6, VAR_5, VAR_9);
 if (VAR_14)
  return VAR_14;




 VAR_13 = 1;
 VAR_14 = FUNC_6(VAR_7, VAR_8, *VAR_5, VAR_6,
   FUNC_5(VAR_9)|VAR_2|VAR_1,
   VAR_4->total, &VAR_11, &VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_0(VAR_13 <= 1);
 if (VAR_13 == 1) {
  VAR_12 = &VAR_11;
  VAR_17 = 1;
 } else if (VAR_13 == 0 && VAR_6 > 1) {
  xfs_fileoff_t VAR_18;
  int VAR_19;





  VAR_12 = FUNC_1(sizeof(*VAR_12) * VAR_6, 0);
  for (VAR_18 = *VAR_5, VAR_17 = 0; VAR_18 < *VAR_5 + VAR_6; ) {
   VAR_13 = FUNC_3(VAR_3, VAR_6);
   VAR_19 = (int)(*VAR_5 + VAR_6 - VAR_18);
   VAR_14 = FUNC_6(VAR_7, VAR_8, VAR_18, VAR_19,
     FUNC_5(VAR_9)|VAR_2,
     VAR_4->total, &VAR_12[VAR_17], &VAR_13);
   if (VAR_14)
    goto out_free_map;
   if (VAR_13 < 1)
    break;
   VAR_17 += VAR_13;
   VAR_18 = VAR_12[VAR_17 - 1].br_startoff +
       VAR_12[VAR_17 - 1].br_blockcount;
  }
 } else {
  VAR_17 = 0;
  VAR_12 = ((void*)0);
 }




 for (VAR_16 = 0, VAR_15 = 0; VAR_16 < VAR_17; VAR_16++)
  VAR_15 += VAR_12[VAR_16].br_blockcount;
 if (VAR_15 != VAR_6 || VAR_12[0].br_startoff != *VAR_5 ||
     VAR_12[VAR_17 - 1].br_startoff + VAR_12[VAR_17 - 1].br_blockcount !=
     *VAR_5 + VAR_6) {
  VAR_14 = -VAR_0;
  goto out_free_map;
 }


 VAR_4->total -= VAR_8->i_d.di_nblocks - VAR_10;

out_free_map:
 if (VAR_12 != &VAR_11)
  FUNC_2(VAR_12);
 return VAR_14;
}
