
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_qp_table {int lock; int tree; } ;
struct mlx5_core_rsc_common {int refcount; } ;


 struct mlx5_core_rsc_common* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct mlx5_core_rsc_common *
FUNC_4(struct mlx5_qp_table *VAR_0, u32 VAR_1)
{
 struct mlx5_core_rsc_common *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->lock, VAR_3);

 VAR_2 = FUNC_0(&VAR_0->tree, VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->refcount);

 FUNC_3(&VAR_0->lock, VAR_3);

 return VAR_2;
}
