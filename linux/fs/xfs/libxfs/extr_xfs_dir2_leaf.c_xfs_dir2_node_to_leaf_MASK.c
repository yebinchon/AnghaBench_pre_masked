
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_18__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_29__ {TYPE_1__* d_ops; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;
struct TYPE_30__ {int bestcount; } ;
typedef TYPE_5__ xfs_dir2_leaf_tail_t ;
typedef int xfs_dir2_leaf_t ;
typedef int xfs_dir2_free_t ;
typedef int xfs_dir2_data_off_t ;
struct TYPE_28__ {int active; TYPE_2__* blk; } ;
struct TYPE_31__ {TYPE_3__ path; int * mp; TYPE_7__* args; } ;
typedef TYPE_6__ xfs_da_state_t ;
struct TYPE_32__ {TYPE_18__* geo; int * trans; TYPE_4__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct xfs_dir3_icleaf_hdr {scalar_t__ magic; scalar_t__ stale; } ;
struct xfs_dir3_icfree_hdr {int nvalid; int firstdb; } ;
struct xfs_buf {int * b_ops; int * b_addr; } ;
struct TYPE_27__ {struct xfs_buf* bp; } ;
struct TYPE_26__ {int (* leaf_hdr_to_disk ) (int *,struct xfs_dir3_icleaf_hdr*) ;int (* free_bests_p ) (int *) ;int (* free_hdr_from_disk ) (struct xfs_dir3_icfree_hdr*,int *) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,int *) ;} ;
struct TYPE_25__ {scalar_t__ fsbcount; scalar_t__ freeblk; scalar_t__ blksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct xfs_dir3_icleaf_hdr*,int *) ;
 int FUNC_6 (struct xfs_dir3_icfree_hdr*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct xfs_dir3_icleaf_hdr*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int *,TYPE_4__*,scalar_t__*,int ) ;
 int FUNC_11 (TYPE_4__*,scalar_t__*,int ) ;
 int FUNC_12 (TYPE_18__*,int ) ;
 int FUNC_13 (int *,TYPE_4__*,scalar_t__,struct xfs_buf**) ;
 int FUNC_14 (TYPE_5__*) ;
 TYPE_5__* FUNC_15 (TYPE_18__*,int *) ;
 int FUNC_16 (TYPE_7__*,struct xfs_buf*,int *) ;
 int FUNC_17 (TYPE_7__*,scalar_t__,int*) ;
 int FUNC_18 (TYPE_7__*,int ,struct xfs_buf*) ;
 int VAR_9 ;
 int FUNC_19 (TYPE_4__*,struct xfs_buf*) ;
 int FUNC_20 (TYPE_7__*,struct xfs_dir3_icleaf_hdr*,struct xfs_buf*) ;
 int FUNC_21 (TYPE_7__*,struct xfs_buf*,int ,scalar_t__) ;
 int FUNC_22 (TYPE_7__*,struct xfs_buf*) ;
 int FUNC_23 (TYPE_7__*,struct xfs_buf*) ;
 scalar_t__ FUNC_24 (struct xfs_dir3_icleaf_hdr*,int) ;
 int FUNC_25 (int *,struct xfs_buf*) ;
 int FUNC_26 (int *,struct xfs_buf*,int ) ;

int
FUNC_27(
 xfs_da_state_t *VAR_10)
{
 xfs_da_args_t *VAR_11;
 xfs_inode_t *VAR_12;
 int VAR_13;
 struct xfs_buf *VAR_14;
 xfs_fileoff_t VAR_15;
 xfs_dir2_free_t *VAR_16;
 struct xfs_buf *VAR_17;
 xfs_dir2_leaf_tail_t *VAR_18;
 xfs_dir2_leaf_t *VAR_19;
 xfs_mount_t *VAR_20;
 int VAR_21;
 xfs_trans_t *VAR_22;
 struct xfs_dir3_icleaf_hdr VAR_23;
 struct xfs_dir3_icfree_hdr VAR_24;





 if (VAR_10->path.active > 1)
  return 0;
 VAR_11 = VAR_10->args;

 FUNC_9(VAR_11);

 VAR_20 = VAR_10->mp;
 VAR_12 = VAR_11->dp;
 VAR_22 = VAR_11->trans;



 if ((VAR_13 = FUNC_11(VAR_12, &VAR_15, VAR_2))) {
  return VAR_13;
 }
 VAR_15 -= VAR_11->geo->fsbcount;






 while (VAR_15 > VAR_11->geo->freeblk) {
  if ((VAR_13 = FUNC_17(VAR_11, VAR_15, &VAR_21))) {
   return VAR_13;
  }
  if (VAR_21)
   VAR_15 -= VAR_11->geo->fsbcount;
  else
   return 0;
 }



 if ((VAR_13 = FUNC_10(VAR_22, VAR_12, &VAR_15, VAR_2))) {
  return VAR_13;
 }



 if (FUNC_1(VAR_20, VAR_15) > VAR_6 + VAR_11->geo->blksize)
  return 0;
 VAR_17 = VAR_10->path.blk[0].bp;
 VAR_19 = VAR_17->b_addr;
 VAR_12->d_ops->leaf_hdr_from_disk(&VAR_23, VAR_19);

 FUNC_0(VAR_23.magic == VAR_5 ||
        VAR_23.magic == VAR_8);




 VAR_13 = FUNC_13(VAR_22, VAR_12, VAR_11->geo->freeblk, &VAR_14);
 if (VAR_13)
  return VAR_13;
 VAR_16 = VAR_14->b_addr;
 VAR_12->d_ops->free_hdr_from_disk(&VAR_24, VAR_16);

 FUNC_0(!VAR_24.firstdb);





 if (FUNC_24(&VAR_23, VAR_24.nvalid) > VAR_11->geo->blksize) {
  FUNC_25(VAR_22, VAR_14);
  return 0;
 }




 if (VAR_23.stale)
  FUNC_20(VAR_11, &VAR_23, VAR_17);

 VAR_17->b_ops = &VAR_9;
 FUNC_26(VAR_22, VAR_17, VAR_1);
 VAR_23.magic = (VAR_23.magic == VAR_5)
     ? VAR_4
     : VAR_7;




 VAR_18 = FUNC_15(VAR_11->geo, VAR_19);
 VAR_18->bestcount = FUNC_3(VAR_24.nvalid);




 FUNC_4(FUNC_14(VAR_18), VAR_12->d_ops->free_bests_p(VAR_16),
  VAR_24.nvalid * sizeof(xfs_dir2_data_off_t));

 VAR_12->d_ops->leaf_hdr_to_disk(VAR_19, &VAR_23);
 FUNC_22(VAR_11, VAR_17);
 FUNC_21(VAR_11, VAR_17, 0, FUNC_2(VAR_18->bestcount) - 1);
 FUNC_23(VAR_11, VAR_17);
 FUNC_19(VAR_12, VAR_17);




 VAR_13 = FUNC_18(VAR_11,
   FUNC_12(VAR_11->geo, VAR_3),
   VAR_14);
 if (VAR_13) {





  FUNC_0(VAR_13 != -VAR_0);
  return VAR_13;
 }
 VAR_14 = ((void*)0);






 VAR_13 = FUNC_16(VAR_11, VAR_17, ((void*)0));
 VAR_10->path.blk[0].bp = ((void*)0);
 return VAR_13;
}
