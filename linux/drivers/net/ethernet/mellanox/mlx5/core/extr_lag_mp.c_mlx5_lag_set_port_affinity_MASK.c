
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_lag {TYPE_3__* pf; } ;
struct lag_tracker {TYPE_1__* netdev_state; } ;
struct TYPE_6__ {int events; } ;
struct TYPE_8__ {TYPE_2__ priv; } ;
struct TYPE_7__ {TYPE_4__* dev; } ;
struct TYPE_5__ {int tx_enabled; int link_up; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_lag*) ;
 int FUNC_1 (TYPE_4__*,char*,int) ;
 int FUNC_2 (struct mlx5_lag*,struct lag_tracker*) ;
 int FUNC_3 (int ,int ,void*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_lag *VAR_1, int VAR_2)
{
 struct lag_tracker VAR_3;

 if (!FUNC_0(VAR_1))
  return;

 switch (VAR_2) {
 case 0:
  VAR_3.netdev_state[0].tx_enabled = 1;
  VAR_3.netdev_state[1].tx_enabled = 1;
  VAR_3.netdev_state[0].link_up = 1;
  VAR_3.netdev_state[1].link_up = 1;
  break;
 case 1:
  VAR_3.netdev_state[0].tx_enabled = 1;
  VAR_3.netdev_state[0].link_up = 1;
  VAR_3.netdev_state[1].tx_enabled = 0;
  VAR_3.netdev_state[1].link_up = 0;
  break;
 case 2:
  VAR_3.netdev_state[0].tx_enabled = 0;
  VAR_3.netdev_state[0].link_up = 0;
  VAR_3.netdev_state[1].tx_enabled = 1;
  VAR_3.netdev_state[1].link_up = 1;
  break;
 default:
  FUNC_1(VAR_1->pf[0].dev, "Invalid affinity port %d",
          VAR_2);
  return;
 }

 if (VAR_3.netdev_state[0].tx_enabled)
  FUNC_3(VAR_1->pf[0].dev->priv.events,
      VAR_0,
      (void *)0);

 if (VAR_3.netdev_state[1].tx_enabled)
  FUNC_3(VAR_1->pf[1].dev->priv.events,
      VAR_0,
      (void *)0);

 FUNC_2(VAR_1, &VAR_3);
}
