
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int pc; int wqe_cnt; int * wqe_head; } ;
struct TYPE_5__ {int qpn; } ;
struct TYPE_4__ {int sq; } ;
struct mlx5dr_qp {TYPE_3__ sq; TYPE_2__ mqp; TYPE_1__ wq; } ;
struct mlx5_wqe_raddr_seg {scalar_t__ reserved; void* rkey; void* raddr; } ;
struct mlx5_wqe_data_seg {void* addr; void* lkey; void* byte_count; } ;
struct mlx5_wqe_ctrl_seg {void* qpn_ds; void* opmod_idx_opcode; int fm_ce_se; scalar_t__ imm; } ;
struct dr_data_seg {int length; int lkey; int addr; scalar_t__ send_flags; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5dr_qp*,struct mlx5_wqe_ctrl_seg*) ;
 struct mlx5_wqe_ctrl_seg* FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct mlx5dr_qp *VAR_1, u64 VAR_2,
        u32 VAR_3, struct dr_data_seg *VAR_4,
        u32 VAR_5, int VAR_6)
{
 struct mlx5_wqe_raddr_seg *VAR_7;
 struct mlx5_wqe_ctrl_seg *VAR_8;
 struct mlx5_wqe_data_seg *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_10 = sizeof(*VAR_8) / 16 + sizeof(*VAR_9) / 16 +
  sizeof(*VAR_7) / 16;

 VAR_11 = VAR_1->sq.pc & (VAR_1->sq.wqe_cnt - 1);

 VAR_8 = FUNC_3(&VAR_1->wq.sq, VAR_11);
 VAR_8->imm = 0;
 VAR_8->fm_ce_se = (VAR_4->send_flags) ?
  VAR_0 : 0;
 VAR_8->opmod_idx_opcode = FUNC_0(((VAR_1->sq.pc & 0xffff) << 8) |
      VAR_5);
 VAR_8->qpn_ds = FUNC_0(VAR_10 | VAR_1->mqp.qpn << 8);
 VAR_7 = (void *)(VAR_8 + 1);
 VAR_7->raddr = FUNC_1(VAR_2);
 VAR_7->rkey = FUNC_0(VAR_3);
 VAR_7->reserved = 0;

 VAR_9 = (void *)(VAR_7 + 1);
 VAR_9->byte_count = FUNC_0(VAR_4->length);
 VAR_9->lkey = FUNC_0(VAR_4->lkey);
 VAR_9->addr = FUNC_1(VAR_4->addr);

 VAR_1->sq.wqe_head[VAR_11] = VAR_1->sq.pc++;

 if (VAR_6)
  FUNC_2(VAR_1, VAR_8);
}
