
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tls_offload_context_rx {int handle; } ;
struct mlx5e_priv {TYPE_2__* tls; int mdev; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;
struct TYPE_3__ {int rx_tls_resync_reply; } ;
struct TYPE_4__ {TYPE_1__ sw_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct mlx5e_tls_offload_context_rx* FUNC_4 (struct tls_context*) ;
 int FUNC_5 (struct net_device*,char*,int ,int ) ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;
 struct tls_context* FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, struct sock *VAR_3,
       u32 VAR_4, u8 *VAR_5,
       enum tls_offload_ctx_dir VAR_6)
{
 struct tls_context *VAR_7 = FUNC_7(VAR_3);
 struct mlx5e_priv *VAR_8 = FUNC_6(VAR_2);
 struct mlx5e_tls_offload_context_rx *VAR_9;
 u64 VAR_10 = *(u64 *)VAR_5;

 if (FUNC_0(VAR_6 != VAR_1))
  return -VAR_0;
 VAR_9 = FUNC_4(VAR_7);

 FUNC_5(VAR_2, "resyncing seq %d rcd %lld\n", VAR_4,
      FUNC_2(VAR_10));
 FUNC_3(VAR_8->mdev, VAR_9->handle, VAR_4, VAR_10);
 FUNC_1(&VAR_8->tls->sw_stats.rx_tls_resync_reply);

 return 0;
}
