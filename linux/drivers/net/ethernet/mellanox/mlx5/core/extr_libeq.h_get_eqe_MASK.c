
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_eqe {int dummy; } ;
struct mlx5_eq {int buf; } ;


 int VAR_0 ;
 struct mlx5_eqe* FUNC_0 (int *,int) ;

__attribute__((used)) static inline struct mlx5_eqe *FUNC_1(struct mlx5_eq *VAR_1, u32 VAR_2)
{
 return FUNC_0(&VAR_1->buf, VAR_2 * VAR_0);
}
