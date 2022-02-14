
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_rtblock_t ;
typedef int xfs_extlen_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;


 int FUNC_0 (struct xfs_mount*,struct xfs_trans*,int ,int ,int,int *,int*) ;

int
FUNC_1(
 struct xfs_mount *VAR_0,
 struct xfs_trans *VAR_1,
 xfs_rtblock_t VAR_2,
 xfs_extlen_t VAR_3,
 bool *VAR_4)
{
 xfs_rtblock_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 1, &VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_4 = VAR_6;
 return 0;
}
