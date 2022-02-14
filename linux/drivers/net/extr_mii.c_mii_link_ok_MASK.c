
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int (* mdio_read ) (int ,int ,int ) ;int phy_id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2 (struct mii_if_info *VAR_2)
{

 VAR_2->mdio_read(VAR_2->dev, VAR_2->phy_id, VAR_1);
 if (VAR_2->mdio_read(VAR_2->dev, VAR_2->phy_id, VAR_1) & VAR_0)
  return 1;
 return 0;
}
