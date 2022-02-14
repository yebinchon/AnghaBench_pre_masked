
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_txqsq {int pc; int sqn; struct mlx5_wq_cyc wq; } ;


 int FUNC_0 (struct mlx5_wq_cyc*,int ) ;
 int FUNC_1 (struct mlx5_wq_cyc*,int ,int *) ;
 int FUNC_2 (struct mlx5e_txqsq*,int ,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_txqsq *VAR_0)
{
 struct mlx5_wq_cyc *VAR_1 = &VAR_0->wq;
 u16 VAR_2 = FUNC_0(VAR_1, VAR_0->pc);

 FUNC_2(VAR_0, VAR_2, 1, 0, ((void*)0));

 FUNC_1(VAR_1, VAR_0->sqn, &VAR_0->pc);
}
