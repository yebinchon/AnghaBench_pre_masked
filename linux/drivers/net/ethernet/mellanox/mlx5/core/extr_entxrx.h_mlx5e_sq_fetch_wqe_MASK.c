
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_txqsq {int pc; struct mlx5_wq_cyc wq; } ;


 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (struct mlx5_wq_cyc*,int ) ;
 void* FUNC_2 (struct mlx5_wq_cyc*,int ) ;

__attribute__((used)) static inline void *
FUNC_3(struct mlx5e_txqsq *VAR_0, size_t VAR_1, u16 *VAR_2)
{
 struct mlx5_wq_cyc *VAR_3 = &VAR_0->wq;
 void *VAR_4;

 *VAR_2 = FUNC_1(VAR_3, VAR_0->pc);
 VAR_4 = FUNC_2(VAR_3, *VAR_2);
 FUNC_0(VAR_4, 0, VAR_1);

 return VAR_4;
}
