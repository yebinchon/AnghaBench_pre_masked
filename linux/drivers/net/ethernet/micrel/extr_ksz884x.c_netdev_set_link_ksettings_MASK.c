
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ksz_port {int duplex; int speed; int force_link; } ;
struct TYPE_4__ {int advertising; } ;
struct TYPE_3__ {int speed; int duplex; scalar_t__ autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct dev_priv {int advertising; int mii_if; struct ksz_port port; struct dev_info* adapter; } ;
struct dev_info {int lock; } ;
typedef int copy_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (struct ethtool_link_ksettings*,struct ethtool_link_ksettings const*,int) ;
 int FUNC_3 (int *,struct ethtool_link_ksettings const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct dev_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5,
         const struct ethtool_link_ksettings *VAR_6)
{
 struct dev_priv *VAR_7 = FUNC_6(VAR_5);
 struct dev_info *VAR_8 = VAR_7->adapter;
 struct ksz_port *VAR_9 = &VAR_7->port;
 struct ethtool_link_ksettings VAR_10;
 u32 VAR_11 = VAR_6->base.speed;
 u32 VAR_12;
 int VAR_13;

 FUNC_1(&VAR_12,
      VAR_6->link_modes.advertising);





 if (VAR_6->base.autoneg && VAR_7->advertising == VAR_12) {
  VAR_12 |= VAR_4;
  if (10 == VAR_11)
   VAR_12 &=
    ~(VAR_0 |
    VAR_1);
  else if (100 == VAR_11)
   VAR_12 &=
    ~(VAR_2 |
    VAR_3);
  if (0 == VAR_6->base.duplex)
   VAR_12 &=
    ~(VAR_0 |
    VAR_2);
  else if (1 == VAR_6->base.duplex)
   VAR_12 &=
    ~(VAR_1 |
    VAR_3);
 }
 FUNC_4(&VAR_8->lock);
 if (VAR_6->base.autoneg &&
     (VAR_12 & VAR_4) == VAR_4) {
  VAR_9->duplex = 0;
  VAR_9->speed = 0;
  VAR_9->force_link = 0;
 } else {
  VAR_9->duplex = VAR_6->base.duplex + 1;
  if (1000 != VAR_11)
   VAR_9->speed = VAR_11;
  if (VAR_6->base.autoneg)
   VAR_9->force_link = 0;
  else
   VAR_9->force_link = 1;
 }

 FUNC_2(&VAR_10, VAR_6, sizeof(VAR_10));
 FUNC_0(VAR_10.link_modes.advertising,
      VAR_12);
 VAR_13 = FUNC_3(
  &VAR_7->mii_if,
  (const struct ethtool_link_ksettings *)&VAR_10);
 FUNC_5(&VAR_8->lock);
 return VAR_13;
}
