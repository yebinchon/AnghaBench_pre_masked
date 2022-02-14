
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mlx5e_wqe_frag_info {int dummy; } ;
struct TYPE_6__ {int napi; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct TYPE_5__ {int skb_from_cqe; struct mlx5_wq_cyc wq; } ;
struct mlx5e_rq {TYPE_3__ cq; int flags; TYPE_2__ wqe; TYPE_1__* stats; } ;
struct mlx5_cqe64 {int byte_cnt; int wqe_counter; } ;
struct TYPE_4__ {int wqe_err; } ;


 struct sk_buff* FUNC_0 (int ,int ,int ,struct mlx5e_rq*,struct mlx5_cqe64*,struct mlx5e_wqe_frag_info*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_cqe64*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mlx5e_wqe_frag_info* FUNC_5 (struct mlx5e_rq*,int ) ;
 int FUNC_6 (struct mlx5_wq_cyc*,int ) ;
 int FUNC_7 (struct mlx5_wq_cyc*) ;
 int FUNC_8 (struct mlx5e_rq*,struct mlx5_cqe64*,int ,struct sk_buff*) ;
 int FUNC_9 (struct mlx5e_rq*,struct mlx5e_wqe_frag_info*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,struct sk_buff*) ;
 int FUNC_11 (struct mlx5e_rq*,struct mlx5_cqe64*) ;
 scalar_t__ FUNC_12 (int ) ;

void FUNC_13(struct mlx5e_rq *VAR_3, struct mlx5_cqe64 *VAR_4)
{
 struct mlx5_wq_cyc *VAR_5 = &VAR_3->wqe.wq;
 struct mlx5e_wqe_frag_info *VAR_6;
 struct sk_buff *VAR_7;
 u32 VAR_8;
 u16 VAR_9;

 VAR_9 = FUNC_6(VAR_5, FUNC_3(VAR_4->wqe_counter));
 VAR_6 = FUNC_5(VAR_3, VAR_9);
 VAR_8 = FUNC_4(VAR_4->byte_cnt);

 if (FUNC_12(FUNC_1(VAR_4))) {
  FUNC_11(VAR_3, VAR_4);
  VAR_3->stats->wqe_err++;
  goto free_wqe;
 }

 VAR_7 = FUNC_0(VAR_3->wqe.skb_from_cqe,
         VAR_1,
         VAR_2,
         VAR_3, VAR_4, VAR_6, VAR_8);
 if (!VAR_7) {

  if (FUNC_2(VAR_0, VAR_3->flags)) {



   goto wq_cyc_pop;
  }
  goto free_wqe;
 }

 FUNC_8(VAR_3, VAR_4, VAR_8, VAR_7);
 FUNC_10(VAR_3->cq.napi, VAR_7);

free_wqe:
 FUNC_9(VAR_3, VAR_6, 1);
wq_cyc_pop:
 FUNC_7(VAR_5);
}
