
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
struct tls_context {struct net_device* netdev; } ;
struct sk_buff {int len; int sk; } ;
struct net_device {int dummy; } ;
struct mlx5e_txqsq {TYPE_1__* channel; } ;
struct mlx5e_tx_wqe {int dummy; } ;
struct mlx5e_tls_offload_context_tx {scalar_t__ expected_seq; int swid; } ;
struct mlx5e_priv {TYPE_4__* tls; } ;
struct TYPE_6__ {int tx_tls_drop_metadata; } ;
struct TYPE_8__ {TYPE_2__ sw_stats; } ;
struct TYPE_7__ {int seq; } ;
struct TYPE_5__ {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct mlx5e_tls_offload_context_tx* FUNC_3 (struct tls_context*) ;
 struct sk_buff* FUNC_4 (struct net_device*,struct mlx5e_txqsq*,struct sk_buff*,struct mlx5e_tx_wqe**,int *) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_6 (struct mlx5e_tls_offload_context_tx*,struct mlx5e_txqsq*,struct sk_buff*,struct mlx5e_tx_wqe**,int *,TYPE_4__*) ;
 struct mlx5e_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_3__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int VAR_0 ;
 struct tls_context* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;

struct sk_buff *FUNC_15(struct net_device *VAR_1,
     struct mlx5e_txqsq *VAR_2,
     struct sk_buff *VAR_3,
     struct mlx5e_tx_wqe **VAR_4,
     u16 *VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_7(VAR_1);
 struct mlx5e_tls_offload_context_tx *VAR_7;
 struct tls_context *VAR_8;
 u32 VAR_9;
 int VAR_10;
 u32 VAR_11;

 if (FUNC_0(VAR_2->channel->mdev, VAR_0)) {
  VAR_3 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  goto out;
 }

 if (!VAR_3->sk || !FUNC_13(VAR_3->sk))
  goto out;

 VAR_10 = VAR_3->len - (FUNC_9(VAR_3) + FUNC_11(VAR_3));
 if (!VAR_10)
  goto out;

 VAR_8 = FUNC_12(VAR_3->sk);
 if (FUNC_14(VAR_8->netdev != VAR_1))
  goto out;

 VAR_11 = FUNC_8(FUNC_10(VAR_3)->seq);
 VAR_7 = FUNC_3(VAR_8);
 VAR_9 = VAR_7->expected_seq;

 if (FUNC_14(VAR_9 != VAR_11)) {
  VAR_3 = FUNC_6(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6->tls);
  goto out;
 }

 if (FUNC_14(FUNC_5(VAR_3, VAR_7->swid))) {
  FUNC_1(&VAR_6->tls->sw_stats.tx_tls_drop_metadata);
  FUNC_2(VAR_3);
  VAR_3 = ((void*)0);
  goto out;
 }

 VAR_7->expected_seq = VAR_11 + VAR_10;
out:
 return VAR_3;
}
