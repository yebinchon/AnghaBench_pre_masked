
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct temac_local {int indirect_lock; int dev; } ;
struct mii_bus {struct temac_local* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct temac_local*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_2, int VAR_3, int VAR_4, u16 VAR_5)
{
 struct temac_local *VAR_6 = VAR_2->priv;
 unsigned long VAR_7;

 FUNC_0(VAR_6->dev, "temac_mdio_write(phy_id=%i, reg=%x, val=%x)\n",
  VAR_3, VAR_4, VAR_5);




 FUNC_1(VAR_6->indirect_lock, VAR_7);
 FUNC_3(VAR_6, VAR_0, VAR_5);
 FUNC_3(VAR_6, VAR_1, (VAR_3 << 5) | VAR_4);
 FUNC_2(VAR_6->indirect_lock, VAR_7);

 return 0;
}
