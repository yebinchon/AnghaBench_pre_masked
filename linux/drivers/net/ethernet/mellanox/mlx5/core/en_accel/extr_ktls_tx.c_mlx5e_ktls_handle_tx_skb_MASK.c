
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct tls_context {struct net_device* netdev; } ;
struct sk_buff {int len; int sk; } ;
struct net_device {int dummy; } ;
struct mlx5e_txqsq {struct mlx5e_sq_stats* stats; } ;
struct mlx5_wqe_ctrl_seg {int tisn; } ;
struct mlx5e_tx_wqe {struct mlx5_wqe_ctrl_seg ctrl; } ;
struct mlx5e_sq_stats {int tls_encrypted_packets; int tls_encrypted_bytes; int tls_ctx; } ;
struct mlx5e_ktls_offload_context_tx {scalar_t__ expected_seq; int tisn; } ;
typedef enum mlx5e_ktls_sync_retval { ____Placeholder_mlx5e_ktls_sync_retval } mlx5e_ktls_sync_retval ;
struct TYPE_4__ {int gso_segs; } ;
struct TYPE_3__ {int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 struct mlx5e_ktls_offload_context_tx* FUNC_4 (struct tls_context*) ;
 int FUNC_5 (struct mlx5e_ktls_offload_context_tx*,struct mlx5e_txqsq*,int,scalar_t__) ;
 int FUNC_6 (struct mlx5e_ktls_offload_context_tx*) ;
 int FUNC_7 (struct mlx5e_txqsq*,struct mlx5e_ktls_offload_context_tx*,int,int) ;
 struct mlx5e_tx_wqe* FUNC_8 (struct mlx5e_txqsq*,int,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 struct tls_context* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int) ;

struct sk_buff *FUNC_18(struct net_device *VAR_2,
      struct mlx5e_txqsq *VAR_3,
      struct sk_buff *VAR_4,
      struct mlx5e_tx_wqe **VAR_5, u16 *VAR_6)
{
 struct mlx5e_ktls_offload_context_tx *VAR_7;
 struct mlx5e_sq_stats *VAR_8 = VAR_3->stats;
 struct mlx5_wqe_ctrl_seg *VAR_9;
 struct tls_context *VAR_10;
 int VAR_11;
 u32 VAR_12;

 if (!VAR_4->sk || !FUNC_16(VAR_4->sk))
  goto out;

 VAR_11 = VAR_4->len - (FUNC_12(VAR_4) + FUNC_14(VAR_4));
 if (!VAR_11)
  goto out;

 VAR_10 = FUNC_15(VAR_4->sk);
 if (FUNC_0(VAR_10->netdev != VAR_2))
  goto err_out;

 VAR_7 = FUNC_4(VAR_10);

 if (FUNC_17(FUNC_6(VAR_7))) {
  FUNC_7(VAR_3, VAR_7, 0, 0);
  *VAR_5 = FUNC_8(VAR_3, sizeof(**VAR_5), VAR_6);
  VAR_8->tls_ctx++;
 }

 VAR_12 = FUNC_9(FUNC_13(VAR_4)->seq);
 if (FUNC_17(VAR_7->expected_seq != VAR_12)) {
  enum mlx5e_ktls_sync_retval VAR_13 =
   FUNC_5(VAR_7, VAR_3, VAR_11, VAR_12);

  if (FUNC_3(VAR_13 == VAR_0))
   *VAR_5 = FUNC_8(VAR_3, sizeof(**VAR_5), VAR_6);
  else if (VAR_13 == VAR_1)
   goto err_out;
  else
   goto out;
 }

 VAR_7->expected_seq = VAR_12 + VAR_11;

 VAR_9 = &(*VAR_5)->ctrl;
 VAR_9->tisn = FUNC_1(VAR_7->tisn << 8);

 VAR_8->tls_encrypted_packets += FUNC_10(VAR_4) ? FUNC_11(VAR_4)->gso_segs : 1;
 VAR_8->tls_encrypted_bytes += VAR_11;

out:
 return VAR_4;

err_out:
 FUNC_2(VAR_4);
 return ((void*)0);
}
