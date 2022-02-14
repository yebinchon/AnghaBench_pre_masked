
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xfs_dir2_leaf_t ;
typedef scalar_t__ xfs_dablk_t ;
struct TYPE_18__ {int active; TYPE_5__* blk; } ;
struct TYPE_15__ {TYPE_9__ path; TYPE_9__ altpath; TYPE_3__* args; } ;
typedef TYPE_4__ xfs_da_state_t ;
struct TYPE_16__ {scalar_t__ blkno; TYPE_6__* bp; } ;
typedef TYPE_5__ xfs_da_state_blk_t ;
struct xfs_inode {TYPE_2__* d_ops; } ;
struct xfs_dir3_icleaf_hdr {int count; int stale; scalar_t__ forw; scalar_t__ back; } ;
struct xfs_dir2_leaf_entry {int dummy; } ;
struct xfs_buf {int * b_addr; } ;
typedef int ents ;
struct TYPE_17__ {int * b_addr; } ;
struct TYPE_14__ {int trans; TYPE_1__* geo; struct xfs_inode* dp; } ;
struct TYPE_13__ {int leaf_hdr_size; struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,int *) ;} ;
struct TYPE_12__ {int blksize; } ;


 int FUNC_0 (TYPE_9__*,TYPE_9__*,int) ;
 int FUNC_1 (struct xfs_dir3_icleaf_hdr*,int *) ;
 struct xfs_dir2_leaf_entry* FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_dir3_icleaf_hdr*,int *) ;
 struct xfs_dir2_leaf_entry* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_9__*,int,int ,int*) ;
 int FUNC_6 (struct xfs_inode*,TYPE_6__*) ;
 int FUNC_7 (int ,struct xfs_inode*,scalar_t__,int,struct xfs_buf**) ;
 int FUNC_8 (int ,struct xfs_buf*) ;

int
FUNC_9(
 xfs_da_state_t *VAR_0,
 int *VAR_1)
{
 xfs_da_state_blk_t *VAR_2;
 xfs_dablk_t VAR_3;
 struct xfs_buf *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 xfs_dir2_leaf_t *VAR_10;
 int VAR_11;
 struct xfs_dir3_icleaf_hdr VAR_12;
 struct xfs_dir2_leaf_entry *VAR_13;
 struct xfs_inode *VAR_14 = VAR_0->args->dp;






 VAR_2 = &VAR_0->path.blk[VAR_0->path.active - 1];
 VAR_10 = VAR_2->bp->b_addr;
 VAR_14->d_ops->leaf_hdr_from_disk(&VAR_12, VAR_10);
 VAR_13 = VAR_14->d_ops->leaf_ents_p(VAR_10);
 FUNC_6(VAR_14, VAR_2->bp);

 VAR_6 = VAR_12.count - VAR_12.stale;
 VAR_5 = VAR_14->d_ops->leaf_hdr_size + VAR_6 * sizeof(VAR_13[0]);
 if (VAR_5 > (VAR_0->args->geo->blksize >> 1)) {



  *VAR_1 = 0;
  return 0;
 }






 if (VAR_6 == 0) {




  VAR_8 = (VAR_12.forw != 0);
  FUNC_0(&VAR_0->altpath, &VAR_0->path, sizeof(VAR_0->path));
  VAR_7 = FUNC_5(VAR_0, &VAR_0->altpath, VAR_8, 0,
   &VAR_11);
  if (VAR_7)
   return VAR_7;
  *VAR_1 = VAR_11 ? 2 : 0;
  return 0;
 }







 VAR_8 = VAR_12.forw < VAR_12.back;
 for (VAR_9 = 0, VAR_4 = ((void*)0); VAR_9 < 2; VAR_8 = !VAR_8, VAR_9++) {
  struct xfs_dir3_icleaf_hdr VAR_15;

  VAR_3 = VAR_8 ? VAR_12.forw : VAR_12.back;
  if (VAR_3 == 0)
   continue;



  VAR_7 = FUNC_7(VAR_0->args->trans, VAR_14,
         VAR_3, -1, &VAR_4);
  if (VAR_7)
   return VAR_7;




  VAR_6 = VAR_12.count - VAR_12.stale;
  VAR_5 = VAR_0->args->geo->blksize -
   (VAR_0->args->geo->blksize >> 2);

  VAR_10 = VAR_4->b_addr;
  VAR_14->d_ops->leaf_hdr_from_disk(&VAR_15, VAR_10);
  VAR_13 = VAR_14->d_ops->leaf_ents_p(VAR_10);
  VAR_6 += VAR_15 - VAR_15;
  VAR_5 -= VAR_6 * sizeof(VAR_13[0]);




  if (VAR_5 >= 0)
   break;
  FUNC_8(VAR_0->args->trans, VAR_4);
 }



 if (VAR_9 >= 2) {
  *VAR_1 = 0;
  return 0;
 }





 FUNC_0(&VAR_0->altpath, &VAR_0->path, sizeof(VAR_0->path));
 if (VAR_3 < VAR_2->blkno)
  VAR_7 = FUNC_5(VAR_0, &VAR_0->altpath, VAR_8, 0,
   &VAR_11);
 else
  VAR_7 = FUNC_5(VAR_0, &VAR_0->path, VAR_8, 0,
   &VAR_11);
 if (VAR_7) {
  return VAR_7;
 }
 *VAR_1 = VAR_11 ? 0 : 1;
 return 0;
}
