
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_3__ {scalar_t__* module_type; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct ethtool_eeprom {int len; scalar_t__ offset; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct i40e_hw*,int ,scalar_t__,scalar_t__,scalar_t__*,int *) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8,
      struct ethtool_eeprom *VAR_9,
      u8 *VAR_10)
{
 struct i40e_netdev_priv *VAR_11 = FUNC_1(VAR_8);
 struct i40e_vsi *VAR_12 = VAR_11->vsi;
 struct i40e_pf *VAR_13 = VAR_12->back;
 struct i40e_hw *VAR_14 = &VAR_13->hw;
 bool VAR_15 = 0;
 i40e_status VAR_16;
 u32 VAR_17 = 0;
 int VAR_18;

 if (!VAR_9 || !VAR_9->len || !VAR_10)
  return -VAR_0;

 if (VAR_14->phy.link_info.module_type[0] == VAR_7)
  VAR_15 = 1;

 for (VAR_18 = 0; VAR_18 < VAR_9->len; VAR_18++) {
  u32 VAR_19 = VAR_18 + VAR_9->offset;
  u32 VAR_20 = VAR_15 ? VAR_5 : 0;


  if (VAR_15) {
   if (VAR_19 >= VAR_2) {
    VAR_19 -= VAR_2;
    VAR_20 = VAR_6;
   }
  } else {
   while (VAR_19 >= VAR_3) {

    VAR_19 -= VAR_3 / 2;
    VAR_20++;
   }
  }

  VAR_16 = FUNC_0(VAR_14,
    VAR_4,
    VAR_20, VAR_19, &VAR_17, ((void*)0));
  if (VAR_16)
   return -VAR_1;
  VAR_10[VAR_18] = VAR_17;
 }
 return 0;
}
