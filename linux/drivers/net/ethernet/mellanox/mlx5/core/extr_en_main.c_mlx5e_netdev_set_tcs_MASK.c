
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int num_channels; int num_tc; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_2__ channels; } ;


 struct mlx5e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = VAR_1->channels.params.num_channels;
 int VAR_3 = VAR_1->channels.params.num_tc;
 int VAR_4;

 FUNC_1(VAR_0);

 if (VAR_3 == 1)
  return;

 FUNC_2(VAR_0, VAR_3);




 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_3(VAR_0, VAR_4, VAR_2, 0);
}
