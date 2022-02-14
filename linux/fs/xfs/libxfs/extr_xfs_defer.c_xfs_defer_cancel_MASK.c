
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int t_dfops; struct xfs_mount* t_mountp; } ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_trans*,int ) ;
 int FUNC_1 (struct xfs_mount*,int *) ;

void
FUNC_2(
 struct xfs_trans *VAR_1)
{
 struct xfs_mount *VAR_2 = VAR_1->t_mountp;

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_2, &VAR_1->t_dfops);
}
