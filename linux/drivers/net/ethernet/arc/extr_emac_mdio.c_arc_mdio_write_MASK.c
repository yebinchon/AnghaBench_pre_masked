
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {struct arc_emac_priv* priv; } ;
struct arc_emac_priv {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct arc_emac_priv*) ;
 int FUNC_1 (struct arc_emac_priv*,int ,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_1, int VAR_2,
     int VAR_3, u16 VAR_4)
{
 struct arc_emac_priv *VAR_5 = VAR_1->priv;

 FUNC_2(VAR_5->dev,
  "arc_mdio_write(phy_addr=%i, reg_num=%x, value=%x)\n",
  VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_5, VAR_0,
      0x50020000 | (VAR_2 << 23) | (VAR_3 << 18) | VAR_4);

 return FUNC_0(VAR_5);
}
