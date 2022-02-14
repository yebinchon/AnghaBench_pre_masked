
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
typedef scalar_t__ xfs_agino_t ;
typedef int xfs_agblock_t ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {int cluster_align; } ;


 TYPE_1__* FUNC_0 (struct xfs_mount*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct xfs_mount*,int ) ;

void
FUNC_6(
 struct xfs_mount *VAR_0,
 xfs_agnumber_t VAR_1,
 xfs_agino_t *VAR_2,
 xfs_agino_t *VAR_3)
{
 xfs_agblock_t VAR_4;
 xfs_agblock_t VAR_5;

 VAR_5 = FUNC_5(VAR_0, VAR_1);





 VAR_4 = FUNC_4(FUNC_2(VAR_0) + 1, FUNC_0(VAR_0)->cluster_align);
 *VAR_2 = FUNC_1(VAR_0, VAR_4);





 VAR_4 = FUNC_3(VAR_5, FUNC_0(VAR_0)->cluster_align);
 *VAR_3 = FUNC_1(VAR_0, VAR_4) - 1;
}
