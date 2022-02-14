
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct TYPE_2__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_dsymlink_hdr {scalar_t__ sl_owner; int sl_lsn; int sl_bytes; int sl_offset; int sl_blkno; int sl_uuid; int sl_magic; } ;
struct xfs_buf {scalar_t__ b_bn; struct xfs_dsymlink_hdr* b_addr; struct xfs_mount* b_mount; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct xfs_mount*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct xfs_buf*,int ) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_6(
 struct xfs_buf *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->b_mount;
 struct xfs_dsymlink_hdr *VAR_4 = VAR_2->b_addr;

 if (!FUNC_4(&VAR_3->m_sb))
  return VAR_1;
 if (!FUNC_5(VAR_2, VAR_4->sl_magic))
  return VAR_1;
 if (!FUNC_2(&VAR_4->sl_uuid, &VAR_3->m_sb.sb_meta_uuid))
  return VAR_1;
 if (VAR_2->b_bn != FUNC_1(VAR_4->sl_blkno))
  return VAR_1;
 if (FUNC_0(VAR_4->sl_offset) +
    FUNC_0(VAR_4->sl_bytes) >= VAR_0)
  return VAR_1;
 if (VAR_4->sl_owner == 0)
  return VAR_1;
 if (!FUNC_3(VAR_3, FUNC_1(VAR_4->sl_lsn)))
  return VAR_1;

 return ((void*)0);
}
