
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;


typedef int xfs_trans_t ;
struct TYPE_27__ {scalar_t__ di_size; } ;
struct TYPE_31__ {TYPE_2__* d_ops; TYPE_1__ i_d; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_32__ {int bestcount; } ;
typedef TYPE_6__ xfs_dir2_leaf_tail_t ;
struct TYPE_29__ {void* magic; } ;
struct TYPE_30__ {TYPE_3__ info; } ;
struct TYPE_33__ {TYPE_4__ hdr; } ;
typedef TYPE_7__ xfs_dir2_leaf_t ;
typedef TYPE_7__ xfs_dir2_free_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef int xfs_dir2_data_off_t ;
struct TYPE_34__ {TYPE_15__* geo; int * trans; TYPE_5__* dp; } ;
typedef TYPE_9__ xfs_da_args_t ;
typedef int uint ;
struct xfs_dir3_icfree_hdr {int nused; int nvalid; } ;
struct xfs_buf {int * b_ops; TYPE_7__* b_addr; } ;
typedef void* __be16 ;
struct TYPE_28__ {int (* free_hdr_to_disk ) (TYPE_7__*,struct xfs_dir3_icfree_hdr*) ;void** (* free_bests_p ) (TYPE_7__*) ;int (* free_hdr_from_disk ) (struct xfs_dir3_icfree_hdr*,TYPE_7__*) ;} ;
struct TYPE_26__ {int blksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_dir3_icfree_hdr*,TYPE_7__*) ;
 void** FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,struct xfs_dir3_icfree_hdr*) ;
 int FUNC_7 (TYPE_9__*) ;
 scalar_t__ FUNC_8 (TYPE_15__*,int ) ;
 int FUNC_9 (TYPE_9__*,struct xfs_buf*,int ,int) ;
 int FUNC_10 (TYPE_9__*,struct xfs_buf*) ;
 int FUNC_11 (TYPE_9__*,int ,scalar_t__*) ;
 void** FUNC_12 (TYPE_6__*) ;
 TYPE_6__* FUNC_13 (TYPE_15__*,TYPE_7__*) ;
 int FUNC_14 (TYPE_9__*,scalar_t__,struct xfs_buf**) ;
 int FUNC_15 (TYPE_5__*,struct xfs_buf*) ;
 int FUNC_16 (TYPE_9__*,struct xfs_buf*) ;
 int VAR_8 ;
 int FUNC_17 (int *,struct xfs_buf*,int ) ;

int
FUNC_18(
 xfs_da_args_t *VAR_9,
 struct xfs_buf *VAR_10)
{
 xfs_inode_t *VAR_11;
 int VAR_12;
 struct xfs_buf *VAR_13;
 xfs_dir2_db_t VAR_14;
 xfs_dir2_free_t *VAR_15;
 __be16 *VAR_16;
 int VAR_17;
 xfs_dir2_leaf_t *VAR_18;
 xfs_dir2_leaf_tail_t *VAR_19;
 int VAR_20;
 xfs_dir2_data_off_t VAR_21;
 __be16 *VAR_22;
 xfs_trans_t *VAR_23;
 struct xfs_dir3_icfree_hdr VAR_24;

 FUNC_7(VAR_9);

 VAR_11 = VAR_9->dp;
 VAR_23 = VAR_9->trans;



 if ((VAR_12 = FUNC_11(VAR_9, VAR_4, &VAR_14))) {
  return VAR_12;
 }
 FUNC_0(VAR_14 == FUNC_8(VAR_9->geo, VAR_3));



 VAR_12 = FUNC_14(VAR_9, VAR_14, &VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_15 = VAR_13->b_addr;
 VAR_11->d_ops->free_hdr_from_disk(&VAR_24, VAR_15);
 VAR_18 = VAR_10->b_addr;
 VAR_19 = FUNC_13(VAR_9->geo, VAR_18);
 if (FUNC_2(VAR_19->bestcount) >
    (uint)VAR_11->i_d.di_size / VAR_9->geo->blksize)
  return -VAR_0;





 VAR_16 = FUNC_12(VAR_19);
 VAR_22 = VAR_11->d_ops->free_bests_p(VAR_15);
 for (VAR_17 = VAR_20 = 0; VAR_17 < FUNC_2(VAR_19->bestcount); VAR_17++, VAR_16++, VAR_22++) {
  if ((VAR_21 = FUNC_1(*VAR_16)) != VAR_1)
   VAR_20++;
  *VAR_22 = FUNC_3(VAR_21);
 }




 VAR_24.nused = VAR_20;
 VAR_24.nvalid = FUNC_2(VAR_19->bestcount);

 VAR_11->d_ops->free_hdr_to_disk(VAR_13->b_addr, &VAR_24);
 FUNC_9(VAR_9, VAR_13, 0, VAR_24.nvalid - 1);
 FUNC_10(VAR_9, VAR_13);







 if (VAR_18->hdr.info.magic == FUNC_3(VAR_5))
  VAR_18->hdr.info.magic = FUNC_3(VAR_6);
 else
  VAR_18->hdr.info.magic = FUNC_3(VAR_7);
 VAR_10->b_ops = &VAR_8;
 FUNC_17(VAR_23, VAR_10, VAR_2);
 FUNC_16(VAR_9, VAR_10);
 FUNC_15(VAR_11, VAR_10);
 return 0;
}
