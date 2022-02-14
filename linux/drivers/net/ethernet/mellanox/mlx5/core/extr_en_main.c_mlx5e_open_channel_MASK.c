
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_priv {TYPE_4__* mdev; TYPE_3__* channel_stats; struct net_device* netdev; int tstamp; } ;
struct mlx5e_params {int xdp_prog; int num_tc; } ;
struct mlx5e_channel_param {int dummy; } ;
struct mlx5e_channel {int ix; int cpu; int xdp; int napi; int lag_port; int irq_desc; int * stats; int num_tc; int mkey_be; struct net_device* netdev; int pdev; int * tstamp; TYPE_4__* mdev; struct mlx5e_priv* priv; } ;
struct TYPE_7__ {int key; } ;
struct TYPE_8__ {TYPE_1__ mkey; } ;
struct TYPE_10__ {TYPE_2__ mlx5e_res; int device; } ;
struct TYPE_9__ {int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct mlx5e_channel*) ;
 struct mlx5e_channel* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int,int*,unsigned int*) ;
 int FUNC_8 (struct mlx5e_channel*,struct mlx5e_params*) ;
 int FUNC_9 (struct xdp_umem*,struct mlx5e_xsk_param*) ;
 int FUNC_10 (struct mlx5e_channel*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (struct mlx5e_channel*) ;
 int VAR_2 ;
 int FUNC_13 (struct mlx5e_channel*,struct mlx5e_params*,struct mlx5e_channel_param*) ;
 int FUNC_14 (struct mlx5e_priv*,struct mlx5e_params*,struct mlx5e_xsk_param*,struct xdp_umem*,struct mlx5e_channel*) ;
 int FUNC_15 (struct net_device*,int *,int ,int) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct mlx5e_priv *VAR_3, int VAR_4,
         struct mlx5e_params *VAR_5,
         struct mlx5e_channel_param *VAR_6,
         struct xdp_umem *VAR_7,
         struct mlx5e_channel **VAR_8)
{
 int VAR_9 = FUNC_2(FUNC_6(VAR_3->mdev, VAR_4));
 struct net_device *VAR_10 = VAR_3->netdev;
 struct mlx5e_xsk_param VAR_11;
 struct mlx5e_channel *VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_14 = FUNC_7(VAR_3->mdev, VAR_4, &VAR_15, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_1, FUNC_1(VAR_9));
 if (!VAR_12)
  return -VAR_0;

 VAR_12->priv = VAR_3;
 VAR_12->mdev = VAR_3->mdev;
 VAR_12->tstamp = &VAR_3->tstamp;
 VAR_12->ix = VAR_4;
 VAR_12->cpu = VAR_9;
 VAR_12->pdev = VAR_3->mdev->device;
 VAR_12->netdev = VAR_3->netdev;
 VAR_12->mkey_be = FUNC_0(VAR_3->mdev->mlx5e_res.mkey.key);
 VAR_12->num_tc = VAR_5->num_tc;
 VAR_12->xdp = !!VAR_5->xdp_prog;
 VAR_12->stats = &VAR_3->channel_stats[VAR_4].ch;
 VAR_12->irq_desc = FUNC_3(VAR_13);
 VAR_12->lag_port = FUNC_11(VAR_3->mdev, VAR_4);

 VAR_14 = FUNC_8(VAR_12, VAR_5);
 if (VAR_14)
  goto err_free_channel;

 FUNC_15(VAR_10, &VAR_12->napi, VAR_2, 64);

 VAR_14 = FUNC_13(VAR_12, VAR_5, VAR_6);
 if (FUNC_17(VAR_14))
  goto err_napi_del;

 if (VAR_7) {
  FUNC_9(VAR_7, &VAR_11);
  VAR_14 = FUNC_14(VAR_3, VAR_5, &VAR_11, VAR_7, VAR_12);
  if (FUNC_17(VAR_14))
   goto err_close_queues;
 }

 *VAR_8 = VAR_12;

 return 0;

err_close_queues:
 FUNC_10(VAR_12);

err_napi_del:
 FUNC_16(&VAR_12->napi);
 FUNC_12(VAR_12);

err_free_channel:
 FUNC_4(VAR_12);

 return VAR_14;
}
