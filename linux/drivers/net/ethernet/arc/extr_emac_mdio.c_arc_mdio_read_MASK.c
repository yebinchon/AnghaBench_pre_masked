
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {struct arc_emac_priv* priv; } ;
struct arc_emac_priv {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct arc_emac_priv*) ;
 int FUNC_1 (struct arc_emac_priv*,int ) ;
 int FUNC_2 (struct arc_emac_priv*,int ,int) ;
 int FUNC_3 (int ,char*,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct arc_emac_priv *VAR_4 = VAR_1->priv;
 unsigned int VAR_5;
 int VAR_6;

 FUNC_2(VAR_4, VAR_0,
      0x60020000 | (VAR_2 << 23) | (VAR_3 << 18));

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_0) & 0xffff;

 FUNC_3(VAR_4->dev, "arc_mdio_read(phy_addr=%i, reg_num=%x) = %x\n",
  VAR_2, VAR_3, VAR_5);

 return VAR_5;
}
