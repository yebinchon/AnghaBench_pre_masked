
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wq_cyc {int wqe_ctr; int * db; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5_wq_cyc *VAR_0)
{
 *VAR_0->db = FUNC_0(VAR_0->wqe_ctr);
}
