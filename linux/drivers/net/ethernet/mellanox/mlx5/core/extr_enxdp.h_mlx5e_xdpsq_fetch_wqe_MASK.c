
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_xdpsq {int pc; struct mlx5_wq_cyc wq; } ;
struct mlx5e_tx_wqe {int dummy; } ;


 int FUNC_0 (struct mlx5e_tx_wqe*,int ,int) ;
 int FUNC_1 (struct mlx5_wq_cyc*,int ) ;
 struct mlx5e_tx_wqe* FUNC_2 (struct mlx5_wq_cyc*,int ) ;

__attribute__((used)) static inline struct mlx5e_tx_wqe *
FUNC_3(struct mlx5e_xdpsq *VAR_0, u16 *VAR_1)
{
 struct mlx5_wq_cyc *VAR_2 = &VAR_0->wq;
 struct mlx5e_tx_wqe *VAR_3;

 *VAR_1 = FUNC_1(VAR_2, VAR_0->pc);
 VAR_3 = FUNC_2(VAR_2, *VAR_1);
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 return VAR_3;
}
