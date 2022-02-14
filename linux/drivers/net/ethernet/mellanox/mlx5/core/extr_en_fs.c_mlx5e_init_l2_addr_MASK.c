
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ broadcast; } ;
struct TYPE_7__ {TYPE_2__ l2; } ;
struct mlx5e_priv {TYPE_4__* netdev; TYPE_3__ fs; } ;
struct TYPE_8__ {int broadcast; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct mlx5e_priv *VAR_0)
{
 FUNC_0(VAR_0->fs.l2.broadcast.addr, VAR_0->netdev->broadcast);
}
