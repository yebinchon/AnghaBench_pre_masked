
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int xdpi_fifo; struct mlx5e_xdp_wqe_info* wqe_info; } ;
struct mlx5e_xdpsq {int * doorbell_cseg; TYPE_1__ db; int pc; int sqn; int wq; } ;
struct mlx5e_xdp_wqe_info {int num_wqebbs; int num_pkts; } ;
struct mlx5e_xdp_info {int dummy; } ;
struct mlx5e_tx_wqe {int ctrl; } ;


 size_t FUNC_0 (int *,int ) ;
 struct mlx5e_tx_wqe* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,struct mlx5e_xdp_info*) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_xdpsq *VAR_0,
      struct mlx5e_xdp_info *VAR_1)
{
 u16 VAR_2 = FUNC_0(&VAR_0->wq, VAR_0->pc);
 struct mlx5e_xdp_wqe_info *VAR_3 = &VAR_0->db.wqe_info[VAR_2];
 struct mlx5e_tx_wqe *VAR_4;

 VAR_3->num_wqebbs = 1;
 VAR_3->num_pkts = 1;

 VAR_4 = FUNC_1(&VAR_0->wq, VAR_0->sqn, &VAR_0->pc);
 FUNC_2(&VAR_0->db.xdpi_fifo, VAR_1);
 VAR_0->doorbell_cseg = &VAR_4->ctrl;
}
