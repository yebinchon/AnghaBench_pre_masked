
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct mii_if_info {int (* mdio_read ) (int ,int ,int ) ;int phy_id; int dev; } ;
struct board_info {int dev; struct mii_if_info mii; struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int ,...) ;
 unsigned int FUNC_1 (struct board_info*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct board_info *VAR_4,
    unsigned VAR_5, unsigned VAR_6)
{
 int VAR_7;
 struct net_device *VAR_8 = VAR_4->ndev;
 struct mii_if_info *VAR_9 = &VAR_4->mii;
 unsigned VAR_10 = FUNC_1(VAR_4, VAR_0);

 if (VAR_5) {
  VAR_7 = VAR_9->mdio_read(VAR_9->dev, VAR_9->phy_id, VAR_1);
  FUNC_0(VAR_4->dev,
    "%s: link up, %dMbps, %s-duplex, lpa 0x%04X\n",
    VAR_8->name, (VAR_6 & VAR_3) ? 10 : 100,
    (VAR_10 & VAR_2) ? "full" : "half", VAR_7);
 } else {
  FUNC_0(VAR_4->dev, "%s: link down\n", VAR_8->name);
 }
}
