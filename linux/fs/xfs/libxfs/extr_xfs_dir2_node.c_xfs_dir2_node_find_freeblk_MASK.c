
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef int xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icfree_hdr {int nvalid; scalar_t__ firstdb; } ;
struct xfs_dir2_free {int dummy; } ;
struct xfs_da_state_blk {int index; scalar_t__ blkno; struct xfs_buf* bp; } ;
struct xfs_da_args {int geo; struct xfs_trans* trans; struct xfs_inode* dp; } ;
struct xfs_buf {struct xfs_dir2_free* b_addr; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* free_hdr_from_disk ) (struct xfs_dir3_icfree_hdr*,struct xfs_dir2_free*) ;int * (* free_bests_p ) (struct xfs_dir2_free*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct xfs_dir2_free*) ;
 int FUNC_3 (struct xfs_dir3_icfree_hdr*,struct xfs_dir2_free*) ;
 int * FUNC_4 (struct xfs_dir2_free*) ;
 int FUNC_5 (struct xfs_dir3_icfree_hdr*,struct xfs_dir2_free*) ;
 int FUNC_6 (struct xfs_inode*,scalar_t__*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_inode*,int ,struct xfs_buf**) ;
 int FUNC_11 (struct xfs_trans*,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_12(
 struct xfs_da_args *VAR_3,
 struct xfs_da_state_blk *VAR_4,
 xfs_dir2_db_t *VAR_5,
 struct xfs_buf **VAR_6,
 int *VAR_7,
 int VAR_8)
{
 struct xfs_dir3_icfree_hdr VAR_9;
 struct xfs_dir2_free *VAR_10 = ((void*)0);
 struct xfs_inode *VAR_11 = VAR_3->dp;
 struct xfs_trans *VAR_12 = VAR_3->trans;
 struct xfs_buf *VAR_13 = ((void*)0);
 xfs_dir2_db_t VAR_14;
 xfs_dir2_db_t VAR_15;
 xfs_dir2_db_t VAR_16 = -1;
 xfs_dir2_db_t VAR_17 = -1;
 xfs_dir2_db_t VAR_18;
 xfs_fileoff_t VAR_19;
 __be16 *VAR_20 = ((void*)0);
 int VAR_21 = 0;
 int VAR_22;






 if (VAR_4) {
  VAR_13 = VAR_4->bp;
  VAR_10 = VAR_13->b_addr;
  VAR_21 = VAR_4->index;
  if (VAR_21 >= 0) {

   VAR_20 = VAR_11->d_ops->free_bests_p(VAR_10);
   VAR_11->d_ops->free_hdr_from_disk(&VAR_9, VAR_10);

   FUNC_0(VAR_21 < VAR_9.nvalid);
   FUNC_0(FUNC_1(VAR_20[VAR_21]) != VAR_0);
   FUNC_0(FUNC_1(VAR_20[VAR_21]) >= VAR_8);
   VAR_17 = VAR_9.firstdb + VAR_21;
   goto found_block;
  }





  VAR_16 = VAR_4->blkno;
  FUNC_11(VAR_12, VAR_13);
  VAR_13 = ((void*)0);
  VAR_4->bp = ((void*)0);
 }





 VAR_22 = FUNC_6(VAR_11, &VAR_19, VAR_1);
 if (VAR_22)
  return VAR_22;
 VAR_15 = FUNC_8(VAR_3->geo, (xfs_dablk_t)VAR_19);
 VAR_14 = FUNC_7(VAR_3->geo, VAR_2);

 for (VAR_18 = VAR_15 - 1; VAR_18 >= VAR_14; VAR_18--) {

  if (VAR_18 == VAR_16)
   continue;






  VAR_22 = FUNC_10(VAR_12, VAR_11,
    FUNC_9(VAR_3->geo, VAR_18),
    &VAR_13);
  if (VAR_22)
   return VAR_22;
  if (!VAR_13)
   continue;

  VAR_10 = VAR_13->b_addr;
  VAR_20 = VAR_11->d_ops->free_bests_p(VAR_10);
  VAR_11->d_ops->free_hdr_from_disk(&VAR_9, VAR_10);


  for (VAR_21 = VAR_9.nvalid - 1; VAR_21 >= 0; VAR_21--) {
   if (FUNC_1(VAR_20[VAR_21]) != VAR_0 &&
       FUNC_1(VAR_20[VAR_21]) >= VAR_8) {
    VAR_17 = VAR_9.firstdb + VAR_21;
    goto found_block;
   }
  }


  FUNC_11(VAR_12, VAR_13);
 }

found_block:
 *VAR_5 = VAR_17;
 *VAR_6 = VAR_13;
 *VAR_7 = VAR_21;
 return 0;
}
