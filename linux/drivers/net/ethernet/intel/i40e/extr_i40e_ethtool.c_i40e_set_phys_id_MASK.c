
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct i40e_hw {int flags; } ;
struct i40e_pf {int hw_features; int led_status; int phy_led_val; struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
typedef scalar_t__ i40e_status ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*,int ,int *) ;
 int FUNC_1 (struct i40e_hw*) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int*,int*) ;
 int FUNC_3 (struct i40e_hw*,int,int) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,int,int,int) ;
 struct i40e_netdev_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
       enum ethtool_phys_id_state VAR_6)
{
 struct i40e_netdev_priv *VAR_7 = FUNC_5(VAR_5);
 i40e_status VAR_8 = 0;
 struct i40e_pf *VAR_9 = VAR_7->vsi->back;
 struct i40e_hw *VAR_10 = &VAR_9->hw;
 int VAR_11 = 2;
 u16 VAR_12;

 switch (VAR_6) {
 case 131:
  if (!(VAR_9->hw_features & VAR_2)) {
   VAR_9->led_status = FUNC_1(VAR_10);
  } else {
   if (!(VAR_10->flags & VAR_1))
    FUNC_0(VAR_10, VAR_3,
            ((void*)0));
   VAR_8 = FUNC_2(VAR_10, &VAR_12,
            &VAR_9->phy_led_val);
   VAR_9->led_status = VAR_12;
  }
  return VAR_11;
 case 128:
  if (!(VAR_9->hw_features & VAR_2))
   FUNC_3(VAR_10, 0xf, 0);
  else
   VAR_8 = FUNC_4(VAR_10, 1, VAR_9->led_status, 0);
  break;
 case 129:
  if (!(VAR_9->hw_features & VAR_2))
   FUNC_3(VAR_10, 0x0, 0);
  else
   VAR_8 = FUNC_4(VAR_10, 0, VAR_9->led_status, 0);
  break;
 case 130:
  if (!(VAR_9->hw_features & VAR_2)) {
   FUNC_3(VAR_10, VAR_9->led_status, 0);
  } else {
   VAR_8 = FUNC_4(VAR_10, 0, VAR_9->led_status,
            (VAR_9->phy_led_val |
            VAR_4));
   if (!(VAR_10->flags & VAR_1))
    FUNC_0(VAR_10, 0, ((void*)0));
  }
  break;
 default:
  break;
 }
 if (VAR_8)
  return -VAR_0;
 else
  return 0;
}
