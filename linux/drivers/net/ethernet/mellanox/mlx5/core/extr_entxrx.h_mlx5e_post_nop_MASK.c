
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_wqe_ctrl_seg {void* qpn_ds; void* opmod_idx_opcode; } ;
struct mlx5e_tx_wqe {struct mlx5_wqe_ctrl_seg ctrl; } ;
struct mlx5_wq_cyc {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_wqe_ctrl_seg*,int ,int) ;
 int FUNC_2 (struct mlx5_wq_cyc*,int) ;
 struct mlx5e_tx_wqe* FUNC_3 (struct mlx5_wq_cyc*,int) ;

__attribute__((used)) static inline struct mlx5e_tx_wqe *
FUNC_4(struct mlx5_wq_cyc *VAR_1, u32 VAR_2, u16 *VAR_3)
{
 u16 VAR_4 = FUNC_2(VAR_1, *VAR_3);
 struct mlx5e_tx_wqe *VAR_5 = FUNC_3(VAR_1, VAR_4);
 struct mlx5_wqe_ctrl_seg *VAR_6 = &VAR_5->ctrl;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->opmod_idx_opcode = FUNC_0((*VAR_3 << 8) | VAR_0);
 VAR_6->qpn_ds = FUNC_0((VAR_2 << 8) | 0x01);

 (*VAR_3)++;

 return VAR_5;
}
