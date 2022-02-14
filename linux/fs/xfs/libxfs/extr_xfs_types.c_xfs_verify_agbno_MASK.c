
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
typedef scalar_t__ xfs_agblock_t ;
struct xfs_mount {int dummy; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int ) ;

bool
FUNC_2(
 struct xfs_mount *VAR_0,
 xfs_agnumber_t VAR_1,
 xfs_agblock_t VAR_2)
{
 xfs_agblock_t VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 >= VAR_3)
  return 0;
 if (VAR_2 <= FUNC_0(VAR_0))
  return 0;
 return 1;
}
