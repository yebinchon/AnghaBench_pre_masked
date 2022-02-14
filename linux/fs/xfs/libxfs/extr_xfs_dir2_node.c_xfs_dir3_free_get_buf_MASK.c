
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_dir2_db_t ;
struct TYPE_8__ {int geo; struct xfs_inode* dp; struct xfs_trans* trans; } ;
typedef TYPE_3__ xfs_da_args_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_9__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_4__ m_sb; } ;
struct xfs_inode {TYPE_2__* d_ops; int i_ino; struct xfs_mount* i_mount; } ;
struct TYPE_6__ {int uuid; void* owner; void* blkno; } ;
struct xfs_dir3_icfree_hdr {int magic; TYPE_1__ hdr; } ;
struct xfs_dir3_free_hdr {int magic; TYPE_1__ hdr; } ;
struct xfs_buf {struct xfs_dir3_icfree_hdr* b_addr; int b_bn; int * b_ops; } ;
typedef int hdr ;
struct TYPE_7__ {int (* free_hdr_to_disk ) (struct xfs_dir3_icfree_hdr*,struct xfs_dir3_icfree_hdr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_dir3_icfree_hdr*,int ,int) ;
 int FUNC_2 (struct xfs_dir3_icfree_hdr*,struct xfs_dir3_icfree_hdr*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_inode*,int ,int,struct xfs_buf**,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_buf*,int ) ;

__attribute__((used)) static int
FUNC_8(
 xfs_da_args_t *VAR_5,
 xfs_dir2_db_t VAR_6,
 struct xfs_buf **VAR_7)
{
 struct xfs_trans *VAR_8 = VAR_5->trans;
 struct xfs_inode *VAR_9 = VAR_5->dp;
 struct xfs_mount *VAR_10 = VAR_9->i_mount;
 struct xfs_buf *VAR_11;
 int VAR_12;
 struct xfs_dir3_icfree_hdr VAR_13;

 VAR_12 = FUNC_4(VAR_8, VAR_9, FUNC_5(VAR_5->geo, VAR_6),
       -1, &VAR_11, VAR_1);
 if (VAR_12)
  return VAR_12;

 FUNC_7(VAR_8, VAR_11, VAR_0);
 VAR_11->b_ops = &VAR_4;





 FUNC_1(VAR_11->b_addr, 0, sizeof(struct xfs_dir3_free_hdr));
 FUNC_1(&VAR_13, 0, sizeof(VAR_13));

 if (FUNC_6(&VAR_10->m_sb)) {
  struct xfs_dir3_free_hdr *VAR_14 = VAR_11->b_addr;

  VAR_13.magic = VAR_3;

  VAR_14->hdr.blkno = FUNC_0(VAR_11->b_bn);
  VAR_14->hdr.owner = FUNC_0(VAR_9->i_ino);
  FUNC_3(&VAR_14->hdr.uuid, &VAR_10->m_sb.sb_meta_uuid);
 } else
  VAR_13.magic = VAR_2;
 VAR_9->d_ops->free_hdr_to_disk(VAR_11->b_addr, &VAR_13);
 *VAR_7 = VAR_11;
 return 0;
}
