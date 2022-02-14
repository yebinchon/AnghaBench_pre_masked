
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xfs_failaddr_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
struct xfs_dir2_data_unused {scalar_t__ length; } ;
struct xfs_dir2_data_hdr {int dummy; } ;
struct xfs_dir2_data_free {scalar_t__ offset; scalar_t__ length; } ;


 size_t VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct xfs_dir2_data_free* FUNC_1 (struct xfs_dir2_data_hdr*,struct xfs_dir2_data_free*,struct xfs_dir2_data_unused*) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_2(
 struct xfs_dir2_data_hdr *VAR_2,
 struct xfs_dir2_data_free *VAR_3,
 struct xfs_dir2_data_unused *VAR_4,
 struct xfs_dir2_data_free **VAR_5)
{
 struct xfs_dir2_data_free *VAR_6;
 xfs_dir2_data_aoff_t VAR_7;
 bool VAR_8 = 0;
 bool VAR_9 = 0;

 *VAR_5 = ((void*)0);
 VAR_7 = (xfs_dir2_data_aoff_t)((char *)VAR_4 - (char *)VAR_2);






 for (VAR_6 = &VAR_3[0]; VAR_6 < &VAR_3[VAR_0]; VAR_6++) {
  if (!VAR_6->offset) {
   if (VAR_6->length)
    return VAR_1;
   VAR_9 = 1;
   continue;
  }
  if (VAR_9)
   return VAR_1;
  if (FUNC_0(VAR_6->offset) == VAR_7) {
   VAR_8 = 1;
   if (VAR_6->length != VAR_4->length)
    return VAR_1;
  } else if (FUNC_0(VAR_6->offset) > VAR_7) {
   if (VAR_7 + FUNC_0(VAR_4->length) >
     FUNC_0(VAR_6->offset))
    return VAR_1;
  } else {
   if (FUNC_0(VAR_6->offset) +
     FUNC_0(VAR_6->length) > VAR_7)
    return VAR_1;
  }
  if (!VAR_8 &&
      FUNC_0(VAR_6->length) < FUNC_0(VAR_4->length))
   return VAR_1;
  if (VAR_6 > &VAR_3[0] &&
      FUNC_0(VAR_6[-1].length) < FUNC_0(VAR_6[0].length))
   return VAR_1;
 }


 *VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 return ((void*)0);
}
