
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_dablk_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct TYPE_6__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_3__ m_sb; } ;
struct xfs_inode {TYPE_2__* d_ops; int i_ino; } ;
struct TYPE_4__ {int uuid; void* owner; void* blkno; } ;
struct xfs_da_intnode {int hdr; TYPE_1__ info; } ;
struct xfs_da_args {struct xfs_inode* dp; struct xfs_trans* trans; } ;
struct xfs_da3_node_hdr {int hdr; TYPE_1__ info; } ;
struct xfs_da3_icnode_hdr {int level; int magic; int member_0; } ;
struct xfs_buf {int b_bn; struct xfs_da_intnode* b_addr; int * b_ops; } ;
struct TYPE_5__ {int node_hdr_size; int (* node_hdr_to_disk ) (struct xfs_da_intnode*,struct xfs_da3_icnode_hdr*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_da_intnode*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_da_intnode*,int ,int) ;
 int FUNC_4 (struct xfs_da_intnode*,struct xfs_da3_icnode_hdr*) ;
 int FUNC_5 (struct xfs_da_args*) ;
 int FUNC_6 (int *,int *) ;
 int VAR_4 ;
 int FUNC_7 (struct xfs_trans*,struct xfs_inode*,int ,int,struct xfs_buf**,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_buf*,int ) ;

int
FUNC_11(
 struct xfs_da_args *VAR_5,
 xfs_dablk_t VAR_6,
 int VAR_7,
 struct xfs_buf **VAR_8,
 int VAR_9)
{
 struct xfs_da_intnode *VAR_10;
 struct xfs_trans *VAR_11 = VAR_5->trans;
 struct xfs_mount *VAR_12 = VAR_11->t_mountp;
 struct xfs_da3_icnode_hdr VAR_13 = {0};
 struct xfs_buf *VAR_14;
 int VAR_15;
 struct xfs_inode *VAR_16 = VAR_5->dp;

 FUNC_5(VAR_5);
 FUNC_0(VAR_7 <= VAR_3);

 VAR_15 = FUNC_7(VAR_11, VAR_16, VAR_6, -1, &VAR_14, VAR_9);
 if (VAR_15)
  return VAR_15;
 VAR_14->b_ops = &VAR_4;
 FUNC_9(VAR_11, VAR_14, VAR_0);
 VAR_10 = VAR_14->b_addr;

 if (FUNC_8(&VAR_12->m_sb)) {
  struct xfs_da3_node_hdr *VAR_17 = VAR_14->b_addr;

  FUNC_3(VAR_17, 0, sizeof(struct xfs_da3_node_hdr));
  VAR_13.magic = VAR_1;
  VAR_17->info.blkno = FUNC_2(VAR_14->b_bn);
  VAR_17->info.owner = FUNC_2(VAR_5->dp->i_ino);
  FUNC_6(&VAR_17->info.uuid, &VAR_12->m_sb.sb_meta_uuid);
 } else {
  VAR_13.magic = VAR_2;
 }
 VAR_13.level = VAR_7;

 VAR_16->d_ops->node_hdr_to_disk(VAR_10, &VAR_13);
 FUNC_10(VAR_11, VAR_14,
  FUNC_1(VAR_10, &VAR_10->hdr, VAR_16->d_ops->node_hdr_size));

 *VAR_8 = VAR_14;
 return 0;
}
