
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int xfs_trans_t ;
struct TYPE_16__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_17__ {int bestcount; } ;
typedef TYPE_3__ xfs_dir2_leaf_tail_t ;
struct xfs_dir2_data_hdr {scalar_t__ magic; } ;
typedef struct xfs_dir2_data_hdr xfs_dir2_leaf_t ;
typedef int xfs_dir2_db_t ;
struct TYPE_18__ {TYPE_11__* geo; int * trans; TYPE_2__* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct xfs_dir2_data_free {int length; } ;
struct xfs_buf {struct xfs_dir2_data_hdr* b_addr; } ;
typedef int __be16 ;
struct TYPE_15__ {scalar_t__ data_entry_offset; struct xfs_dir2_data_free* (* data_bestfree_p ) (struct xfs_dir2_data_hdr*) ;} ;
struct TYPE_14__ {scalar_t__ blksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;
 struct xfs_dir2_data_free* FUNC_6 (struct xfs_dir2_data_hdr*) ;
 int FUNC_7 (TYPE_11__*,int) ;
 int * FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (TYPE_11__*,struct xfs_dir2_data_hdr*) ;
 int FUNC_10 (TYPE_4__*,int,struct xfs_buf*) ;
 int FUNC_11 (int *,TYPE_2__*,int ,int,struct xfs_buf**) ;
 int FUNC_12 (TYPE_4__*,struct xfs_buf*,int ,int) ;
 int FUNC_13 (TYPE_4__*,struct xfs_buf*) ;
 int FUNC_14 (int *,struct xfs_buf*) ;

int
FUNC_15(
 xfs_da_args_t *VAR_3,
 struct xfs_buf *VAR_4,
 xfs_dir2_db_t VAR_5)
{
 __be16 *VAR_6;
 struct xfs_buf *VAR_7;
 xfs_inode_t *VAR_8;
 int VAR_9;
 xfs_dir2_leaf_t *VAR_10;
 xfs_dir2_leaf_tail_t *VAR_11;
 xfs_trans_t *VAR_12;

 VAR_8 = VAR_3->dp;
 VAR_12 = VAR_3->trans;



 VAR_9 = FUNC_11(VAR_12, VAR_8, FUNC_7(VAR_3->geo, VAR_5),
       -1, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_10 = VAR_4->b_addr;
 VAR_11 = FUNC_9(VAR_3->geo, VAR_10);
 if ((VAR_9 = FUNC_10(VAR_3, VAR_5, VAR_7))) {
  FUNC_0(VAR_9 != -VAR_0);
  FUNC_14(VAR_12, VAR_7);
  return VAR_9;
 }



 VAR_6 = FUNC_8(VAR_11);
 FUNC_2(&VAR_11->bestcount, -1);
 FUNC_5(&VAR_6[1], &VAR_6[0], FUNC_3(VAR_11->bestcount) * sizeof(*VAR_6));
 FUNC_13(VAR_3, VAR_4);
 FUNC_12(VAR_3, VAR_4, 0, FUNC_3(VAR_11->bestcount) - 1);
 return 0;
}
