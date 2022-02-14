
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_2__ {scalar_t__ pf_id; } ;
struct i40e_pf {TYPE_1__ hw; int pdev; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct ethtool_drvinfo {int n_priv_flags; int bus_info; int fw_version; int version; int driver; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4,
        struct ethtool_drvinfo *VAR_5)
{
 struct i40e_netdev_priv *VAR_6 = FUNC_1(VAR_4);
 struct i40e_vsi *VAR_7 = VAR_6->vsi;
 struct i40e_pf *VAR_8 = VAR_7->back;

 FUNC_3(VAR_5->driver, VAR_2, sizeof(VAR_5->driver));
 FUNC_3(VAR_5->version, VAR_3,
  sizeof(VAR_5->version));
 FUNC_3(VAR_5->fw_version, FUNC_0(&VAR_8->hw),
  sizeof(VAR_5->fw_version));
 FUNC_3(VAR_5->bus_info, FUNC_2(VAR_8->pdev),
  sizeof(VAR_5->bus_info));
 VAR_5->n_priv_flags = VAR_1;
 if (VAR_8->hw.pf_id == 0)
  VAR_5->n_priv_flags += VAR_0;
}
