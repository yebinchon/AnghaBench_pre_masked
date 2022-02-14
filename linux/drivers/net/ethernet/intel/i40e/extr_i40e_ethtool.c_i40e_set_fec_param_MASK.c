
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct i40e_hw {scalar_t__ device_id; } ;
struct i40e_pf {TYPE_2__* pdev; struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_fecparam {int fec; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_9,
         struct ethtool_fecparam *VAR_10)
{
 struct i40e_netdev_priv *VAR_11 = FUNC_2(VAR_9);
 struct i40e_pf *VAR_12 = VAR_11->vsi->back;
 struct i40e_hw *VAR_13 = &VAR_12->hw;
 u8 VAR_14 = 0;
 int VAR_15 = 0;

 if (VAR_13->device_id != VAR_8 &&
     VAR_13->device_id != VAR_7) {
  VAR_15 = -VAR_1;
  goto done;
 }

 switch (VAR_10->fec) {
 case 132:
  VAR_14 = VAR_4;
  break;
 case 128:
  VAR_14 = (VAR_6 |
        VAR_3);
  break;
 case 131:
  VAR_14 = (VAR_5 |
        VAR_2);
  break;
 case 129:
 case 130:
  VAR_14 = 0;
  break;
 default:
  FUNC_0(&VAR_12->pdev->dev, "Unsupported FEC mode: %d",
    VAR_10->fec);
  VAR_15 = -VAR_0;
  goto done;
 }

 VAR_15 = FUNC_1(VAR_9, VAR_14);

done:
 return VAR_15;
}
