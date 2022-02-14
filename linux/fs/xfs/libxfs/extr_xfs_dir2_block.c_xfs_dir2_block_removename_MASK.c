
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_21__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int xfs_dir2_sf_hdr_t ;
struct TYPE_22__ {int address; } ;
typedef TYPE_3__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_data_hdr_t ;
struct TYPE_23__ {int namelen; } ;
typedef TYPE_4__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_24__ {int stale; } ;
typedef TYPE_5__ xfs_dir2_block_tail_t ;
struct TYPE_25__ {int geo; int * trans; TYPE_2__* dp; } ;
typedef TYPE_6__ xfs_da_args_t ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_20__ {int (* data_entsize ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_3__* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *,struct xfs_buf*,int,int) ;
 int FUNC_8 (int *,struct xfs_buf*) ;
 int FUNC_9 (TYPE_6__*,struct xfs_buf**,int*) ;
 int FUNC_10 (TYPE_2__*,int *,int *) ;
 TYPE_5__* FUNC_11 (int ,int *) ;
 int FUNC_12 (TYPE_6__*,struct xfs_buf*,int,int *) ;
 int FUNC_13 (TYPE_2__*,int *,int*) ;
 int FUNC_14 (TYPE_6__*,struct xfs_buf*) ;
 int FUNC_15 (TYPE_6__*,struct xfs_buf*,int ,int ,int*,int*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_2__*,struct xfs_buf*) ;

int
FUNC_18(
 xfs_da_args_t *VAR_1)
{
 xfs_dir2_data_hdr_t *VAR_2;
 xfs_dir2_leaf_entry_t *VAR_3;
 struct xfs_buf *VAR_4;
 xfs_dir2_block_tail_t *VAR_5;
 xfs_dir2_data_entry_t *VAR_6;
 xfs_inode_t *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 xfs_dir2_sf_hdr_t VAR_12;
 int VAR_13;
 xfs_trans_t *VAR_14;

 FUNC_5(VAR_1);





 if ((VAR_9 = FUNC_9(VAR_1, &VAR_4, &VAR_8))) {
  return VAR_9;
 }
 VAR_7 = VAR_1->dp;
 VAR_14 = VAR_1->trans;
 VAR_2 = VAR_4->b_addr;
 VAR_5 = FUNC_11(VAR_1->geo, VAR_2);
 VAR_3 = FUNC_6(VAR_5);



 VAR_6 = (xfs_dir2_data_entry_t *)((char *)VAR_2 +
   FUNC_16(VAR_1->geo,
      FUNC_2(VAR_3[VAR_8].address)));



 VAR_10 = VAR_11 = 0;
 FUNC_15(VAR_1, VAR_4,
  (xfs_dir2_data_aoff_t)((char *)VAR_6 - (char *)VAR_2),
  VAR_7->d_ops->data_entsize(VAR_6->namelen), &VAR_10, &VAR_11);



 FUNC_1(&VAR_5->stale, 1);
 FUNC_8(VAR_14, VAR_4);



 VAR_3[VAR_8].address = FUNC_3(VAR_0);
 FUNC_7(VAR_14, VAR_4, VAR_8, VAR_8);



 if (VAR_11)
  FUNC_13(VAR_7, VAR_2, &VAR_10);
 if (VAR_10)
  FUNC_14(VAR_1, VAR_4);
 FUNC_17(VAR_7, VAR_4);



 VAR_13 = FUNC_10(VAR_7, VAR_2, &VAR_12);
 if (VAR_13 > FUNC_0(VAR_7))
  return 0;




 return FUNC_12(VAR_1, VAR_4, VAR_13, &VAR_12);
}
