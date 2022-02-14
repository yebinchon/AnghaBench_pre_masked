
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int phy_id; int phy_id_mask; int reg_num_mask; int (* mdio_read ) (struct net_device*,int,int ) ;int supports_gmii; int (* mdio_write ) (struct net_device*,int,int ,int) ;struct net_device* dev; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ phy; } ;
struct pch_gbe_adapter {TYPE_3__ mii; struct net_device* netdev; TYPE_2__ hw; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (struct net_device*,int,int ) ;
 int FUNC_3 (struct net_device*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pch_gbe_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 u32 VAR_7;
 u16 VAR_8, VAR_9;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5->mii.phy_id = (VAR_7 == 0) ? 1 : (VAR_7 == 1) ? 0 : VAR_7;
  VAR_8 = FUNC_2(VAR_6, VAR_5->mii.phy_id, VAR_2);
  VAR_9 = FUNC_2(VAR_6, VAR_5->mii.phy_id, VAR_3);
  VAR_9 = FUNC_2(VAR_6, VAR_5->mii.phy_id, VAR_3);
  if (!((VAR_8 == 0xFFFF) || ((VAR_9 == 0) && (VAR_8 == 0))))
   break;
 }
 VAR_5->hw.phy.addr = VAR_5->mii.phy_id;
 FUNC_1(VAR_6, "phy_addr = %d\n", VAR_5->mii.phy_id);
 if (VAR_7 == VAR_4)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_7 != VAR_5->mii.phy_id) {
   FUNC_3(VAR_6, VAR_7, VAR_2,
        VAR_0);
  } else {
   VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_2);
   FUNC_3(VAR_6, VAR_7, VAR_2,
        VAR_8 & ~VAR_0);
  }
 }


 VAR_5->mii.phy_id_mask = 0x1F;
 VAR_5->mii.reg_num_mask = 0x1F;
 VAR_5->mii.dev = VAR_5->netdev;
 VAR_5->mii.mdio_read = FUNC_2;
 VAR_5->mii.mdio_write = FUNC_3;
 VAR_5->mii.supports_gmii = FUNC_0(&VAR_5->mii);
 return 0;
}
