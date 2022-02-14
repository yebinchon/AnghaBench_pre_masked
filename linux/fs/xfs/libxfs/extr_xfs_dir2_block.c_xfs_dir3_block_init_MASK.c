
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_2__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_inode {int i_ino; } ;
struct xfs_dir3_blk_hdr {void* magic; int uuid; void* owner; void* blkno; } ;
struct xfs_buf {int b_bn; int * b_ops; struct xfs_dir3_blk_hdr* b_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_dir3_blk_hdr*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_buf*,int ) ;

__attribute__((used)) static void
FUNC_6(
 struct xfs_mount *VAR_4,
 struct xfs_trans *VAR_5,
 struct xfs_buf *VAR_6,
 struct xfs_inode *VAR_7)
{
 struct xfs_dir3_blk_hdr *VAR_8 = VAR_6->b_addr;

 VAR_6->b_ops = &VAR_3;
 FUNC_5(VAR_5, VAR_6, VAR_0);

 if (FUNC_4(&VAR_4->m_sb)) {
  FUNC_2(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->magic = FUNC_0(VAR_2);
  VAR_8->blkno = FUNC_1(VAR_6->b_bn);
  VAR_8->owner = FUNC_1(VAR_7->i_ino);
  FUNC_3(&VAR_8->uuid, &VAR_4->m_sb.sb_meta_uuid);
  return;

 }
 VAR_8->magic = FUNC_0(VAR_1);
}
