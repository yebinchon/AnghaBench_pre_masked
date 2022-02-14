
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tls_crypto_info {int dummy; } ;
struct tls_context {int dummy; } ;
struct tls12_crypto_info_aes_gcm_128 {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5e_ktls_offload_context_tx {int tisn; int key_id; struct tls12_crypto_info_aes_gcm_128 crypto_info; int expected_seq; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5e_ktls_offload_context_tx*) ;
 struct mlx5e_ktls_offload_context_tx* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,struct tls_crypto_info*,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int *) ;
 int FUNC_6 (struct mlx5e_ktls_offload_context_tx*) ;
 int FUNC_7 (struct mlx5_core_dev*,struct tls_crypto_info*) ;
 int FUNC_8 (struct tls_context*,struct mlx5e_ktls_offload_context_tx*) ;
 struct mlx5e_priv* FUNC_9 (struct net_device*) ;
 struct tls_context* FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5, struct sock *VAR_6,
     enum tls_offload_ctx_dir VAR_7,
     struct tls_crypto_info *VAR_8,
     u32 VAR_9)
{
 struct mlx5e_priv *VAR_10 = FUNC_9(VAR_5);
 struct mlx5e_ktls_offload_context_tx *VAR_11;
 struct tls_context *VAR_12 = FUNC_10(VAR_6);
 struct mlx5_core_dev *VAR_13 = VAR_10->mdev;
 int VAR_14;

 if (FUNC_0(VAR_7 != VAR_4))
  return -VAR_0;

 if (FUNC_0(!FUNC_7(VAR_13, VAR_8)))
  return -VAR_2;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->expected_seq = VAR_9;
 VAR_11->crypto_info = *(struct tls12_crypto_info_aes_gcm_128 *)VAR_8;
 FUNC_8(VAR_12, VAR_11);


 VAR_14 = FUNC_5(VAR_13, &VAR_11->tisn);
 if (VAR_14)
  goto create_tis_fail;

 VAR_14 = FUNC_3(VAR_13, VAR_8, &VAR_11->key_id);
 if (VAR_14)
  goto encryption_key_create_fail;

 FUNC_6(VAR_11);

 return 0;

encryption_key_create_fail:
 FUNC_4(VAR_10->mdev, VAR_11->tisn);
create_tis_fail:
 FUNC_1(VAR_11);
 return VAR_14;
}
