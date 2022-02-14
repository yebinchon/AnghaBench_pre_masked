
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int (* mdio_read ) (int ,int ,int ) ;int phy_id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct mii_if_info *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_5->mdio_read(VAR_5->dev, VAR_5->phy_id, VAR_3);
 if (VAR_6 & VAR_0) {
  VAR_6 = VAR_5->mdio_read(VAR_5->dev, VAR_5->phy_id, VAR_4);
  if (VAR_6 & (VAR_1 | VAR_2))
   return 1;
 }

 return 0;
}
