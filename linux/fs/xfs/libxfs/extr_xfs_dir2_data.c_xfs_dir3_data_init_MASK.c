
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_20__ {int sb_meta_uuid; } ;
struct TYPE_16__ {TYPE_6__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_17__ {TYPE_1__* d_ops; int i_ino; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_dir2_db_t ;
struct TYPE_18__ {void* length; void* freetag; } ;
typedef TYPE_4__ xfs_dir2_data_unused_t ;
struct xfs_dir3_blk_hdr {void* magic; int uuid; void* owner; void* blkno; } ;
typedef struct xfs_dir3_blk_hdr xfs_dir2_data_hdr_t ;
struct TYPE_19__ {TYPE_8__* geo; int * trans; TYPE_3__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
typedef int uint ;
struct xfs_dir2_data_free {void* length; void* offset; } ;
struct xfs_buf {int b_bn; struct xfs_dir3_blk_hdr* b_addr; int * b_ops; } ;
struct TYPE_21__ {int blksize; } ;
struct TYPE_15__ {int data_entry_offset; TYPE_4__* (* data_unused_p ) (struct xfs_dir3_blk_hdr*) ;struct xfs_dir2_data_free* (* data_bestfree_p ) (struct xfs_dir3_blk_hdr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_dir3_blk_hdr*,int ,int) ;
 struct xfs_dir2_data_free* FUNC_4 (struct xfs_dir3_blk_hdr*) ;
 TYPE_4__* FUNC_5 (struct xfs_dir3_blk_hdr*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_3__*,int ,int,struct xfs_buf**,int ) ;
 int FUNC_8 (TYPE_5__*,struct xfs_buf*) ;
 int FUNC_9 (TYPE_5__*,struct xfs_buf*,TYPE_4__*) ;
 void** FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_8__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (int *,struct xfs_buf*,int ) ;

int
FUNC_14(
 xfs_da_args_t *VAR_7,
 xfs_dir2_db_t VAR_8,
 struct xfs_buf **VAR_9)
{
 struct xfs_buf *VAR_10;
 xfs_dir2_data_hdr_t *VAR_11;
 xfs_inode_t *VAR_12;
 xfs_dir2_data_unused_t *VAR_13;
 struct xfs_dir2_data_free *VAR_14;
 int VAR_15;
 int VAR_16;
 xfs_mount_t *VAR_17;
 xfs_trans_t *VAR_18;
 int VAR_19;

 VAR_12 = VAR_7->dp;
 VAR_17 = VAR_12->i_mount;
 VAR_18 = VAR_7->trans;



 VAR_15 = FUNC_7(VAR_18, VAR_12, FUNC_11(VAR_7->geo, VAR_8),
          -1, &VAR_10, VAR_1);
 if (VAR_15)
  return VAR_15;
 VAR_10->b_ops = &VAR_6;
 FUNC_13(VAR_18, VAR_10, VAR_0);




 VAR_11 = VAR_10->b_addr;
 if (FUNC_12(&VAR_17->m_sb)) {
  struct xfs_dir3_blk_hdr *VAR_20 = VAR_10->b_addr;

  FUNC_3(VAR_20, 0, sizeof(*VAR_20));
  VAR_20->magic = FUNC_1(VAR_5);
  VAR_20->blkno = FUNC_2(VAR_10->b_bn);
  VAR_20->owner = FUNC_2(VAR_12->i_ino);
  FUNC_6(&VAR_20->uuid, &VAR_17->m_sb.sb_meta_uuid);

 } else
  VAR_11->magic = FUNC_1(VAR_4);

 VAR_14 = VAR_12->d_ops->data_bestfree_p(VAR_11);
 VAR_14[0].offset = FUNC_0(VAR_12->d_ops->data_entry_offset);
 for (VAR_16 = 1; VAR_16 < VAR_2; VAR_16++) {
  VAR_14[VAR_16].length = 0;
  VAR_14[VAR_16].offset = 0;
 }




 VAR_13 = VAR_12->d_ops->data_unused_p(VAR_11);
 VAR_13->freetag = FUNC_0(VAR_3);

 VAR_19 = VAR_7->geo->blksize - (uint)VAR_12->d_ops->data_entry_offset;
 VAR_14[0].length = FUNC_0(VAR_19);
 VAR_13->length = FUNC_0(VAR_19);
 *FUNC_10(VAR_13) = FUNC_0((char *)VAR_13 - (char *)VAR_11);



 FUNC_8(VAR_7, VAR_10);
 FUNC_9(VAR_7, VAR_10, VAR_13);
 *VAR_9 = VAR_10;
 return 0;
}
