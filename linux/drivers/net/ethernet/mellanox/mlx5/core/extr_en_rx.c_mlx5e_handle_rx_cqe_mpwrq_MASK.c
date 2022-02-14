
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int next_wqe_index; } ;
struct mlx5e_rx_wqe_ll {TYPE_3__ next; } ;
struct mlx5e_rq_stats {int mpwqe_filler_strides; int mpwqe_filler_cqes; int wqe_err; } ;
struct mlx5_wq_ll {int dummy; } ;
struct TYPE_5__ {size_t log_stride_sz; scalar_t__ num_strides; struct mlx5_wq_ll wq; int skb_from_cqe_mpwrq; struct mlx5e_mpw_info* info; } ;
struct TYPE_4__ {int napi; } ;
struct mlx5e_rq {TYPE_2__ mpwqe; TYPE_1__ cq; struct mlx5e_rq_stats* stats; } ;
struct mlx5e_mpw_info {size_t consumed_strides; } ;
struct mlx5_cqe64 {int wqe_id; } ;


 struct sk_buff* FUNC_0 (int ,int ,int ,struct mlx5e_rq*,struct mlx5e_mpw_info*,size_t,int,int) ;
 int FUNC_1 (struct mlx5_cqe64*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct mlx5e_rx_wqe_ll* FUNC_4 (struct mlx5_wq_ll*,size_t) ;
 int FUNC_5 (struct mlx5_wq_ll*,int ,int *) ;
 int FUNC_6 (struct mlx5e_rq*,struct mlx5_cqe64*,size_t,struct sk_buff*) ;
 int FUNC_7 (struct mlx5e_rq*,struct mlx5e_mpw_info*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_8 (struct mlx5_cqe64*) ;
 size_t FUNC_9 (struct mlx5_cqe64*) ;
 size_t FUNC_10 (struct mlx5_cqe64*) ;
 int FUNC_11 (struct mlx5_cqe64*) ;
 int FUNC_12 (int ,struct sk_buff*) ;
 int FUNC_13 (struct mlx5e_rq*,struct mlx5_cqe64*) ;
 scalar_t__ FUNC_14 (int ) ;

void FUNC_15(struct mlx5e_rq *VAR_4, struct mlx5_cqe64 *VAR_5)
{
 u16 VAR_6 = FUNC_9(VAR_5);
 u16 VAR_7 = FUNC_2(VAR_5->wqe_id);
 struct mlx5e_mpw_info *VAR_8 = &VAR_4->mpwqe.info[VAR_7];
 u16 VAR_9 = FUNC_10(VAR_5);
 u32 VAR_10 = VAR_9 << VAR_4->mpwqe.log_stride_sz;
 u32 VAR_11 = VAR_10 & (VAR_1 - 1);
 u32 VAR_12 = VAR_10 >> VAR_0;
 struct mlx5e_rx_wqe_ll *VAR_13;
 struct mlx5_wq_ll *VAR_14;
 struct sk_buff *VAR_15;
 u16 VAR_16;

 VAR_8->consumed_strides += VAR_6;

 if (FUNC_14(FUNC_1(VAR_5))) {
  FUNC_13(VAR_4, VAR_5);
  VAR_4->stats->wqe_err++;
  goto mpwrq_cqe_out;
 }

 if (FUNC_14(FUNC_11(VAR_5))) {
  struct mlx5e_rq_stats *VAR_17 = VAR_4->stats;

  VAR_17->mpwqe_filler_cqes++;
  VAR_17->mpwqe_filler_strides += VAR_6;
  goto mpwrq_cqe_out;
 }

 VAR_16 = FUNC_8(VAR_5);

 VAR_15 = FUNC_0(VAR_4->mpwqe.skb_from_cqe_mpwrq,
         VAR_2,
         VAR_3,
         VAR_4, VAR_8, VAR_16, VAR_11, VAR_12);
 if (!VAR_15)
  goto mpwrq_cqe_out;

 FUNC_6(VAR_4, VAR_5, VAR_16, VAR_15);
 FUNC_12(VAR_4->cq.napi, VAR_15);

mpwrq_cqe_out:
 if (FUNC_3(VAR_8->consumed_strides < VAR_4->mpwqe.num_strides))
  return;

 VAR_14 = &VAR_4->mpwqe.wq;
 VAR_13 = FUNC_4(VAR_14, VAR_7);
 FUNC_7(VAR_4, VAR_8, 1);
 FUNC_5(VAR_14, VAR_5->wqe_id, &VAR_13->next.next_wqe_index);
}
