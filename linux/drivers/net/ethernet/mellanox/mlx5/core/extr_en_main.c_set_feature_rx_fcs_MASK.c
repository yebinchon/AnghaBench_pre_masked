
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int scatter_fcs_en; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {int state_lock; TYPE_2__ channels; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, bool VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->state_lock);

 VAR_2->channels.params.scatter_fcs_en = VAR_1;
 VAR_3 = FUNC_0(&VAR_2->channels, VAR_1);
 if (VAR_3)
  VAR_2->channels.params.scatter_fcs_en = !VAR_1;

 FUNC_2(&VAR_2->state_lock);

 return VAR_3;
}
