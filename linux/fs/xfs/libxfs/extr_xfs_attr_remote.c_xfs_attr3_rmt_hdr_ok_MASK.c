
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_ino_t ;
typedef int * xfs_failaddr_t ;
typedef scalar_t__ xfs_daddr_t ;
typedef scalar_t__ uint32_t ;
struct xfs_attr3_rmt_hdr {int rm_owner; int rm_bytes; int rm_offset; int rm_blkno; } ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_2(
 void *VAR_1,
 xfs_ino_t VAR_2,
 uint32_t VAR_3,
 uint32_t VAR_4,
 xfs_daddr_t VAR_5)
{
 struct xfs_attr3_rmt_hdr *VAR_6 = VAR_1;

 if (VAR_5 != FUNC_1(VAR_6->rm_blkno))
  return VAR_0;
 if (VAR_3 != FUNC_0(VAR_6->rm_offset))
  return VAR_0;
 if (VAR_4 != FUNC_0(VAR_6->rm_bytes))
  return VAR_0;
 if (VAR_2 != FUNC_1(VAR_6->rm_owner))
  return VAR_0;


 return ((void*)0);
}
