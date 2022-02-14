
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_eqe {int owner; } ;
struct mlx5_eq {int cons_index; int nent; } ;


 int FUNC_0 () ;
 struct mlx5_eqe* FUNC_1 (struct mlx5_eq*,int) ;

struct mlx5_eqe *FUNC_2(struct mlx5_eq *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->cons_index + VAR_1;
 struct mlx5_eqe *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2 & (VAR_0->nent - 1));
 VAR_3 = ((VAR_3->owner & 1) ^ !!(VAR_2 & VAR_0->nent)) ? ((void*)0) : VAR_3;



 if (VAR_3)
  FUNC_0();

 return VAR_3;
}
