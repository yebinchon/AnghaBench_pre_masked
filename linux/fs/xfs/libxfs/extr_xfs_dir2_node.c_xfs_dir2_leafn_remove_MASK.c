
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;


typedef int xfs_trans_t ;
struct TYPE_28__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int address; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_free_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef int xfs_dir2_data_hdr_t ;
struct TYPE_29__ {int namelen; } ;
typedef TYPE_3__ xfs_dir2_data_entry_t ;
struct TYPE_30__ {scalar_t__ blkno; int index; struct xfs_buf* bp; } ;
typedef TYPE_4__ xfs_da_state_blk_t ;
struct TYPE_31__ {scalar_t__ total; TYPE_15__* geo; int * trans; TYPE_2__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
typedef int uint ;
struct xfs_dir3_icleaf_hdr {int stale; int count; } ;
struct xfs_dir3_icfree_hdr {scalar_t__ firstdb; } ;
struct xfs_dir2_data_free {int length; } ;
struct xfs_buf {int * b_addr; } ;
typedef int ents ;
struct TYPE_27__ {scalar_t__ (* db_to_fdb ) (TYPE_15__*,scalar_t__) ;scalar_t__ (* free_max_bests ) (TYPE_15__*) ;int (* db_to_fdindex ) (TYPE_15__*,scalar_t__) ;int data_entry_offset; scalar_t__ leaf_hdr_size; int (* free_hdr_from_disk ) (struct xfs_dir3_icfree_hdr*,int *) ;int (* data_entsize ) (int ) ;struct xfs_dir2_data_free* (* data_bestfree_p ) (int *) ;int (* leaf_hdr_to_disk ) (int *,struct xfs_dir3_icleaf_hdr*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,int *) ;} ;
struct TYPE_26__ {int blksize; scalar_t__ magicpct; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_dir3_icleaf_hdr*,int *) ;
 struct xfs_dir2_leaf_entry* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct xfs_dir3_icleaf_hdr*) ;
 struct xfs_dir2_data_free* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_15__*,scalar_t__) ;
 int FUNC_10 (struct xfs_dir3_icfree_hdr*,int *) ;
 scalar_t__ FUNC_11 (TYPE_15__*) ;
 int FUNC_12 (TYPE_15__*,scalar_t__) ;
 int FUNC_13 (TYPE_5__*,int) ;
 scalar_t__ FUNC_14 (TYPE_15__*,int ) ;
 int FUNC_15 (TYPE_2__*,int *,int*) ;
 int FUNC_16 (TYPE_5__*,struct xfs_buf*) ;
 int FUNC_17 (TYPE_5__*,struct xfs_buf*,int,int ,int*,int*) ;
 scalar_t__ FUNC_18 (TYPE_15__*,int ) ;
 int FUNC_19 (TYPE_15__*,int ) ;
 int FUNC_20 (TYPE_15__*,scalar_t__) ;
 int FUNC_21 (int *,TYPE_2__*,int ,struct xfs_buf**) ;
 int FUNC_22 (TYPE_5__*,scalar_t__,struct xfs_buf*) ;
 int FUNC_23 (TYPE_5__*,int *,int *,scalar_t__,int,struct xfs_buf*,int) ;
 int FUNC_24 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_25 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_26 (TYPE_5__*,struct xfs_buf*,int,int) ;
 int FUNC_27 (TYPE_5__*,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_28(
 xfs_da_args_t *VAR_3,
 struct xfs_buf *VAR_4,
 int VAR_5,
 xfs_da_state_blk_t *VAR_6,
 int *VAR_7)
{
 xfs_dir2_data_hdr_t *VAR_8;
 xfs_dir2_db_t VAR_9;
 struct xfs_buf *VAR_10;
 xfs_dir2_data_entry_t *VAR_11;
 xfs_inode_t *VAR_12;
 xfs_dir2_leaf_t *VAR_13;
 xfs_dir2_leaf_entry_t *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 xfs_trans_t *VAR_19;
 struct xfs_dir2_data_free *VAR_20;
 struct xfs_dir3_icleaf_hdr VAR_21;
 struct xfs_dir2_leaf_entry *VAR_22;

 FUNC_13(VAR_3, VAR_5);

 VAR_12 = VAR_3->dp;
 VAR_19 = VAR_3->trans;
 VAR_13 = VAR_4->b_addr;
 VAR_12->d_ops->leaf_hdr_from_disk(&VAR_21, VAR_13);
 VAR_22 = VAR_12->d_ops->leaf_ents_p(VAR_13);




 VAR_14 = &VAR_22[VAR_5];




 VAR_9 = FUNC_18(VAR_3->geo, FUNC_2(VAR_14->address));
 FUNC_0(VAR_6->blkno == VAR_9);
 VAR_16 = FUNC_19(VAR_3->geo, FUNC_2(VAR_14->address));
 FUNC_0(VAR_6->index == VAR_16);





 VAR_21.stale++;
 VAR_12->d_ops->leaf_hdr_to_disk(VAR_13, &VAR_21);
 FUNC_27(VAR_3, VAR_4);

 VAR_14->address = FUNC_3(VAR_2);
 FUNC_26(VAR_3, VAR_4, VAR_5, VAR_5);





 VAR_10 = VAR_6->bp;
 VAR_8 = VAR_10->b_addr;
 VAR_11 = (xfs_dir2_data_entry_t *)((char *)VAR_8 + VAR_16);
 VAR_20 = VAR_12->d_ops->data_bestfree_p(VAR_8);
 VAR_15 = FUNC_1(VAR_20[0].length);
 VAR_17 = VAR_18 = 0;
 FUNC_17(VAR_3, VAR_10, VAR_16,
  VAR_12->d_ops->data_entsize(VAR_11->namelen), &VAR_17, &VAR_18);




 if (VAR_18)
  FUNC_15(VAR_12, VAR_8, &VAR_17);
 if (VAR_17)
  FUNC_16(VAR_3, VAR_10);
 FUNC_24(VAR_12, VAR_10);




 if (VAR_15 < FUNC_1(VAR_20[0].length)) {
  int VAR_23;
  struct xfs_buf *VAR_24;
  xfs_dir2_db_t VAR_25;
  int VAR_26;
  xfs_dir2_free_t *VAR_27;





  VAR_25 = VAR_12->d_ops->db_to_fdb(VAR_3->geo, VAR_9);
  VAR_23 = FUNC_21(VAR_19, VAR_12,
        FUNC_20(VAR_3->geo, VAR_25),
        &VAR_24);
  if (VAR_23)
   return VAR_23;
  VAR_27 = VAR_24->b_addr;
  VAR_26 = VAR_12->d_ops->db_to_fdindex(VAR_3->geo, VAR_9);
  VAR_15 = FUNC_1(VAR_20[0].length);




  if (VAR_15 == VAR_3->geo->blksize -
          VAR_12->d_ops->data_entry_offset) {



   VAR_23 = FUNC_22(VAR_3, VAR_9, VAR_10);
   if (VAR_23 == 0) {
    VAR_6->bp = ((void*)0);
    VAR_8 = ((void*)0);
   }





   else if (!(VAR_23 == -VAR_0 && VAR_3->total == 0))
    return VAR_23;
  }




  VAR_23 = FUNC_23(VAR_3, VAR_8, VAR_27,
       VAR_25, VAR_26, VAR_24, VAR_15);
  if (VAR_23)
   return VAR_23;
 }

 FUNC_25(VAR_12, VAR_4);




 *VAR_7 = (VAR_12->d_ops->leaf_hdr_size +
   (uint)sizeof(VAR_22[0]) * (VAR_21.count - VAR_21.stale)) <
  VAR_3->geo->magicpct;
 return 0;
}
