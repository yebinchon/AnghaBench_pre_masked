
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int vlan_strip_disable; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {int state_lock; TYPE_2__ channels; int state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, bool VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 FUNC_1(&VAR_3->state_lock);

 VAR_3->channels.params.vlan_strip_disable = !VAR_2;
 if (!FUNC_4(VAR_0, &VAR_3->state))
  goto unlock;

 VAR_4 = FUNC_0(&VAR_3->channels, !VAR_2);
 if (VAR_4)
  VAR_3->channels.params.vlan_strip_disable = VAR_2;

unlock:
 FUNC_2(&VAR_3->state_lock);

 return VAR_4;
}
