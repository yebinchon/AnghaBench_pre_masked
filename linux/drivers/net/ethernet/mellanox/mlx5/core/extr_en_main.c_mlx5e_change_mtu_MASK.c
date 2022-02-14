
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int mtu; } ;
struct TYPE_3__ {int refcnt; } ;
struct mlx5e_params {int sw_mtu; scalar_t__ rq_wq_type; scalar_t__ xdp_prog; int lro_en; } ;
struct TYPE_4__ {struct mlx5e_params params; } ;
struct mlx5e_priv {int state_lock; TYPE_1__ xsk; int mdev; TYPE_2__ channels; int state; } ;
struct mlx5e_channels {struct mlx5e_params params; } ;
typedef int (* change_hw_mtu_cb ) (struct mlx5e_priv*) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5e_params*,int *) ;
 int FUNC_1 (struct mlx5e_params*,int *) ;
 int FUNC_2 (int ,struct mlx5e_params*,int *) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_channels*,int (*) (struct mlx5e_priv*)) ;
 int FUNC_4 (struct mlx5e_params*,int *) ;
 int FUNC_5 (struct net_device*,TYPE_2__*,struct mlx5e_params*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*,char*,int,int ) ;
 struct mlx5e_priv* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

int FUNC_11(struct net_device *VAR_3, int VAR_4,
       change_hw_mtu_cb VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_9(VAR_3);
 struct mlx5e_channels VAR_7 = {};
 struct mlx5e_params *VAR_8;
 int VAR_9 = 0;
 bool VAR_10;

 FUNC_6(&VAR_6->state_lock);

 VAR_8 = &VAR_6->channels.params;

 VAR_10 = !VAR_8->lro_en;
 VAR_10 = VAR_10 && FUNC_10(VAR_1, &VAR_6->state);

 VAR_7.params = *VAR_8;
 VAR_7.params.sw_mtu = VAR_4;

 if (VAR_8->xdp_prog &&
     !FUNC_1(&VAR_7.params, ((void*)0))) {
  FUNC_8(VAR_3, "MTU(%d) > %d is not allowed while XDP enabled\n",
      VAR_4, FUNC_4(VAR_8, ((void*)0)));
  VAR_9 = -VAR_0;
  goto out;
 }

 if (VAR_6->xsk.refcnt &&
     !FUNC_5(VAR_3, &VAR_6->channels,
        &VAR_7.params, VAR_6->mdev)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 if (VAR_8->rq_wq_type == VAR_2) {
  bool VAR_11 = FUNC_2(VAR_6->mdev,
             &VAR_7.params,
             ((void*)0));
  u8 VAR_12 = FUNC_0(VAR_8, ((void*)0));
  u8 VAR_13 = FUNC_0(&VAR_7.params, ((void*)0));


  VAR_11 |= VAR_6->xsk.refcnt;


  VAR_10 = VAR_10 && (VAR_11 || (VAR_12 != VAR_13));
 }

 if (!VAR_10) {
  VAR_8->sw_mtu = VAR_4;
  if (VAR_5)
   VAR_5(VAR_6);
  VAR_3->mtu = VAR_8->sw_mtu;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_6, &VAR_7, VAR_5);
 if (VAR_9)
  goto out;

 VAR_3->mtu = VAR_7.params.sw_mtu;

out:
 FUNC_7(&VAR_6->state_lock);
 return VAR_9;
}
