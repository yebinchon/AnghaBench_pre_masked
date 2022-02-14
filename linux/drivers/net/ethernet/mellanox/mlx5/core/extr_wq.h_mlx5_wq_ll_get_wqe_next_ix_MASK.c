
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx5_wq_ll {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mlx5_wqe_srq_next_seg* FUNC_1 (struct mlx5_wq_ll*,int ) ;

__attribute__((used)) static inline u16 FUNC_2(struct mlx5_wq_ll *VAR_0, u16 VAR_1)
{
 struct mlx5_wqe_srq_next_seg *VAR_2 = FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_2->next_wqe_index);
}
