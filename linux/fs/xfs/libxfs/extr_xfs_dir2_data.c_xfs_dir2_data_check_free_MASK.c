
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xfs_failaddr_t ;
typedef int xfs_dir2_data_aoff_t ;
struct xfs_dir2_data_unused {int length; int freetag; } ;
struct xfs_dir2_data_hdr {scalar_t__ magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct xfs_dir2_data_unused*) ;

__attribute__((used)) static inline xfs_failaddr_t
FUNC_3(
 struct xfs_dir2_data_hdr *VAR_6,
 struct xfs_dir2_data_unused *VAR_7,
 xfs_dir2_data_aoff_t VAR_8,
 xfs_dir2_data_aoff_t VAR_9)
{
 if (VAR_6->magic != FUNC_1(VAR_2) &&
     VAR_6->magic != FUNC_1(VAR_4) &&
     VAR_6->magic != FUNC_1(VAR_0) &&
     VAR_6->magic != FUNC_1(VAR_3))
  return VAR_5;
 if (FUNC_0(VAR_7->freetag) != VAR_1)
  return VAR_5;
 if (VAR_8 < (char *)VAR_7 - (char *)VAR_6)
  return VAR_5;
 if (VAR_8 + VAR_9 > (char *)VAR_7 + FUNC_0(VAR_7->length) - (char *)VAR_6)
  return VAR_5;
 if ((char *)VAR_7 - (char *)VAR_6 !=
   FUNC_0(*FUNC_2(VAR_7)))
  return VAR_5;
 return ((void*)0);
}
