
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct sync_info {int nr_frags; int rcd_sn; scalar_t__ sync_len; int * frags; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data_len; } ;
struct mlx5e_txqsq {TYPE_2__* stats; } ;
struct mlx5e_tx_wqe {int dummy; } ;
struct mlx5e_tls_offload_context_tx {scalar_t__ expected_seq; int swid; } ;
struct TYPE_5__ {int tx_tls_drop_resync_alloc; int tx_tls_drop_metadata; int tx_tls_drop_bypass_required; int tx_tls_drop_no_sync_data; } ;
struct mlx5e_tls {TYPE_1__ sw_stats; } ;
struct TYPE_8__ {int nr_frags; int * frags; } ;
struct TYPE_7__ {int seq; } ;
struct TYPE_6__ {int tls_resync_bytes; int tls_ooo; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 struct mlx5e_tx_wqe* FUNC_5 (struct mlx5e_txqsq*,int,int *) ;
 int FUNC_6 (struct mlx5e_txqsq*,struct sk_buff*,struct mlx5e_tx_wqe*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,struct sk_buff*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_9 (struct mlx5e_tls_offload_context_tx*,scalar_t__,struct sync_info*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*,int) ;
 TYPE_4__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_3__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_17(struct mlx5e_tls_offload_context_tx *VAR_1,
       struct mlx5e_txqsq *VAR_2, struct sk_buff *VAR_3,
       struct mlx5e_tx_wqe **VAR_4,
       u16 *VAR_5,
       struct mlx5e_tls *VAR_6)
{
 u32 VAR_7 = FUNC_10(FUNC_14(VAR_3)->seq);
 struct sync_info VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 VAR_2->stats->tls_ooo++;

 if (FUNC_9(VAR_1, VAR_7, &VAR_8)) {




  FUNC_1(&VAR_6->sw_stats.tx_tls_drop_no_sync_data);
  goto err_out;
 }

 if (FUNC_16(VAR_8.sync_len < 0)) {
  u32 VAR_13;

  VAR_11 = FUNC_13(VAR_3) + FUNC_15(VAR_3);
  VAR_13 = VAR_3->len - VAR_11;
  if (FUNC_4(VAR_13 <= -VAR_8.sync_len))


   return VAR_3;

  FUNC_1(&VAR_6->sw_stats.tx_tls_drop_bypass_required);
  goto err_out;
 }

 if (FUNC_16(FUNC_7(VAR_3, VAR_1->swid))) {
  FUNC_1(&VAR_6->sw_stats.tx_tls_drop_metadata);
  goto err_out;
 }

 VAR_11 = FUNC_13(VAR_3) + FUNC_15(VAR_3);
 VAR_10 += VAR_11 + sizeof(VAR_8.rcd_sn);
 VAR_9 = FUNC_0(VAR_10, VAR_0);
 if (FUNC_16(!VAR_9)) {
  FUNC_1(&VAR_6->sw_stats.tx_tls_drop_resync_alloc);
  goto err_out;
 }

 VAR_1->expected_seq = VAR_7 + VAR_3->len - VAR_11;
 FUNC_11(VAR_9, VAR_10);
 for (VAR_12 = 0; VAR_12 < VAR_8.nr_frags; VAR_12++)
  FUNC_12(VAR_9)->frags[VAR_12] = VAR_8.frags[VAR_12];

 FUNC_12(VAR_9)->nr_frags = VAR_8.nr_frags;
 VAR_9->data_len = VAR_8.sync_len;
 VAR_9->len += VAR_8.sync_len;
 VAR_2->stats->tls_resync_bytes += VAR_9->len;
 FUNC_8(VAR_3, VAR_9, VAR_7, VAR_11,
        FUNC_2(VAR_8.rcd_sn));
 FUNC_6(VAR_2, VAR_9, *VAR_4, *VAR_5, 1);
 *VAR_4 = FUNC_5(VAR_2, sizeof(**VAR_4), VAR_5);
 return VAR_3;

err_out:
 FUNC_3(VAR_3);
 return ((void*)0);
}
