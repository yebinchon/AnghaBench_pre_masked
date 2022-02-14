
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xfs_failaddr_t ;
struct xfs_dir2_data_unused {scalar_t__ length; } ;
struct xfs_dir2_data_hdr {int dummy; } ;
struct xfs_dir2_data_free {scalar_t__ length; int offset; } ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline xfs_failaddr_t
FUNC_1(
 struct xfs_dir2_data_hdr *VAR_1,
 struct xfs_dir2_data_free *VAR_2,
 struct xfs_dir2_data_unused *VAR_3)
{
 if (VAR_2 == ((void*)0))
  return VAR_0;
 if (VAR_2->length != VAR_3->length)
  return VAR_0;
 if (FUNC_0(VAR_2->offset) != (char *)VAR_3 - (char *)VAR_1)
  return VAR_0;
 return ((void*)0);
}
