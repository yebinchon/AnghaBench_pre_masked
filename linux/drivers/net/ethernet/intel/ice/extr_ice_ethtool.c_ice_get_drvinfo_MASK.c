
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ice_vsi {struct ice_pf* back; } ;
struct ice_pf {int pdev; int hw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ethtool_drvinfo {int n_priv_flags; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct ice_netdev_priv *VAR_5 = FUNC_1(VAR_3);
 struct ice_vsi *VAR_6 = VAR_5->vsi;
 struct ice_pf *VAR_7 = VAR_6->back;

 FUNC_3(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_3(VAR_4->version, VAR_2, sizeof(VAR_4->version));
 FUNC_3(VAR_4->fw_version, FUNC_0(&VAR_7->hw),
  sizeof(VAR_4->fw_version));
 FUNC_3(VAR_4->bus_info, FUNC_2(VAR_7->pdev),
  sizeof(VAR_4->bus_info));
 VAR_4->n_priv_flags = VAR_0;
}
