
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_txqsq {int pc; int sqn; int uar_map; int txq; TYPE_1__* stats; int stop_room; int cc; struct mlx5_wq_cyc wq; } ;
struct mlx5e_tx_wqe_info {int num_dma; int num_wqebbs; struct sk_buff* skb; int num_bytes; } ;
struct mlx5_wqe_ctrl_seg {void* qpn_ds; void* opmod_idx_opcode; } ;
struct TYPE_4__ {int tx_flags; } ;
struct TYPE_3__ {int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct mlx5_wq_cyc*,int,int ,struct mlx5_wqe_ctrl_seg*) ;
 int FUNC_3 (struct mlx5_wq_cyc*,int ,int,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline void
FUNC_7(struct mlx5e_txqsq *VAR_2, struct sk_buff *VAR_3,
       u8 VAR_4, u16 VAR_5, u8 VAR_6, u32 VAR_7, u8 VAR_8,
       struct mlx5e_tx_wqe_info *VAR_9, struct mlx5_wqe_ctrl_seg *VAR_10,
       bool VAR_11)
{
 struct mlx5_wq_cyc *VAR_12 = &VAR_2->wq;
 bool VAR_13;

 VAR_9->num_bytes = VAR_7;
 VAR_9->num_dma = VAR_8;
 VAR_9->num_wqebbs = VAR_6;
 VAR_9->skb = VAR_3;

 VAR_10->opmod_idx_opcode = FUNC_1((VAR_2->pc << 8) | VAR_4);
 VAR_10->qpn_ds = FUNC_1((VAR_2->sqn << 8) | VAR_5);

 if (FUNC_6(FUNC_5(VAR_3)->tx_flags & VAR_0))
  FUNC_5(VAR_3)->tx_flags |= VAR_1;

 VAR_2->pc += VAR_9->num_wqebbs;
 if (FUNC_6(!FUNC_3(VAR_12, VAR_2->cc, VAR_2->pc, VAR_2->stop_room))) {
  FUNC_4(VAR_2->txq);
  VAR_2->stats->stopped++;
 }

 VAR_13 = FUNC_0(VAR_2->txq, VAR_7,
            VAR_11);
 if (VAR_13)
  FUNC_2(VAR_12, VAR_2->pc, VAR_2->uar_map, VAR_10);
}
