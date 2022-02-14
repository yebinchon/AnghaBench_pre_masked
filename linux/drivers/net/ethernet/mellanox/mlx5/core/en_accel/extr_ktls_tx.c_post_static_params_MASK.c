
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5e_umr_wqe {int dummy; } ;
struct mlx5e_txqsq {int pc; int sqn; } ;
struct mlx5e_ktls_offload_context_tx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx5e_umr_wqe*,int ,int ,struct mlx5e_ktls_offload_context_tx*,int) ;
 struct mlx5e_umr_wqe* FUNC_1 (struct mlx5e_txqsq*,int ,int *) ;
 int FUNC_2 (struct mlx5e_txqsq*,int ,scalar_t__,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct mlx5e_txqsq *VAR_2,
     struct mlx5e_ktls_offload_context_tx *VAR_3,
     bool VAR_4)
{
 struct mlx5e_umr_wqe *VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_0, &VAR_6);
 FUNC_0(VAR_5, VAR_2->pc, VAR_2->sqn, VAR_3, VAR_4);
 FUNC_2(VAR_2, VAR_6, VAR_1, 0, ((void*)0));
 VAR_2->pc += VAR_1;
}
