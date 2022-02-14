
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct TYPE_9__ {struct mlx5e_xdp_wqe_info* wqe_info; } ;
struct TYPE_7__ {int cqn; } ;
struct TYPE_8__ {TYPE_2__ mcq; } ;
struct mlx5e_xdpsq {scalar_t__ min_inline_mode; int sqn; int state; int mkey_be; int wq; TYPE_4__ db; int wq_ctrl; TYPE_3__ cq; } ;
struct mlx5e_xdp_wqe_info {int num_wqebbs; int num_pkts; } ;
struct TYPE_10__ {int sz; } ;
struct mlx5_wqe_eth_seg {TYPE_5__ inline_hdr; } ;
struct mlx5_wqe_ctrl_seg {int qpn_ds; } ;
struct mlx5e_tx_wqe {struct mlx5_wqe_eth_seg eth; struct mlx5_wqe_ctrl_seg ctrl; } ;
struct mlx5e_sq_param {int is_mpw; } ;
struct mlx5e_params {int dummy; } ;
struct mlx5e_create_sq_param {int tis_lst_sz; scalar_t__ min_inline_mode; int * wq_ctrl; int cqn; int tisn; } ;
struct mlx5e_channel {size_t lag_port; int mdev; TYPE_1__* priv; } ;
struct mlx5_wqe_data_seg {int lkey; } ;
struct TYPE_6__ {int ** tisn; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 struct mlx5e_tx_wqe* FUNC_4 (int *,int) ;
 int FUNC_5 (struct mlx5e_channel*,struct mlx5e_params*,struct xdp_umem*,struct mlx5e_sq_param*,struct mlx5e_xdpsq*,int) ;
 int FUNC_6 (int ,struct mlx5e_sq_param*,struct mlx5e_create_sq_param*,int*) ;
 int FUNC_7 (struct mlx5e_xdpsq*) ;
 int FUNC_8 (struct mlx5e_xdpsq*,int ) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct mlx5e_channel *VAR_4, struct mlx5e_params *VAR_5,
       struct mlx5e_sq_param *VAR_6, struct xdp_umem *VAR_7,
       struct mlx5e_xdpsq *VAR_8, bool VAR_9)
{
 struct mlx5e_create_sq_param VAR_10 = {};
 int VAR_11;

 VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_7, VAR_6, VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10.tis_lst_sz = 1;
 VAR_10.tisn = VAR_4->priv->tisn[VAR_4->lag_port][0];
 VAR_10.cqn = VAR_8->cq.mcq.cqn;
 VAR_10.wq_ctrl = &VAR_8->wq_ctrl;
 VAR_10.min_inline_mode = VAR_8->min_inline_mode;
 FUNC_9(VAR_0, &VAR_8->state);
 VAR_11 = FUNC_6(VAR_4->mdev, VAR_6, &VAR_10, &VAR_8->sqn);
 if (VAR_11)
  goto err_free_xdpsq;

 FUNC_8(VAR_8, VAR_6->is_mpw);

 if (!VAR_6->is_mpw) {
  unsigned int VAR_12 = VAR_2;
  unsigned int VAR_13 = 0;
  int VAR_14;

  if (VAR_8->min_inline_mode != VAR_3) {
   VAR_13 = VAR_1;
   VAR_12++;
  }


  for (VAR_14 = 0; VAR_14 < FUNC_3(&VAR_8->wq); VAR_14++) {
   struct mlx5e_xdp_wqe_info *VAR_15 = &VAR_8->db.wqe_info[VAR_14];
   struct mlx5e_tx_wqe *VAR_16 = FUNC_4(&VAR_8->wq, VAR_14);
   struct mlx5_wqe_ctrl_seg *VAR_17 = &VAR_16->ctrl;
   struct mlx5_wqe_eth_seg *VAR_18 = &VAR_16->eth;
   struct mlx5_wqe_data_seg *VAR_19;

   VAR_17->qpn_ds = FUNC_2((VAR_8->sqn << 8) | VAR_12);
   VAR_18->inline_hdr.sz = FUNC_1(VAR_13);

   VAR_19 = (struct mlx5_wqe_data_seg *)VAR_17 + (VAR_12 - 1);
   VAR_19->lkey = VAR_8->mkey_be;

   VAR_15->num_wqebbs = 1;
   VAR_15->num_pkts = 1;
  }
 }

 return 0;

err_free_xdpsq:
 FUNC_0(VAR_0, &VAR_8->state);
 FUNC_7(VAR_8);

 return VAR_11;
}
