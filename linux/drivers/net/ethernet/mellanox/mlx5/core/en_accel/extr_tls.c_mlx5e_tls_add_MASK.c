
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tls_crypto_info {int dummy; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tls_offload_context_tx {int expected_seq; void* swid; } ;
struct mlx5e_tls_offload_context_rx {void* handle; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,struct tls_crypto_info*,int ,int *,int) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 struct mlx5e_tls_offload_context_rx* FUNC_6 (struct tls_context*) ;
 struct mlx5e_tls_offload_context_tx* FUNC_7 (struct tls_context*) ;
 int FUNC_8 (void*,struct sock*,int ) ;
 struct mlx5e_priv* FUNC_9 (struct net_device*) ;
 int VAR_3 ;
 struct tls_context* FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4, struct sock *VAR_5,
    enum tls_offload_ctx_dir VAR_6,
    struct tls_crypto_info *VAR_7,
    u32 VAR_8)
{
 struct mlx5e_priv *VAR_9 = FUNC_9(VAR_4);
 struct tls_context *VAR_10 = FUNC_10(VAR_5);
 struct mlx5_core_dev *VAR_11 = VAR_9->mdev;
 u32 VAR_12 = FUNC_5(VAR_11);
 int VAR_13 = -VAR_0;
 void *VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_3(FUNC_0(VAR_3), VAR_1);
 if (!VAR_14)
  return VAR_13;

 VAR_13 = FUNC_8(VAR_14, VAR_5, VAR_12);
 if (VAR_13)
  goto free_flow;

 VAR_13 = FUNC_4(VAR_11, VAR_14, VAR_7,
          VAR_8, &VAR_15,
          VAR_6 == VAR_2);
 if (VAR_13 < 0)
  goto free_flow;

 if (VAR_6 == VAR_2) {
  struct mlx5e_tls_offload_context_tx *VAR_16 =
      FUNC_7(VAR_10);

  VAR_16->swid = FUNC_1(VAR_15);
  VAR_16->expected_seq = VAR_8;
 } else {
  struct mlx5e_tls_offload_context_rx *VAR_17 =
      FUNC_6(VAR_10);

  VAR_17->handle = FUNC_1(VAR_15);
 }

 return 0;
free_flow:
 FUNC_2(VAR_14);
 return VAR_13;
}
