
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int dscp_app_cnt; } ;
struct TYPE_3__ {scalar_t__* dscp2prio; } ;
struct mlx5e_priv {TYPE_2__ dcbx; TYPE_1__ dcbx_dp; int mdev; } ;
struct dcb_app {scalar_t__ selector; size_t protocol; scalar_t__ priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct net_device*,struct dcb_app*) ;
 int FUNC_3 (struct net_device*,struct dcb_app*) ;
 int FUNC_4 (struct mlx5e_priv*,size_t,scalar_t__) ;
 int FUNC_5 (struct mlx5e_priv*,int ) ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7, struct dcb_app *VAR_8)
{
 struct mlx5e_priv *VAR_9 = FUNC_6(VAR_7);
 struct dcb_app VAR_10;
 bool VAR_11;
 int VAR_12;

 if (!FUNC_0(VAR_9->mdev, VAR_6) ||
     !FUNC_1(VAR_9->mdev))
  return -VAR_1;

 if ((VAR_8->selector != VAR_2) ||
     (VAR_8->protocol >= VAR_3))
  return -VAR_0;


 VAR_10.selector = VAR_2;
 VAR_10.protocol = VAR_8->protocol;
 VAR_10.priority = VAR_9->dcbx_dp.dscp2prio[VAR_8->protocol];


 if (!VAR_9->dcbx.dscp_app_cnt) {
  VAR_12 = FUNC_5(VAR_9, VAR_4);
  if (VAR_12)
   return VAR_12;
 }


 if (VAR_8->priority != VAR_9->dcbx_dp.dscp2prio[VAR_8->protocol]) {
  VAR_12 = FUNC_4(VAR_9, VAR_8->protocol, VAR_8->priority);
  if (VAR_12)
   goto fw_err;
 }


 VAR_11 = 0;
 VAR_12 = FUNC_2(VAR_7, &VAR_10);
 if (VAR_12)
  VAR_11 = 1;


 VAR_12 = FUNC_3(VAR_7, VAR_8);
 if (VAR_12)
  return VAR_12;

 if (VAR_11)
  VAR_9->dcbx.dscp_app_cnt++;

 return VAR_12;

fw_err:
 FUNC_5(VAR_9, VAR_5);
 return VAR_12;
}
