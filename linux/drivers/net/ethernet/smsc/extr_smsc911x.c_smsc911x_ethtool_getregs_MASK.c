
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct smsc911x_data {int mac_lock; int idrev; } ;
struct TYPE_2__ {int addr; int bus; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct net_device {struct phy_device* phydev; } ;
struct ethtool_regs {int version; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct smsc911x_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct smsc911x_data*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (struct smsc911x_data*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_4, struct ethtool_regs *VAR_5,
    void *VAR_6)
{
 struct smsc911x_data *VAR_7 = FUNC_0(VAR_4);
 struct phy_device *VAR_8 = VAR_4->phydev;
 unsigned long VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 u32 *VAR_12 = VAR_6;

 VAR_5->version = VAR_7->idrev;
 for (VAR_10 = VAR_1; VAR_10 <= VAR_0; VAR_10 += (sizeof(u32)))
  VAR_12[VAR_11++] = FUNC_3(VAR_7, VAR_10);

 for (VAR_10 = VAR_2; VAR_10 <= VAR_3; VAR_10++) {
  FUNC_4(&VAR_7->mac_lock, VAR_9);
  VAR_12[VAR_11++] = FUNC_1(VAR_7, VAR_10);
  FUNC_5(&VAR_7->mac_lock, VAR_9);
 }

 for (VAR_10 = 0; VAR_10 <= 31; VAR_10++)
  VAR_12[VAR_11++] = FUNC_2(VAR_8->mdio.bus,
           VAR_8->mdio.addr, VAR_10);
}
