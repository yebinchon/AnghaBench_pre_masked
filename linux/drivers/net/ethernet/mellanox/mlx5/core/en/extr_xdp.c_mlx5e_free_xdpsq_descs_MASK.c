
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_2__ {struct mlx5e_xdp_wqe_info* wqe_info; } ;
struct mlx5e_xdpsq {scalar_t__ cc; scalar_t__ pc; int umem; TYPE_1__ db; int wq; } ;
struct mlx5e_xdp_wqe_info {scalar_t__ num_wqebbs; } ;


 size_t FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct mlx5e_xdpsq*,struct mlx5e_xdp_wqe_info*,scalar_t__*,int) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct mlx5e_xdpsq *VAR_0)
{
 u32 VAR_1 = 0;

 while (VAR_0->cc != VAR_0->pc) {
  struct mlx5e_xdp_wqe_info *VAR_2;
  u16 VAR_3;

  VAR_3 = FUNC_0(&VAR_0->wq, VAR_0->cc);
  VAR_2 = &VAR_0->db.wqe_info[VAR_3];

  VAR_0->cc += VAR_2->num_wqebbs;

  FUNC_1(VAR_0, VAR_2, &VAR_1, 0);
 }

 if (VAR_1)
  FUNC_2(VAR_0->umem, VAR_1);
}
