
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcnet32_private {scalar_t__ chip_version; int lock; scalar_t__ fdx; scalar_t__ port_tp; TYPE_1__* a; scalar_t__ autoneg; int mii_if; scalar_t__ mii; } ;
struct net_device {int base_addr; } ;
struct TYPE_6__ {int supported; } ;
struct TYPE_5__ {int speed; int duplex; void* port; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_3__ link_modes; TYPE_2__ base; } ;
struct TYPE_4__ {int (* read_bcr ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,struct ethtool_link_ksettings*) ;
 struct pcnet32_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10,
          struct ethtool_link_ksettings *VAR_11)
{
 struct pcnet32_private *VAR_12 = FUNC_2(VAR_10);
 unsigned long VAR_13;

 FUNC_3(&VAR_12->lock, VAR_13);
 if (VAR_12->mii) {
  FUNC_1(&VAR_12->mii_if, VAR_11);
 } else if (VAR_12->chip_version == VAR_4) {
  if (VAR_12->autoneg) {
   VAR_11->base.autoneg = VAR_1;
   if (VAR_12->a->read_bcr(VAR_10->base_addr, 4) == 0xc0)
    VAR_11->base.port = VAR_5;
   else
    VAR_11->base.port = VAR_6;
  } else {
   VAR_11->base.autoneg = VAR_0;
   VAR_11->base.port = VAR_12->port_tp ? VAR_6 : VAR_5;
  }
  VAR_11->base.duplex = VAR_12->fdx ? VAR_2 : VAR_3;
  VAR_11->base.speed = VAR_7;
  FUNC_0(
      VAR_11->link_modes.supported,
      VAR_9 | VAR_8);
 }
 FUNC_4(&VAR_12->lock, VAR_13);
 return 0;
}
