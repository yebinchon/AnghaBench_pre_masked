
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct ef4_link_state {scalar_t__ fd; int speed; } ;
struct ef4_nic {int mac_lock; TYPE_1__* phy_op; struct ef4_link_state link_state; } ;
struct TYPE_3__ {int (* get_link_ksettings ) (struct ef4_nic*,struct ethtool_link_ksettings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ef4_nic*) ;
 int VAR_3 ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ef4_nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ef4_nic*,struct ethtool_link_ksettings*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5,
          struct ethtool_link_ksettings *VAR_6)
{
 struct ef4_nic *VAR_7 = FUNC_4(VAR_5);
 struct ef4_link_state *VAR_8 = &VAR_7->link_state;

 FUNC_2(&VAR_7->mac_lock);
 VAR_7->phy_op->get_link_ksettings(VAR_7, VAR_6);
 FUNC_3(&VAR_7->mac_lock);


 FUNC_1(VAR_6, VAR_4, VAR_3);
 FUNC_1(VAR_6, VAR_4, VAR_0);

 if (FUNC_0(VAR_7)) {
  VAR_6->base.speed = VAR_8->speed;
  VAR_6->base.duplex = VAR_8->fd ? VAR_1 : VAR_2;
 }

 return 0;
}
