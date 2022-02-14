
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct happy_meal {int sw_bmcr; int sw_lpa; int happy_lock; int tcvregs; } ;
struct TYPE_4__ {int supported; } ;
struct TYPE_3__ {scalar_t__ speed; void* duplex; int autoneg; scalar_t__ phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int ,scalar_t__) ;
 void* FUNC_1 (struct happy_meal*,int ,int ) ;
 struct happy_meal* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_22,
      struct ethtool_link_ksettings *VAR_23)
{
 struct happy_meal *VAR_24 = FUNC_2(VAR_22);
 u32 VAR_25;
 u32 VAR_26;

 VAR_26 =
  (VAR_18 | VAR_17 |
   VAR_16 | VAR_15 |
   VAR_19 | VAR_21 | VAR_20);


 VAR_23->base.port = VAR_12;
 VAR_23->base.phy_address = 0;


 FUNC_3(&VAR_24->happy_lock);
 VAR_24->sw_bmcr = FUNC_1(VAR_24, VAR_24->tcvregs, VAR_10);
 VAR_24->sw_lpa = FUNC_1(VAR_24, VAR_24->tcvregs, VAR_11);
 FUNC_4(&VAR_24->happy_lock);

 if (VAR_24->sw_bmcr & VAR_2) {
  VAR_23->base.autoneg = VAR_1;
  VAR_25 = ((VAR_24->sw_lpa & (VAR_8 | VAR_7)) ?
    VAR_14 : VAR_13);
  if (VAR_25 == VAR_14)
   VAR_23->base.duplex =
    (VAR_24->sw_lpa & (VAR_7)) ?
    VAR_5 : VAR_6;
  else
   VAR_23->base.duplex =
    (VAR_24->sw_lpa & (VAR_9)) ?
    VAR_5 : VAR_6;
 } else {
  VAR_23->base.autoneg = VAR_0;
  VAR_25 = (VAR_24->sw_bmcr & VAR_4) ? VAR_14 : VAR_13;
  VAR_23->base.duplex =
   (VAR_24->sw_bmcr & VAR_3) ?
   VAR_5 : VAR_6;
 }
 VAR_23->base.speed = VAR_25;
 FUNC_0(VAR_23->link_modes.supported,
      VAR_26);

 return 0;
}
