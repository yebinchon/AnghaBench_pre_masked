
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int mdev; } ;
struct mlx5e_ktls_offload_context_tx {int tisn; int key_id; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 int FUNC_0 (struct mlx5e_ktls_offload_context_tx*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct mlx5e_ktls_offload_context_tx* FUNC_3 (struct tls_context*) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
      struct tls_context *VAR_1,
      enum tls_offload_ctx_dir VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_4(VAR_0);
 struct mlx5e_ktls_offload_context_tx *VAR_4 =
  FUNC_3(VAR_1);

 FUNC_1(VAR_3->mdev, VAR_4->key_id);
 FUNC_2(VAR_3->mdev, VAR_4->tisn);
 FUNC_0(VAR_4);
}
