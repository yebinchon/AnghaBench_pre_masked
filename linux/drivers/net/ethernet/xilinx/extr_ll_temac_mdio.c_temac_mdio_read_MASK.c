
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {int dev; int indirect_lock; } ;
struct mii_bus {struct temac_local* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct temac_local*,int ) ;
 int FUNC_4 (struct temac_local*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_2, int VAR_3, int VAR_4)
{
 struct temac_local *VAR_5 = VAR_2->priv;
 u32 VAR_6;
 unsigned long VAR_7;




 FUNC_1(VAR_5->indirect_lock, VAR_7);
 FUNC_4(VAR_5, VAR_0, (VAR_3 << 5) | VAR_4);
 VAR_6 = FUNC_3(VAR_5, VAR_1);
 FUNC_2(VAR_5->indirect_lock, VAR_7);

 FUNC_0(VAR_5->dev, "temac_mdio_read(phy_id=%i, reg=%x) == %x\n",
  VAR_3, VAR_4, VAR_6);

 return VAR_6;
}
