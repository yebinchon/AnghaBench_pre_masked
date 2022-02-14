
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct bgmac {int dev; int net_dev; int phyaddr; TYPE_1__* mii_bus; } ;
typedef int bus_id ;
struct TYPE_2__ {int id; } ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 struct phy_device* FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (char*,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct bgmac *VAR_4)
{
 struct phy_device *VAR_5;
 char VAR_6[VAR_0 + 3];


 FUNC_4(VAR_6, sizeof(VAR_6), VAR_1, VAR_4->mii_bus->id,
   VAR_4->phyaddr);
 VAR_5 = FUNC_3(VAR_4->net_dev, VAR_6, VAR_3,
         VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_4->dev, "PHY connection failed\n");
  return FUNC_1(VAR_5);
 }

 return 0;
}
