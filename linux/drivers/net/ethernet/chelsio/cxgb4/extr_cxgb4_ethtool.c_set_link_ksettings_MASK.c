
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct link_config {unsigned int pcaps; unsigned int speed_caps; unsigned int acaps; scalar_t__ autoneg; } ;
struct port_info {int tx_chan; TYPE_2__* adapter; struct link_config link_cfg; } ;
struct net_device {int dummy; } ;
struct ethtool_link_settings {scalar_t__ duplex; scalar_t__ autoneg; int speed; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; struct ethtool_link_settings base; } ;
struct TYPE_4__ {int mbox; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,struct link_config*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
       const struct ethtool_link_ksettings *VAR_5)
{
 struct port_info *VAR_6 = FUNC_1(VAR_4);
 struct link_config *VAR_7 = &VAR_6->link_cfg;
 const struct ethtool_link_settings *VAR_8 = &VAR_5->base;
 struct link_config VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;


 if (VAR_8->duplex != VAR_1)
  return -VAR_2;

 VAR_9 = *VAR_7;
 if (!(VAR_7->pcaps & VAR_3) ||
     VAR_8->autoneg == VAR_0) {
  VAR_10 = FUNC_2(VAR_8->speed);


  if (!(VAR_7->pcaps & VAR_10))
   return -VAR_2;

  VAR_7->speed_caps = VAR_10;
  VAR_7->acaps = VAR_10;
 } else {
  VAR_10 =
   FUNC_0(VAR_5->link_modes.advertising);
  if (!(VAR_7->pcaps & VAR_10))
   return -VAR_2;
  VAR_7->speed_caps = 0;
  VAR_7->acaps = VAR_10 | VAR_3;
 }
 VAR_7->autoneg = VAR_8->autoneg;




 VAR_11 = FUNC_3(VAR_6->adapter, VAR_6->adapter->mbox, VAR_6->tx_chan, VAR_7);
 if (VAR_11)
  *VAR_7 = VAR_9;

 return VAR_11;
}
