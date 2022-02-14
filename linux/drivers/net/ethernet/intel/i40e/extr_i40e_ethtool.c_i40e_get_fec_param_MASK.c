
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int fec_info; } ;
struct TYPE_6__ {TYPE_2__ link_info; } ;
struct i40e_hw {TYPE_3__ phy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct i40e_aq_get_phy_abilities_resp {int fec_cfg_curr_mod_ext_info; } ;
struct ethtool_fecparam {int active_fec; int fec; } ;
typedef scalar_t__ i40e_status ;
typedef int abilities ;
struct TYPE_4__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int,int,struct i40e_aq_get_phy_abilities_resp*,int *) ;
 int FUNC_1 (struct i40e_aq_get_phy_abilities_resp*,int ,int) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_12,
         struct ethtool_fecparam *VAR_13)
{
 struct i40e_netdev_priv *VAR_14 = FUNC_2(VAR_12);
 struct i40e_aq_get_phy_abilities_resp VAR_15;
 struct i40e_pf *VAR_16 = VAR_14->vsi->back;
 struct i40e_hw *VAR_17 = &VAR_16->hw;
 i40e_status VAR_18 = 0;
 int VAR_19 = 0;


 FUNC_1(&VAR_15, 0, sizeof(VAR_15));
 VAR_18 = FUNC_0(VAR_17, 0, 0, &VAR_15,
           ((void*)0));
 if (VAR_18) {
  VAR_19 = -VAR_0;
  goto done;
 }

 VAR_13->fec = 0;
 if (VAR_15.fec_cfg_curr_mod_ext_info & VAR_9)
  VAR_13->fec |= VAR_1;
 if ((VAR_15.fec_cfg_curr_mod_ext_info &
      VAR_11) ||
     (VAR_15.fec_cfg_curr_mod_ext_info &
      VAR_8))
  VAR_13->fec |= VAR_4;
 if ((VAR_15.fec_cfg_curr_mod_ext_info &
      VAR_10) ||
     (VAR_15.fec_cfg_curr_mod_ext_info & VAR_7))
  VAR_13->fec |= VAR_2;
 if (VAR_15.fec_cfg_curr_mod_ext_info == 0)
  VAR_13->fec |= VAR_3;

 if (VAR_17->phy.link_info.fec_info & VAR_5)
  VAR_13->active_fec = VAR_2;
 else if (VAR_17->phy.link_info.fec_info & VAR_6)
  VAR_13->active_fec = VAR_4;
 else
  VAR_13->active_fec = VAR_3;
done:
 return VAR_19;
}
