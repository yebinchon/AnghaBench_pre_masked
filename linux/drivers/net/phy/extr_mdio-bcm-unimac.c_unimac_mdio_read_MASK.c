
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct unimac_mdio_priv {int (* wait_func ) (int ) ;int wait_func_data; } ;
struct mii_bus {int phy_ignore_ta_mask; struct unimac_mdio_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct unimac_mdio_priv*,int ) ;
 int FUNC_2 (struct unimac_mdio_priv*) ;
 int FUNC_3 (struct unimac_mdio_priv*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_6, int VAR_7, int VAR_8)
{
 struct unimac_mdio_priv *VAR_9 = VAR_6->priv;
 int VAR_10;
 u32 VAR_11;


 VAR_11 = VAR_3 | (VAR_7 << VAR_2) | (VAR_8 << VAR_5);
 FUNC_3(VAR_9, VAR_11, VAR_1);


 FUNC_2(VAR_9);

 VAR_10 = VAR_9->wait_func(VAR_9->wait_func_data);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_1(VAR_9, VAR_1);






 if (!(VAR_6->phy_ignore_ta_mask & 1 << VAR_7) && (VAR_11 & VAR_4))
  return -VAR_0;

 return VAR_11 & 0xffff;
}
