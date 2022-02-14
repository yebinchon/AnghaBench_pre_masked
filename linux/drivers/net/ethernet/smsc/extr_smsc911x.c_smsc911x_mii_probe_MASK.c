
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phy_interface; } ;
struct smsc911x_data {int last_duplex; int last_carrier; TYPE_2__ config; int mii_bus; } ;
struct TYPE_3__ {int addr; } ;
struct phy_device {int phy_id; TYPE_1__ mdio; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*,...) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*,char*) ;
 struct smsc911x_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct net_device*,struct phy_device*,int *,int ) ;
 int FUNC_6 (struct phy_device*) ;
 struct phy_device* FUNC_7 (int ) ;
 int FUNC_8 (struct phy_device*,int ) ;
 int FUNC_9 (struct phy_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct smsc911x_data *VAR_6 = FUNC_3(VAR_5);
 struct phy_device *VAR_7 = ((void*)0);
 int VAR_8;


 VAR_7 = FUNC_7(VAR_6->mii_bus);
 if (!VAR_7) {
  FUNC_2(VAR_5, "no PHY found\n");
  return -VAR_0;
 }

 FUNC_0(VAR_6, VAR_3, "PHY: addr %d, phy_id 0x%08X",
     VAR_7->mdio.addr, VAR_7->phy_id);

 VAR_8 = FUNC_5(VAR_5, VAR_7, &VAR_4,
     VAR_6->config.phy_interface);

 if (VAR_8) {
  FUNC_2(VAR_5, "Could not attach to PHY\n");
  return VAR_8;
 }

 FUNC_4(VAR_7);

 FUNC_8(VAR_7, VAR_1);


 FUNC_9(VAR_7);

 VAR_6->last_duplex = -1;
 VAR_6->last_carrier = -1;
 FUNC_0(VAR_6, VAR_2, "phy initialised successfully");
 return 0;
}
