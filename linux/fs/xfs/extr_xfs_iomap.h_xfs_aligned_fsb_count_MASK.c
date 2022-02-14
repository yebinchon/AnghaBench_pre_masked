
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fileoff_t ;
typedef int xfs_filblks_t ;
typedef scalar_t__ xfs_extlen_t ;


 int FUNC_0 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static inline xfs_filblks_t
FUNC_1(
 xfs_fileoff_t VAR_0,
 xfs_filblks_t VAR_1,
 xfs_extlen_t VAR_2)
{
 if (VAR_2) {
  xfs_extlen_t VAR_3;

  FUNC_0(VAR_0, VAR_2, &VAR_3);
  if (VAR_3)
   VAR_1 += VAR_3;
  FUNC_0(VAR_1, VAR_2, &VAR_3);
  if (VAR_3)
   VAR_1 += VAR_2 - VAR_3;
 }

 return VAR_1;
}
