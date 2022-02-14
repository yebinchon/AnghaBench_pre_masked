
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {TYPE_3__* ethtool_ops; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct dsa_switch {TYPE_2__* ports; } ;
struct bcm_sf2_priv {int wol_ports_mask; } ;
typedef int s8 ;
struct TYPE_6__ {int (* set_wol ) (struct net_device*,struct ethtool_wolinfo*) ;int (* get_wol ) (struct net_device*,struct ethtool_wolinfo*) ;} ;
struct TYPE_5__ {TYPE_1__* cpu_dp; } ;
struct TYPE_4__ {int index; struct net_device* master; } ;


 int VAR_0 ;
 struct bcm_sf2_priv* FUNC_0 (struct dsa_switch*) ;
 int FUNC_1 (struct net_device*,struct ethtool_wolinfo*) ;
 int FUNC_2 (struct net_device*,struct ethtool_wolinfo*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
         struct ethtool_wolinfo *VAR_3)
{
 struct net_device *VAR_4 = VAR_1->ports[VAR_2].cpu_dp->master;
 struct bcm_sf2_priv *VAR_5 = FUNC_0(VAR_1);
 s8 VAR_6 = VAR_1->ports[VAR_2].cpu_dp->index;
 struct ethtool_wolinfo VAR_7 = { };

 if (VAR_4->ethtool_ops->get_wol)
  VAR_4->ethtool_ops->get_wol(VAR_4, &VAR_7);
 if (VAR_3->wolopts & ~VAR_7.supported)
  return -VAR_0;

 if (VAR_3->wolopts)
  VAR_5->wol_ports_mask |= (1 << VAR_2);
 else
  VAR_5->wol_ports_mask &= ~(1 << VAR_2);





 if (VAR_5->wol_ports_mask && VAR_5->wol_ports_mask != (1 << VAR_6))
  VAR_5->wol_ports_mask |= (1 << VAR_6);
 else
  VAR_5->wol_ports_mask &= ~(1 << VAR_6);

 return VAR_4->ethtool_ops->set_wol(VAR_4, VAR_3);
}
