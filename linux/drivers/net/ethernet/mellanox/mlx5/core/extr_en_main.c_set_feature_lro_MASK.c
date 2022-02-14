
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_params {int lro_en; scalar_t__ rq_wq_type; } ;
struct TYPE_4__ {struct mlx5e_params params; } ;
struct TYPE_3__ {scalar_t__ refcnt; } ;
struct mlx5e_priv {int state_lock; int state; TYPE_2__ channels; TYPE_1__ xsk; struct mlx5_core_dev* mdev; } ;
struct mlx5e_channels {struct mlx5e_params params; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_params*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,struct mlx5e_params*,int *) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_channels*,int (*) (struct mlx5e_priv*)) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4, bool VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_6(VAR_4);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 struct mlx5e_channels VAR_8 = {};
 struct mlx5e_params *VAR_9;
 int VAR_10 = 0;
 bool VAR_11;

 FUNC_4(&VAR_6->state_lock);

 if (VAR_5 && VAR_6->xsk.refcnt) {
  FUNC_7(VAR_4, "LRO is incompatible with AF_XDP (%hu XSKs are active)\n",
       VAR_6->xsk.refcnt);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_9 = &VAR_6->channels.params;
 if (VAR_5 && !FUNC_0(VAR_9, VAR_1)) {
  FUNC_7(VAR_4, "can't set LRO with legacy RQ\n");
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_8(VAR_2, &VAR_6->state);

 VAR_8.params = *VAR_9;
 VAR_8.params.lro_en = VAR_5;

 if (VAR_9->rq_wq_type != VAR_3) {
  if (FUNC_2(VAR_7, VAR_9, ((void*)0)) ==
      FUNC_2(VAR_7, &VAR_8.params, ((void*)0)))
   VAR_11 = 0;
 }

 if (!VAR_11) {
  *VAR_9 = VAR_8.params;
  VAR_10 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_10 = FUNC_3(VAR_6, &VAR_8, FUNC_1);
out:
 FUNC_5(&VAR_6->state_lock);
 return VAR_10;
}
