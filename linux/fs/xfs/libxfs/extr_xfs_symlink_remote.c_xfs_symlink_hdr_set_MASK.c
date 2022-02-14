
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_ino_t ;
typedef int uint32_t ;
struct TYPE_2__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_dsymlink_hdr {void* sl_blkno; void* sl_owner; int sl_uuid; void* sl_bytes; void* sl_offset; void* sl_magic; } ;
struct xfs_buf {int * b_ops; int b_bn; struct xfs_dsymlink_hdr* b_addr; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_dsymlink_hdr*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_5(
 struct xfs_mount *VAR_2,
 xfs_ino_t VAR_3,
 uint32_t VAR_4,
 uint32_t VAR_5,
 struct xfs_buf *VAR_6)
{
 struct xfs_dsymlink_hdr *VAR_7 = VAR_6->b_addr;

 if (!FUNC_4(&VAR_2->m_sb))
  return 0;

 FUNC_2(VAR_7, 0, sizeof(struct xfs_dsymlink_hdr));
 VAR_7->sl_magic = FUNC_0(VAR_0);
 VAR_7->sl_offset = FUNC_0(VAR_4);
 VAR_7->sl_bytes = FUNC_0(VAR_5);
 FUNC_3(&VAR_7->sl_uuid, &VAR_2->m_sb.sb_meta_uuid);
 VAR_7->sl_owner = FUNC_1(VAR_3);
 VAR_7->sl_blkno = FUNC_1(VAR_6->b_bn);
 VAR_6->b_ops = &VAR_1;

 return sizeof(struct xfs_dsymlink_hdr);
}
