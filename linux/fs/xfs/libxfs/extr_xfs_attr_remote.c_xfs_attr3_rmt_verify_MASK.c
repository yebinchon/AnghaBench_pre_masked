
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef scalar_t__ xfs_daddr_t ;
struct TYPE_2__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_attr3_rmt_hdr {scalar_t__ rm_owner; int rm_bytes; int rm_offset; int rm_blkno; int rm_uuid; int rm_magic; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct xfs_buf*,int ) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_5(
 struct xfs_mount *VAR_2,
 struct xfs_buf *VAR_3,
 void *VAR_4,
 int VAR_5,
 xfs_daddr_t VAR_6)
{
 struct xfs_attr3_rmt_hdr *VAR_7 = VAR_4;

 if (!FUNC_3(&VAR_2->m_sb))
  return VAR_1;
 if (!FUNC_4(VAR_3, VAR_7->rm_magic))
  return VAR_1;
 if (!FUNC_2(&VAR_7->rm_uuid, &VAR_2->m_sb.sb_meta_uuid))
  return VAR_1;
 if (FUNC_1(VAR_7->rm_blkno) != VAR_6)
  return VAR_1;
 if (FUNC_0(VAR_7->rm_bytes) > VAR_5 - sizeof(*VAR_7))
  return VAR_1;
 if (FUNC_0(VAR_7->rm_offset) +
    FUNC_0(VAR_7->rm_bytes) > VAR_0)
  return VAR_1;
 if (VAR_7->rm_owner == 0)
  return VAR_1;

 return ((void*)0);
}
