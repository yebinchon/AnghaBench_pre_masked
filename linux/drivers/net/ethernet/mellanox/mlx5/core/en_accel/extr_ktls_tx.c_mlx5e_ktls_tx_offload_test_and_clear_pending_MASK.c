
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_ktls_offload_context_tx {int ctx_post_pending; } ;



__attribute__((used)) static bool
FUNC_0(struct mlx5e_ktls_offload_context_tx *VAR_0)
{
 bool VAR_1 = VAR_0->ctx_post_pending;

 VAR_0->ctx_post_pending = 0;

 return VAR_1;
}
