
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xdpsq {int * doorbell_cseg; int uar_map; int pc; int wq; } ;


 int FUNC_0 (int *,int ,int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5e_xdpsq *VAR_0)
{
 if (VAR_0->doorbell_cseg) {
  FUNC_0(&VAR_0->wq, VAR_0->pc, VAR_0->uar_map, VAR_0->doorbell_cseg);
  VAR_0->doorbell_cseg = ((void*)0);
 }
}
