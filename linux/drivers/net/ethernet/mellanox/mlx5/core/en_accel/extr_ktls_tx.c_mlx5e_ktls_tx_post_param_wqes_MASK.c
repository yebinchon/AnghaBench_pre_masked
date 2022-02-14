
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_txqsq {int pc; struct mlx5_wq_cyc wq; } ;
struct mlx5e_ktls_offload_context_tx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_wq_cyc*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_wq_cyc*,scalar_t__) ;
 int FUNC_2 (struct mlx5e_txqsq*,struct mlx5_wq_cyc*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct mlx5e_txqsq*,struct mlx5e_ktls_offload_context_tx*,int) ;
 int FUNC_4 (struct mlx5e_txqsq*,struct mlx5e_ktls_offload_context_tx*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct mlx5e_txqsq *VAR_2,
         struct mlx5e_ktls_offload_context_tx *VAR_3,
         bool VAR_4, bool VAR_5)
{
 bool VAR_6 = VAR_4 || !VAR_5;
 struct mlx5_wq_cyc *VAR_7 = &VAR_2->wq;
 u16 VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_2->pc);
 VAR_8 = FUNC_1(VAR_7, VAR_9);
 if (FUNC_5(VAR_8 <
       VAR_1 + VAR_0))
  FUNC_2(VAR_2, VAR_7, VAR_9, VAR_8);

 if (!VAR_4)
  FUNC_4(VAR_2, VAR_3, VAR_5);

 FUNC_3(VAR_2, VAR_3, VAR_6);
}
