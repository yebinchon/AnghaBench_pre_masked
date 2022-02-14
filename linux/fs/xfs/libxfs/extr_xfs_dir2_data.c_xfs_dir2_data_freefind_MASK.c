
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_data_free {int offset; int length; } ;
typedef struct xfs_dir2_data_free xfs_dir2_data_free_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
struct xfs_dir2_data_unused {int length; } ;
struct xfs_dir2_data_hdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

xfs_dir2_data_free_t *
FUNC_1(
 struct xfs_dir2_data_hdr *VAR_1,
 struct xfs_dir2_data_free *VAR_2,
 struct xfs_dir2_data_unused *VAR_3)
{
 xfs_dir2_data_free_t *VAR_4;
 xfs_dir2_data_aoff_t VAR_5;

 VAR_5 = (xfs_dir2_data_aoff_t)((char *)VAR_3 - (char *)VAR_1);





 if (FUNC_0(VAR_3->length) <
     FUNC_0(VAR_2[VAR_0 - 1].length))
  return ((void*)0);



 for (VAR_4 = &VAR_2[0]; VAR_4 < &VAR_2[VAR_0]; VAR_4++) {
  if (!VAR_4->offset)
   return ((void*)0);
  if (FUNC_0(VAR_4->offset) == VAR_5)
   return VAR_4;
 }



 return ((void*)0);
}
