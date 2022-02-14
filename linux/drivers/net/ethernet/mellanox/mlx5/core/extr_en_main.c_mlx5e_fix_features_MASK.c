
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_5__ {int active_svlans; } ;
struct TYPE_6__ {TYPE_2__ vlan; } ;
struct mlx5e_params {int vlan_strip_disable; } ;
struct TYPE_4__ {struct mlx5e_params params; } ;
struct mlx5e_priv {int state_lock; TYPE_3__ fs; TYPE_1__ channels; } ;
typedef int netdev_features_t ;


 scalar_t__ FUNC_0 (struct mlx5e_params*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;

__attribute__((used)) static netdev_features_t FUNC_6(struct net_device *VAR_6,
         netdev_features_t VAR_7)
{
 struct mlx5e_priv *VAR_8 = FUNC_4(VAR_6);
 struct mlx5e_params *VAR_9;

 FUNC_2(&VAR_8->state_lock);
 VAR_9 = &VAR_8->channels.params;
 if (!FUNC_1(VAR_8->fs.vlan.active_svlans, VAR_5)) {



  VAR_7 &= ~VAR_2;
  if (!VAR_9->vlan_strip_disable)
   FUNC_5(VAR_6, "Dropping C-tag vlan stripping offload due to S-tag vlan\n");
 }
 if (!FUNC_0(VAR_9, VAR_1)) {
  if (VAR_7 & VAR_3) {
   FUNC_5(VAR_6, "Disabling LRO, not supported in legacy RQ\n");
   VAR_7 &= ~VAR_3;
  }
 }

 if (FUNC_0(VAR_9, VAR_0)) {
  VAR_7 &= ~VAR_4;
  if (VAR_6->features & VAR_4)
   FUNC_5(VAR_6, "Disabling rxhash, not supported when CQE compress is active\n");
 }

 FUNC_3(&VAR_8->state_lock);

 return VAR_7;
}
