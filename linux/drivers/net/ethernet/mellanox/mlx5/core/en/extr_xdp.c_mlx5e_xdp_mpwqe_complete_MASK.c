
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {struct mlx5e_xdp_wqe_info* wqe_info; } ;
struct mlx5e_xdp_mpwqe {size_t ds_count; TYPE_2__* wqe; int pkt_count; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_xdpsq {int pc; int sqn; struct mlx5_wqe_ctrl_seg* doorbell_cseg; TYPE_1__ db; struct mlx5e_xdp_mpwqe mpwqe; struct mlx5_wq_cyc wq; } ;
struct mlx5e_xdp_wqe_info {scalar_t__ num_wqebbs; int num_pkts; } ;
struct mlx5_wqe_ctrl_seg {void* qpn_ds; void* opmod_idx_opcode; } ;
struct TYPE_4__ {struct mlx5_wqe_ctrl_seg ctrl; } ;


 scalar_t__ FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 size_t FUNC_2 (struct mlx5_wq_cyc*,int) ;

void FUNC_3(struct mlx5e_xdpsq *VAR_2)
{
 struct mlx5_wq_cyc *VAR_3 = &VAR_2->wq;
 struct mlx5e_xdp_mpwqe *VAR_4 = &VAR_2->mpwqe;
 struct mlx5_wqe_ctrl_seg *VAR_5 = &VAR_4->wqe->ctrl;
 u16 VAR_6 = VAR_4->ds_count;
 u16 VAR_7 = FUNC_2(VAR_3, VAR_2->pc);
 struct mlx5e_xdp_wqe_info *VAR_8 = &VAR_2->db.wqe_info[VAR_7];

 VAR_5->opmod_idx_opcode =
  FUNC_1((VAR_2->pc << 8) | VAR_0);
 VAR_5->qpn_ds = FUNC_1((VAR_2->sqn << 8) | VAR_6);

 VAR_8->num_wqebbs = FUNC_0(VAR_6, VAR_1);
 VAR_8->num_pkts = VAR_4->pkt_count;

 VAR_2->pc += VAR_8->num_wqebbs;

 VAR_2->doorbell_cseg = VAR_5;

 VAR_4->wqe = ((void*)0);
}
