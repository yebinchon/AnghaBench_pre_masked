
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct mlx5e_xdpsq_stats {int xmit; int err; } ;
struct TYPE_4__ {int xdpi_fifo; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_xdpsq {int pc; scalar_t__ hw_mtu; scalar_t__ min_inline_mode; TYPE_2__ db; struct mlx5_wqe_ctrl_seg* doorbell_cseg; struct mlx5e_xdpsq_stats* stats; struct mlx5_wq_cyc wq; } ;
struct mlx5e_xdp_xmit_data {scalar_t__ len; int data; int dma_addr; } ;
struct mlx5e_xdp_info {int dummy; } ;
struct TYPE_3__ {int sz; int start; } ;
struct mlx5_wqe_eth_seg {TYPE_1__ inline_hdr; } ;
struct mlx5_wqe_ctrl_seg {void* opmod_idx_opcode; scalar_t__ fm_ce_se; } ;
struct mlx5e_tx_wqe {struct mlx5_wqe_data_seg* data; struct mlx5_wqe_eth_seg eth; struct mlx5_wqe_ctrl_seg ctrl; } ;
struct mlx5_wqe_data_seg {void* byte_count; int addr; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct mlx5_wq_cyc*,int) ;
 struct mlx5e_tx_wqe* FUNC_5 (struct mlx5_wq_cyc*,int ) ;
 int FUNC_6 (int *,struct mlx5e_xdp_info*) ;
 int FUNC_7 (struct mlx5e_xdpsq*) ;
 int FUNC_8 (struct mlx5e_tx_wqe*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct mlx5e_xdpsq *VAR_3,
     struct mlx5e_xdp_xmit_data *VAR_4,
     struct mlx5e_xdp_info *VAR_5,
     int VAR_6)
{
 struct mlx5_wq_cyc *VAR_7 = &VAR_3->wq;
 u16 VAR_8 = FUNC_4(VAR_7, VAR_3->pc);
 struct mlx5e_tx_wqe *VAR_9 = FUNC_5(VAR_7, VAR_8);

 struct mlx5_wqe_ctrl_seg *VAR_10 = &VAR_9->ctrl;
 struct mlx5_wqe_eth_seg *VAR_11 = &VAR_9->eth;
 struct mlx5_wqe_data_seg *VAR_12 = VAR_9->data;

 dma_addr_t VAR_13 = VAR_4->dma_addr;
 u32 VAR_14 = VAR_4->len;

 struct mlx5e_xdpsq_stats *VAR_15 = VAR_3->stats;

 FUNC_8(VAR_9);

 if (FUNC_9(VAR_14 < VAR_0 || VAR_3->hw_mtu < VAR_14)) {
  VAR_15->err++;
  return 0;
 }

 if (!VAR_6)
  VAR_6 = FUNC_7(VAR_3);
 if (FUNC_9(VAR_6 < 0))
  return 0;

 VAR_10->fm_ce_se = 0;


 if (VAR_3->min_inline_mode != VAR_1) {
  FUNC_3(VAR_11->inline_hdr.start, VAR_4->data, VAR_0);
  VAR_11->inline_hdr.sz = FUNC_0(VAR_0);
  VAR_14 -= VAR_0;
  VAR_13 += VAR_0;
  VAR_12++;
 }


 VAR_12->addr = FUNC_2(VAR_13);
 VAR_12->byte_count = FUNC_1(VAR_14);

 VAR_10->opmod_idx_opcode = FUNC_1((VAR_3->pc << 8) | VAR_2);

 VAR_3->pc++;

 VAR_3->doorbell_cseg = VAR_10;

 FUNC_6(&VAR_3->db.xdpi_fifo, VAR_5);
 VAR_15->xmit++;
 return 1;
}
