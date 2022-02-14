
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {TYPE_3__* ethtool_ops; } ;
struct ethtool_wolinfo {int wolopts; int sopass; int supported; } ;
struct dsa_switch {TYPE_2__* ports; } ;
struct bcm_sf2_priv {int wol_ports_mask; } ;
struct TYPE_6__ {int (* get_wol ) (struct net_device*,struct ethtool_wolinfo*) ;} ;
struct TYPE_5__ {TYPE_1__* cpu_dp; } ;
struct TYPE_4__ {struct net_device* master; } ;


 int VAR_0 ;
 struct bcm_sf2_priv* FUNC_0 (struct dsa_switch*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct net_device*,struct ethtool_wolinfo*) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_1, int VAR_2,
          struct ethtool_wolinfo *VAR_3)
{
 struct net_device *VAR_4 = VAR_1->ports[VAR_2].cpu_dp->master;
 struct bcm_sf2_priv *VAR_5 = FUNC_0(VAR_1);
 struct ethtool_wolinfo VAR_6 = { };


 if (VAR_4->ethtool_ops->get_wol)
  VAR_4->ethtool_ops->get_wol(VAR_4, &VAR_6);


 VAR_3->supported = VAR_6.supported;
 FUNC_2(&VAR_3->sopass, 0, sizeof(VAR_3->sopass));

 if (VAR_6.wolopts & VAR_0)
  FUNC_1(&VAR_3->sopass, VAR_6.sopass, sizeof(VAR_3->sopass));

 if (VAR_5->wol_ports_mask & (1 << VAR_2))
  VAR_3->wolopts = VAR_6.wolopts;
 else
  VAR_3->wolopts = 0;
}
