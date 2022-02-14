
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {struct mlx5e_tx_wqe_info* wqe_info; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_txqsq {int uar_map; int pc; int sqn; TYPE_1__ db; int cc; int txq; int state; struct mlx5_wq_cyc wq; struct mlx5e_channel* channel; } ;
struct mlx5e_tx_wqe_info {int num_wqebbs; } ;
struct mlx5e_tx_wqe {int ctrl; } ;
struct mlx5e_channel {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlx5e_tx_wqe_info*,int ,int) ;
 size_t FUNC_2 (struct mlx5_wq_cyc*,int ) ;
 int FUNC_3 (struct mlx5_wq_cyc*,int ,int ,int *) ;
 struct mlx5e_tx_wqe* FUNC_4 (struct mlx5_wq_cyc*,int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct mlx5_wq_cyc*,int ,int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mlx5e_txqsq *VAR_1)
{
 struct mlx5e_channel *VAR_2 = VAR_1->channel;
 struct mlx5_wq_cyc *VAR_3 = &VAR_1->wq;

 FUNC_0(VAR_0, &VAR_1->state);

 FUNC_7(&VAR_2->napi);

 FUNC_5(VAR_1->txq);


 if (FUNC_6(VAR_3, VAR_1->cc, VAR_1->pc, 1)) {
  u16 VAR_4 = FUNC_2(VAR_3, VAR_1->pc);
  struct mlx5e_tx_wqe_info *VAR_5;
  struct mlx5e_tx_wqe *VAR_6;

  VAR_5 = &VAR_1->db.wqe_info[VAR_4];

  FUNC_1(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->num_wqebbs = 1;
  VAR_6 = FUNC_4(VAR_3, VAR_1->sqn, &VAR_1->pc);
  FUNC_3(VAR_3, VAR_1->pc, VAR_1->uar_map, &VAR_6->ctrl);
 }
}
