
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_phy {unsigned short (* mdio_read ) (int ,int,int ) ;int mii_id; TYPE_1__* def; int mdio_write; int dev; } ;
struct spider_net_card {int netdev; struct mii_phy phy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 unsigned short FUNC_1 (int ,int,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct spider_net_card*,int ,int ) ;
 int FUNC_3 (struct mii_phy*,int) ;

__attribute__((used)) static int
FUNC_4(struct spider_net_card *VAR_6)
{
 struct mii_phy *VAR_7 = &VAR_6->phy;

 FUNC_2(VAR_6, VAR_2,
        VAR_1);
 FUNC_2(VAR_6, VAR_3,
        VAR_4);

 VAR_7->dev = VAR_6->netdev;
 VAR_7->mdio_read = FUNC_1;
 VAR_7->mdio_write = VAR_5;

 for (VAR_7->mii_id = 1; VAR_7->mii_id <= 31; VAR_7->mii_id++) {
  unsigned short VAR_8;
  VAR_8 = FUNC_1(VAR_6->netdev, VAR_7->mii_id, VAR_0);
  if (VAR_8 != 0x0000 && VAR_8 != 0xffff) {
   if (!FUNC_3(VAR_7, VAR_7->mii_id)) {
    FUNC_0("Found %s.\n", VAR_7->def->name);
    break;
   }
  }
 }

 return 0;
}
