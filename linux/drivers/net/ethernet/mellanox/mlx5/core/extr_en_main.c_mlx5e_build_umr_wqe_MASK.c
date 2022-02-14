
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_wqe_umr_ctrl_seg {int flags; int mkey_mask; int xlt_octowords; } ;
struct mlx5_wqe_ctrl_seg {int imm; int fm_ce_se; int qpn_ds; } ;
struct mlx5e_umr_wqe {struct mlx5_wqe_umr_ctrl_seg uctrl; struct mlx5_wqe_ctrl_seg ctrl; } ;
struct mlx5e_rq {int mkey_be; } ;
struct mlx5e_icosq {int sqn; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct mlx5e_rq *VAR_8,
           struct mlx5e_icosq *VAR_9,
           struct mlx5e_umr_wqe *VAR_10)
{
 struct mlx5_wqe_ctrl_seg *VAR_11 = &VAR_10->ctrl;
 struct mlx5_wqe_umr_ctrl_seg *VAR_12 = &VAR_10->uctrl;
 u8 VAR_13 = FUNC_0(VAR_0, VAR_3);

 VAR_11->qpn_ds = FUNC_3((VAR_9->sqn << VAR_7) |
          VAR_13);
 VAR_11->fm_ce_se = VAR_6;
 VAR_11->imm = VAR_8->mkey_be;

 VAR_12->flags = VAR_5 | VAR_4;
 VAR_12->xlt_octowords =
  FUNC_2(FUNC_1(VAR_2));
 VAR_12->mkey_mask = FUNC_4(VAR_1);
}
