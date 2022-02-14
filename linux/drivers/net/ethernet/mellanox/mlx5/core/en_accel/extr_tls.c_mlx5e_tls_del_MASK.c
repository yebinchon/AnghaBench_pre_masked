
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tls_context {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int mdev; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;
struct TYPE_4__ {int handle; } ;
struct TYPE_3__ {int swid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int) ;
 TYPE_2__* FUNC_1 (struct tls_context*) ;
 TYPE_1__* FUNC_2 (struct tls_context*) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
     struct tls_context *VAR_2,
     enum tls_offload_ctx_dir VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_3(VAR_1);
 unsigned int VAR_5;

 VAR_5 = FUNC_4((VAR_3 == VAR_0) ?
         FUNC_2(VAR_2)->swid :
         FUNC_1(VAR_2)->handle);

 FUNC_0(VAR_4->mdev, VAR_5,
    VAR_3 == VAR_0);
}
