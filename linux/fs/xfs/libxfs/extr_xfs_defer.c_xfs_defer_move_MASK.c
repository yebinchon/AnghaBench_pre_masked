
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int t_flags; int t_dfops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct xfs_trans*) ;

void
FUNC_2(
 struct xfs_trans *VAR_1,
 struct xfs_trans *VAR_2)
{
 FUNC_0(&VAR_2->t_dfops, &VAR_1->t_dfops);







 VAR_1->t_flags |= (VAR_2->t_flags & VAR_0);

 FUNC_1(VAR_2);
}
