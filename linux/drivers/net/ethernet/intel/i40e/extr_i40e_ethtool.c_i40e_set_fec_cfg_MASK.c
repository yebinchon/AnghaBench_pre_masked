
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct i40e_hw {TYPE_2__ aq; } ;
struct i40e_pf {int flags; struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct i40e_aq_set_phy_config {int fec_cfg_curr_mod_ext_info; int fec_config; int d3_lpan; int low_power_ctrl; int eeer_val; int eeer; int eee_capability; int link_speed; int phy_type_ext; int abilities; int phy_type; } ;
struct i40e_aq_get_phy_abilities_resp {int fec_cfg_curr_mod_ext_info; int fec_config; int d3_lpan; int low_power_ctrl; int eeer_val; int eeer; int eee_capability; int link_speed; int phy_type_ext; int abilities; int phy_type; } ;
typedef scalar_t__ i40e_status ;
typedef int config ;
typedef int abilities ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int,int,struct i40e_aq_set_phy_config*,int *) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,struct i40e_aq_set_phy_config*,int *) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct i40e_hw*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct i40e_hw*) ;
 int FUNC_7 (struct i40e_aq_set_phy_config*,int ,int) ;
 int FUNC_8 (struct net_device*,char*,int ,int ) ;
 int FUNC_9 (struct net_device*,char*,int ,int ) ;
 struct i40e_netdev_priv* FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2, u8 VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_10(VAR_2);
 struct i40e_aq_get_phy_abilities_resp VAR_5;
 struct i40e_pf *VAR_6 = VAR_4->vsi->back;
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 i40e_status VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10 = 0;

 VAR_9 = FUNC_0(VAR_6->flags);
 FUNC_4(VAR_3, &VAR_9);


 FUNC_7(&VAR_5, 0, sizeof(VAR_5));
 VAR_8 = FUNC_1(VAR_7, 0, 0, &VAR_5,
           ((void*)0));
 if (VAR_8) {
  VAR_10 = -VAR_0;
  goto done;
 }

 if (VAR_5.fec_cfg_curr_mod_ext_info != VAR_3) {
  struct i40e_aq_set_phy_config VAR_11;

  FUNC_7(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.phy_type = VAR_5.phy_type;
  VAR_11.abilities = VAR_5.abilities;
  VAR_11.phy_type_ext = VAR_5.phy_type_ext;
  VAR_11.link_speed = VAR_5.link_speed;
  VAR_11.eee_capability = VAR_5.eee_capability;
  VAR_11.eeer = VAR_5.eeer_val;
  VAR_11.low_power_ctrl = VAR_5.d3_lpan;
  VAR_11.fec_config = VAR_3 & VAR_1;
  VAR_8 = FUNC_2(VAR_7, &VAR_11, ((void*)0));
  if (VAR_8) {
   FUNC_9(VAR_2,
        "Set phy config failed, err %s aq_err %s\n",
        FUNC_5(VAR_7, VAR_8),
        FUNC_3(VAR_7, VAR_7->aq.asq_last_status));
   VAR_10 = -VAR_0;
   goto done;
  }
  VAR_6->flags = VAR_9;
  VAR_8 = FUNC_6(VAR_7);
  if (VAR_8)




   FUNC_8(VAR_2,
       "Updating link info failed with err %s aq_err %s\n",
       FUNC_5(VAR_7, VAR_8),
       FUNC_3(VAR_7, VAR_7->aq.asq_last_status));
 }

done:
 return VAR_10;
}
