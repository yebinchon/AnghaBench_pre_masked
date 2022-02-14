
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_ino_t ;
typedef scalar_t__ uint32_t ;
struct xfs_dsymlink_hdr {int sl_owner; int sl_bytes; int sl_offset; } ;
struct xfs_buf {struct xfs_dsymlink_hdr* b_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

bool
FUNC_2(
 xfs_ino_t VAR_0,
 uint32_t VAR_1,
 uint32_t VAR_2,
 struct xfs_buf *VAR_3)
{
 struct xfs_dsymlink_hdr *VAR_4 = VAR_3->b_addr;

 if (VAR_1 != FUNC_0(VAR_4->sl_offset))
  return 0;
 if (VAR_2 != FUNC_0(VAR_4->sl_bytes))
  return 0;
 if (VAR_0 != FUNC_1(VAR_4->sl_owner))
  return 0;


 return 1;
}
