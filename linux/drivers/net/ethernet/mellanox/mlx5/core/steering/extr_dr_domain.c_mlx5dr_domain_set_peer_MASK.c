
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_domain {int mutex; int refcount; struct mlx5dr_domain* peer_dmn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx5dr_domain *VAR_0,
       struct mlx5dr_domain *VAR_1)
{
 FUNC_0(&VAR_0->mutex);

 if (VAR_0->peer_dmn)
  FUNC_2(&VAR_0->peer_dmn->refcount);

 VAR_0->peer_dmn = VAR_1;

 if (VAR_0->peer_dmn)
  FUNC_3(&VAR_0->peer_dmn->refcount);

 FUNC_1(&VAR_0->mutex);
}
