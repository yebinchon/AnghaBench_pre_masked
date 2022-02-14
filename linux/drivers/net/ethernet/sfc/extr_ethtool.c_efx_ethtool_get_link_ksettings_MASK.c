
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int duplex; int speed; } ;
struct TYPE_5__ {int supported; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_2__ link_modes; } ;
struct efx_link_state {scalar_t__ fd; int speed; } ;
struct efx_nic {int mac_lock; TYPE_1__* phy_op; struct efx_link_state link_state; } ;
struct TYPE_4__ {int (* get_link_ksettings ) (struct efx_nic*,struct ethtool_link_ksettings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct efx_nic* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct efx_nic*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_4,
          struct ethtool_link_ksettings *VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_5(VAR_4);
 struct efx_link_state *VAR_7 = &VAR_6->link_state;
 u32 VAR_8;

 FUNC_3(&VAR_6->mac_lock);
 VAR_6->phy_op->get_link_ksettings(VAR_6, VAR_5);
 FUNC_4(&VAR_6->mac_lock);


 FUNC_2(&VAR_8,
      VAR_5->link_modes.supported);

 VAR_8 |= VAR_3 | VAR_2;

 FUNC_1(VAR_5->link_modes.supported,
      VAR_8);

 if (FUNC_0(VAR_6)) {
  VAR_5->base.speed = VAR_7->speed;
  VAR_5->base.duplex = VAR_7->fd ? VAR_0 : VAR_1;
 }

 return 0;
}
