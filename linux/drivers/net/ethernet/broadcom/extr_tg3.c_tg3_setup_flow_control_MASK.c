
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ autoneg; scalar_t__ flowctrl; scalar_t__ active_flowctrl; } ;
struct tg3 {int phy_flags; int tx_mode; int rx_mode; TYPE_1__ link_config; int phy_addr; int mdio_bus; } ;
struct TYPE_4__ {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct tg3 *VAR_10, u32 VAR_11, u32 VAR_12)
{
 u8 VAR_13;
 u8 VAR_14 = 0;
 u32 VAR_15 = VAR_10->rx_mode;
 u32 VAR_16 = VAR_10->tx_mode;

 if (FUNC_2(VAR_10, VAR_9))
  VAR_13 = FUNC_0(VAR_10->mdio_bus, VAR_10->phy_addr)->autoneg;
 else
  VAR_13 = VAR_10->link_config.autoneg;

 if (VAR_13 == VAR_0 && FUNC_2(VAR_10, VAR_5)) {
  if (VAR_10->phy_flags & VAR_7)
   VAR_14 = FUNC_3(VAR_11, VAR_12);
  else
   VAR_14 = FUNC_1(VAR_11, VAR_12);
 } else
  VAR_14 = VAR_10->link_config.flowctrl;

 VAR_10->link_config.active_flowctrl = VAR_14;

 if (VAR_14 & VAR_1)
  VAR_10->rx_mode |= VAR_6;
 else
  VAR_10->rx_mode &= ~VAR_6;

 if (VAR_15 != VAR_10->rx_mode)
  FUNC_4(VAR_3, VAR_10->rx_mode);

 if (VAR_14 & VAR_2)
  VAR_10->tx_mode |= VAR_8;
 else
  VAR_10->tx_mode &= ~VAR_8;

 if (VAR_16 != VAR_10->tx_mode)
  FUNC_4(VAR_4, VAR_10->tx_mode);
}
