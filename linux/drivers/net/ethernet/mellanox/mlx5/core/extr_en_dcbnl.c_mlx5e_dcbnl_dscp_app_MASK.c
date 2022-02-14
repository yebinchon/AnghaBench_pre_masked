
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dscp_app_cnt; } ;
struct TYPE_3__ {scalar_t__ trust_state; int * dscp2prio; } ;
struct mlx5e_priv {TYPE_2__ dcbx; int netdev; TYPE_1__ dcbx_dp; int mdev; } ;
struct dcb_app {int protocol; int priority; int selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,struct dcb_app*) ;
 int FUNC_3 (int ,struct dcb_app*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct mlx5e_priv *VAR_5, int VAR_6)
{
 struct dcb_app VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_5->mdev, VAR_4))
  return;

 if (!FUNC_1(VAR_5->mdev))
  return;


 if (VAR_5->dcbx_dp.trust_state != VAR_3)
  return;

 VAR_7.selector = VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_7.protocol = VAR_8;
  VAR_7.priority = VAR_5->dcbx_dp.dscp2prio[VAR_8];
  if (VAR_6 == VAR_1)
   FUNC_3(VAR_5->netdev, &VAR_7);
  else
   FUNC_2(VAR_5->netdev, &VAR_7);
 }

 VAR_5->dcbx.dscp_app_cnt = (VAR_6 == VAR_1) ? VAR_2 : 0;
}
