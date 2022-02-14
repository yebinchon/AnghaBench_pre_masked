
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xgene_mdio_pdata {int dummy; } ;
struct mii_bus {int dev; scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct xgene_mdio_pdata*,int ) ;
 int FUNC_4 (struct xgene_mdio_pdata*,int ,int) ;

int FUNC_5(struct mii_bus *VAR_9, int VAR_10, int VAR_11)
{
 struct xgene_mdio_pdata *VAR_12 = (struct xgene_mdio_pdata *)VAR_9->priv;
 u32 VAR_13, VAR_14;
 u8 VAR_15 = 10;

 VAR_13 = FUNC_0(VAR_6, VAR_10) | FUNC_0(VAR_8, VAR_11);
 FUNC_4(VAR_12, VAR_2, VAR_13);
 FUNC_4(VAR_12, VAR_3, VAR_7);
 do {
  FUNC_2(5, 10);
  VAR_14 = FUNC_3(VAR_12, VAR_4);
 } while ((VAR_14 & VAR_0) && VAR_15--);

 if (VAR_14 & VAR_0) {
  FUNC_1(&VAR_9->dev, "MII_MGMT read failed\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_3(VAR_12, VAR_5);
 FUNC_4(VAR_12, VAR_3, 0);

 return VAR_13;
}
