
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
typedef scalar_t__ xfs_agino_t ;
struct xfs_mount {int dummy; } ;


 int FUNC_0 (struct xfs_mount*,int ,scalar_t__*,scalar_t__*) ;

bool
FUNC_1(
 struct xfs_mount *VAR_0,
 xfs_agnumber_t VAR_1,
 xfs_agino_t VAR_2)
{
 xfs_agino_t VAR_3;
 xfs_agino_t VAR_4;

 FUNC_0(VAR_0, VAR_1, &VAR_3, &VAR_4);
 return VAR_2 >= VAR_3 && VAR_2 <= VAR_4;
}
