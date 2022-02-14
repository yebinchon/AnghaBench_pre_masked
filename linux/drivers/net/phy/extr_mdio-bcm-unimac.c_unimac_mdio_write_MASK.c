
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct unimac_mdio_priv {int (* wait_func ) (int ) ;int wait_func_data; } ;
struct mii_bus {struct unimac_mdio_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct unimac_mdio_priv*) ;
 int FUNC_2 (struct unimac_mdio_priv*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_4, int VAR_5,
        int VAR_6, u16 VAR_7)
{
 struct unimac_mdio_priv *VAR_8 = VAR_4->priv;
 u32 VAR_9;


 VAR_9 = VAR_3 | (VAR_5 << VAR_1) |
  (VAR_6 << VAR_2) | (0xffff & VAR_7);
 FUNC_2(VAR_8, VAR_9, VAR_0);

 FUNC_1(VAR_8);

 return VAR_8->wait_func(VAR_8->wait_func_data);
}
