
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int peer_mutex; int peer_flows; } ;
struct mlx5_eswitch {TYPE_3__* dev; TYPE_2__ offloads; } ;
struct mlx5_devcom {int dummy; } ;
struct TYPE_4__ {struct mlx5_devcom* devcom; } ;
struct TYPE_6__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mlx5_devcom*,int ,int ,struct mlx5_eswitch*) ;
 int FUNC_3 (struct mlx5_devcom*,int ,int ,struct mlx5_eswitch*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_eswitch *VAR_4)
{
 struct mlx5_devcom *VAR_5 = VAR_4->dev->priv.devcom;

 FUNC_0(&VAR_4->offloads.peer_flows);
 FUNC_4(&VAR_4->offloads.peer_mutex);

 if (!FUNC_1(VAR_4->dev, VAR_2))
  return;

 FUNC_2(VAR_5,
           VAR_1,
           VAR_3,
           VAR_4);

 FUNC_3(VAR_5,
          VAR_1,
          VAR_0, VAR_4);
}
